from typing import List
import re
import cocotb
from cocotb.triggers import RisingEdge
from .logger import logger


def _read_signal_bits(signal, total_bits: int, field_bits: int, channels: int) -> list[int]:
    """
    Read a cocotb signal (packed or unpacked array) and return a list of
    per-channel integer values, MSB-first (channel 0 = leftmost/highest bits).
    """
    try:
        # Try unpacked array access: signal[i] gives individual elements
        _ = signal[0]
        result = []
        for i in range(channels):
            raw = str(signal[channels - 1 - i].value)  # HDL arrays: [0] = LSB end
            clean = re.sub(r'[^01]', '0', raw)
            result.append(int(clean, 2) if clean else 0)
        return result
    except (TypeError, IndexError, AttributeError):
        # Packed integer signal: one wide bus
        raw = re.sub(r'[^01]', '0', str(signal.value))
        raw = raw.zfill(total_bits)
        return [int(raw[i * field_bits:(i + 1) * field_bits], 2) for i in range(channels)]


def _write_signal(signal, values: list[int], field_bits: int, channels: int):
    """
    Write per-channel integer values to a cocotb signal (packed or unpacked).
    """
    try:
        _ = signal[0]
        # Unpacked: assign per-element, channel 0 = highest index in HDL array
        for i in range(channels):
            signal[channels - 1 - i].value = values[i]
    except (TypeError, IndexError, AttributeError):
        # Packed: join into one integer
        packed = int(''.join(format(v, f'0{field_bits}b') for v in values), 2)
        signal.value = packed


class Memory:
    def __init__(self, dut, addr_bits, data_bits, channels, name, delay):
        self.dut = dut
        self.addr_bits = addr_bits
        self.data_bits = data_bits
        self.memory = [0] * (2 ** addr_bits)
        self.channels = channels
        self.name = name
        self.delay = delay

        self.mem_read_valid   = getattr(dut, f"{name}_mem_read_valid")
        self.mem_read_address = getattr(dut, f"{name}_mem_read_address")
        self.mem_read_ready   = getattr(dut, f"{name}_mem_read_ready")
        self.mem_read_data    = getattr(dut, f"{name}_mem_read_data")

        if name != "program":
            self.mem_write_valid   = getattr(dut, f"{name}_mem_write_valid")
            self.mem_write_address = getattr(dut, f"{name}_mem_write_address")
            self.mem_write_data    = getattr(dut, f"{name}_mem_write_data")
            self.mem_write_ready   = getattr(dut, f"{name}_mem_write_ready")

        self.read_delay_counters  = [0] * self.channels
        self.write_delay_counters = [0] * self.channels

    async def run(self):
        while True:
            await RisingEdge(self.dut.clk)

            c = self.channels

            # --- READ side ---
            mem_read_valid   = _read_signal_bits(self.mem_read_valid,   c,              1,              c)
            mem_read_address = _read_signal_bits(self.mem_read_address, c*self.addr_bits, self.addr_bits, c)

            mem_read_ready = [0] * c
            mem_read_data  = [0] * c

            for i in range(c):
                if mem_read_valid[i] == 1:
                    addr = mem_read_address[i]
                    if addr < len(self.memory):
                        mem_read_data[i]  = self.memory[addr]
                    mem_read_ready[i] = 1

            _write_signal(self.mem_read_data,  mem_read_data,  self.data_bits, c)
            _write_signal(self.mem_read_ready, mem_read_ready, 1,              c)

            # --- WRITE side ---
            if self.name != "program":
                mem_write_valid   = _read_signal_bits(self.mem_write_valid,   c,               1,              c)
                mem_write_address = _read_signal_bits(self.mem_write_address, c*self.addr_bits, self.addr_bits, c)
                mem_write_data    = _read_signal_bits(self.mem_write_data,    c*self.data_bits, self.data_bits, c)

                mem_write_ready = [0] * c

                for i in range(c):
                    if mem_write_valid[i] == 1:
                        addr = mem_write_address[i]
                        if addr < len(self.memory):
                            self.memory[addr] = mem_write_data[i]
                        mem_write_ready[i] = 1

                _write_signal(self.mem_write_ready, mem_write_ready, 1, c)

    def write(self, address, data):
        if address < len(self.memory):
            self.memory[address] = data

    def load(self, rows: List[int]):
        for address, data in enumerate(rows):
            self.write(address, data)

    def display(self, rows, decimal=True):
        logger.info("\n")
        logger.info(f"{self.name.upper()} MEMORY")
        table_size = (8 * 2) + 3
        logger.info("+" + "-" * (table_size - 3) + "+")
        header = "| Addr | Data "
        logger.info(header + " " * (table_size - len(header) - 1) + "|")
        logger.info("+" + "-" * (table_size - 3) + "+")
        for i, data in enumerate(self.memory):
            if i < rows:
                if decimal:
                    row = f"| {i:<4} | {data:<4}"
                    logger.info(row + " " * (table_size - len(row) - 1) + "|")
                else:
                    data_bin = format(data, f'0{16}b')
                    row = f"| {i:<4} | {data_bin} |"
                    logger.info(row + " " * (table_size - len(row) - 1) + "|")
        logger.info("+" + "-" * (table_size - 3) + "+")