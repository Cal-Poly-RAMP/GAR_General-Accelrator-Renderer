// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"device_control_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"device_control_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"program_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("program_mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+8+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+9,0,"program_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("program_mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+10+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+11,0,"data_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("data_mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+12+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+16,0,"data_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("data_mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+17+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+21,0,"data_mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("data_mem_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+22+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_mem_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+26+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+30,0,"data_mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("gpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"DATA_MEM_NUM_CHANNELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"PROGRAM_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"PROGRAM_MEM_NUM_CHANNELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"NUM_CORES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"device_control_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+36,0,"device_control_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"program_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("program_mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+38+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+39,0,"program_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("program_mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+41,0,"data_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("data_mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+42+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+46,0,"data_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("data_mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+47+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+51,0,"data_mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("data_mem_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+52+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_mem_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+60,0,"data_mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+61,0,"thread_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+62,0,"core_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+63,0,"core_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+64,0,"core_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_block_id", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+65+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_thread_count", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+67+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1066,0,"NUM_LSUS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,0,"lsu_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("lsu_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+70+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+74,0,"lsu_read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("lsu_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+75+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+79,0,"lsu_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("lsu_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+80+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+84+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+88,0,"lsu_write_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1069,0,"NUM_FETCHERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"fetcher_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("fetcher_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+90+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+92,0,"fetcher_read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("fetcher_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+93+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("cores[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"core_lsu_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_lsu_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+96+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+98,0,"core_lsu_read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_lsu_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+99+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+101,0,"core_lsu_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_lsu_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+102+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_lsu_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+104+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+106,0,"core_lsu_write_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"PROGRAM_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+107,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+112,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+113,0,"program_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+114,0,"program_mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+115,0,"program_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+116,0,"program_mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+117,0,"data_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+118+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+120,0,"data_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+121+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+123,0,"data_mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_mem_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+124+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_mem_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+126+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+128,0,"data_mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+129,0,"core_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+130,0,"fetcher_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+131,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+132,0,"warp_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("warp_ids", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+133+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_groups", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+137,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+138,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+139,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("masks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+141+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+143,0,"warp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("Running_Threads", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+146,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("next_pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+147+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+149+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+151+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+155+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+159+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+161+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+163+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+165+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+167+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+171+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+175,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+176,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+177,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+178,0,"decoded_nzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+179,0,"decoded_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+180,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+182,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+183,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+184,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+185,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+186,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+187,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+188,0,"decoded_ret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("decoder_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+189,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+190,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+191,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+192,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+193,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+194,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+195,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+196,0,"decoded_nzp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+197,0,"decoded_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+198,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+199,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+202,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+203,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+204,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"decoded_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1071,0,"BRnzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1072,0,"CMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1073,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1074,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1075,0,"MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1076,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1077,0,"LDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1078,0,"STR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1079,0,"CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1080,0,"RET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("fetcher_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"PROGRAM_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+207,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+209,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+210,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+211,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+212,0,"mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+213,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+215,0,"fetcher_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+216,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1081,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1082,0,"FETCHING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1083,0,"FETCHED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("scheduler_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+217,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+219,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+220,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+221,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+222,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+223,0,"decoded_ret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+224,0,"fetcher_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("lsu_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+225+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+227,0,"warp_index",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("warp_ids", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+228+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_groups", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+232,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+233,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+234,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+235,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("masks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+236+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+238,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("next_pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+239+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+241,0,"core_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+242,0,"warp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+243,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("warps_states", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+244+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+246+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+248,0,"warps_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("warp_pcs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+249+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+251,0,"next_warp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+252,0,"start_warp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+253,0,"total_warps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"MASKED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"SCHEDULED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1081,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1082,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1083,0,"DECODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1088,0,"REQUEST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1089,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1090,0,"EXECUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1091,0,"UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1092,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+254,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+255,0,"any_lsu_waiting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+256,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+257,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("warp_manager_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+258,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+259,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+260,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("warps_states", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+261+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+263+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("masks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+265+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_ids", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+267+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_groups", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+271,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+272,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+273,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+274,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+275,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+276,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"total_warps",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("done_warps", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+278+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+280,0,"warps_dispatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+281,0,"warps_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+282,0,"start_execution",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+283,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+284,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+285,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+286,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+287,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+288,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+289,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+290,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+291,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+292,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+293,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+294,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+295,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+296,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+297,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+298,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+299,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+300,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+301,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+302,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+304,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+305+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+321,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+322,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+323,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+324,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+325,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+326,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+327,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+328,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+329,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+330,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+332,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+333,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+334,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+335,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+336+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+352,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+353,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+354,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+355,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+356,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+357,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+358,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+359,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+360,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+361,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+362,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+364,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+367+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+383,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+384,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+385,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+386,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+387,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+388,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+389,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+390,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+391,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+392,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+393,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+394,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+395,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+396,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+397,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+398+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("warps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+414,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+415,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+416,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+417,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+418,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+419,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+420,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+421,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+422,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+423,0,"alu_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+424,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+425,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+426,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+427,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+428,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+429,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+430,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+431,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+432,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+433,0,"mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+434,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+435,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+436,0,"mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+437,0,"mem_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+438,0,"mem_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+439,0,"mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+440,0,"lsu_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+441,0,"lsu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"REQUESTING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+442,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+443,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+444,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+445,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+446,0,"decoded_nzp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+447,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+448,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+449,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+450,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+451,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+452,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+453,0,"nzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("warps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+454,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+455,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+456,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+457,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+458,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+459,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+460,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+461,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+462,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+463,0,"alu_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+464,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+465,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+466,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+467,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+468,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+469,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+470,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+471,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+472,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+473,0,"mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+474,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+475,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+476,0,"mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+477,0,"mem_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+478,0,"mem_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+479,0,"mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+480,0,"lsu_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+481,0,"lsu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"REQUESTING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+482,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+483,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+484,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+485,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+486,0,"decoded_nzp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+487,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+488,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+489,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+490,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+491,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+492,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+493,0,"nzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("warptothreadbus_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+494,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+495,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+496,0,"warp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rs_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+497+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+501+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+505+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+507+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("Running_Threads", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+509+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+511+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+513+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+515+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+519+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+523,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+524,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+525,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1093,0,"lsu_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1068,0,"lsu_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("cores[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+526,0,"core_lsu_read_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_lsu_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+527+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+529,0,"core_lsu_read_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_lsu_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+530+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+532,0,"core_lsu_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_lsu_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+533+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_lsu_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+535+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+537,0,"core_lsu_write_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"PROGRAM_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+538,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+539,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+540,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+542,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+543,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+544,0,"program_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+545,0,"program_mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+546,0,"program_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+547,0,"program_mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+548,0,"data_mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+549+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+551,0,"data_mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+552+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+554,0,"data_mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("data_mem_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+555+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("data_mem_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+557+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+559,0,"data_mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+560,0,"core_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+561,0,"fetcher_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+562,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+563,0,"warp_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("warp_ids", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+564+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_groups", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+568,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+569,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+570,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+571,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("masks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+572+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+574,0,"warp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("Running_Threads", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+575+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+577,0,"current_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("next_pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+578+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+580+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+582+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+586+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+590+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+592+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+594+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+596+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+598+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+602+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+606,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+607,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+608,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+609,0,"decoded_nzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+610,0,"decoded_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+611,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+612,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+613,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+614,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+615,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+616,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+617,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+618,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+619,0,"decoded_ret",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("decoder_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+620,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+621,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+622,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+623,0,"instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+624,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+625,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+626,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+627,0,"decoded_nzp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+628,0,"decoded_immediate",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+629,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+630,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+631,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+632,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+633,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+634,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+635,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+636,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+637,0,"decoded_ret",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1070,0,"NOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1071,0,"BRnzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1072,0,"CMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1073,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1074,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1075,0,"MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1076,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1077,0,"LDR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1078,0,"STR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1079,0,"CONST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1080,0,"RET",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("fetcher_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"PROGRAM_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+638,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+639,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+640,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+641,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+642,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+643,0,"mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+644,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+645,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+646,0,"fetcher_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+647,0,"instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+1081,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1082,0,"FETCHING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1083,0,"FETCHED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("scheduler_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+648,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+649,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+650,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+651,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+652,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+653,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+654,0,"decoded_ret",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+655,0,"fetcher_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("lsu_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+656+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+658,0,"warp_index",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("warp_ids", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+659+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_groups", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+663,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+664,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+665,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+666,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("masks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+667+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+669,0,"current_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("next_pc", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+670+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+672,0,"core_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+673,0,"warp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+674,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("warps_states", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+675+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+677+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+679,0,"warps_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("warp_pcs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+680+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+682,0,"next_warp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+683,0,"start_warp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+684,0,"total_warps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"READY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"STALL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"MASKED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"SCHEDULED",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1081,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1082,0,"FETCH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1083,0,"DECODE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1088,0,"REQUEST",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1089,0,"WAIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1090,0,"EXECUTE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1091,0,"UPDATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1092,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+685,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+686,0,"any_lsu_waiting",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+687,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+688,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("warp_manager_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+689,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+690,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+691,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("warps_states", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+692+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_status", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+694+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("masks", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+696+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_ids", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+698+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 3,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("warp_groups", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+702,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+703,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+704,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+705,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+706,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+707,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+708,0,"total_warps",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("done_warps", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBit(c+709+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0));
    }
    tracep->popPrefix();
    tracep->declBus(c+711,0,"warps_dispatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+712,0,"warps_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+713,0,"start_execution",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+714,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+715,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+716,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+717,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+718,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+719,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+720,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+721,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+722,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+723,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+724,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+725,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+726,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+727,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+728,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+729,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+730,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+731,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+732,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+733,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+734,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+735,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+736+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+752,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+753,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+754,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+755,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+756,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+757,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+758,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+759,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+760,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+761,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+762,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+763,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+764,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+765,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+766,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+767+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[2]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+783,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+784,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+785,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+786,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+787,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+788,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+789,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+790,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+791,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+792,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+793,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+794,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+795,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+796,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+797,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+798+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("threads[3]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("register_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1094,0,"THREAD_ID",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+814,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+815,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+816,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+817,0,"block_id",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+818,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+819,0,"decoded_rd_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+820,0,"decoded_rs_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+821,0,"decoded_rt_address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+822,0,"decoded_reg_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+823,0,"decoded_reg_input_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+824,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+825,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+826,0,"lsu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+827,0,"rs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+828,0,"rt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ARITHMETIC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"MEMORY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"CONSTANT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+829+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("warps[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+845,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+846,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+847,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+848,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+849,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+850,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+851,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+852,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+853,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+854,0,"alu_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+855,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+856,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+857,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+858,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+859,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+860,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+861,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+862,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+863,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+864,0,"mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+865,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+866,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+867,0,"mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+868,0,"mem_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+869,0,"mem_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+870,0,"mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+871,0,"lsu_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+872,0,"lsu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"REQUESTING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+873,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+874,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+875,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+876,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+877,0,"decoded_nzp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+878,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+879,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+880,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+881,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+882,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+883,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+884,0,"nzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("warps[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("alu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+885,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+886,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+887,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+888,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+889,0,"decoded_alu_arithmetic_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+890,0,"decoded_alu_output_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+891,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+892,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+893,0,"alu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"MUL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DIV",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+894,0,"alu_out_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("lsu_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+895,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+896,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+897,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+898,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+899,0,"decoded_mem_read_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+900,0,"decoded_mem_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+901,0,"rs",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+902,0,"rt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+903,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+904,0,"mem_read_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+905,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+906,0,"mem_read_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+907,0,"mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+908,0,"mem_write_address",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+909,0,"mem_write_data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+910,0,"mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+911,0,"lsu_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+912,0,"lsu_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1084,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1085,0,"REQUESTING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1086,0,"WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1087,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("pc_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"DATA_MEM_DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"PROGRAM_MEM_ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+913,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+914,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+915,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+916,0,"core_state",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+917,0,"decoded_nzp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+918,0,"decoded_immediate",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+919,0,"decoded_nzp_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+920,0,"decoded_pc_mux",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+921,0,"alu_out",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+922,0,"current_pc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+923,0,"next_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+924,0,"nzp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("warptothreadbus_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"THREADS_PER_WARP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"WARPS_PER_CORE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+925,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+926,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+927,0,"warp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("rs_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+928+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+932+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+936+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+938+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("Running_Threads", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+940+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rs_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+942+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("rt_computes", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+944+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("lsu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+946+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("alu_out_regs", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+950+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+954,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+955,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+956,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[0]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1069,0,"lsu_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("genblk1[1]", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1094,0,"lsu_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("data_memory_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1065,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"NUM_CONSUMERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"NUM_CHANNELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"WRITE_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+957,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+958,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+959,0,"consumer_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("consumer_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+960+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+964,0,"consumer_read_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("consumer_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+965+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+969,0,"consumer_write_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("consumer_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+970+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("consumer_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+974+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+978,0,"consumer_write_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+979,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+980+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+984,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+985+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+989,0,"mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("mem_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+990+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+994+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+998,0,"mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+1081,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1083,0,"READ_WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1088,0,"WRITE_WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1089,0,"READ_RELAYING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1090,0,"WRITE_RELAYING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("controller_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+999+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("current_consumer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1003+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 1,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1007,0,"channel_serving_consumer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1008,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1009,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1010,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("dcr_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1011,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1012,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1013,0,"device_control_write_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1014,0,"device_control_data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1015,0,"thread_count",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1016,0,"device_conrol_register",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("dispatch_instance", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1069,0,"NUM_CORES",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1066,0,"THREADS_PER_BLOCK",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1017,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1018,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1019,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1020,0,"thread_count",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1021,0,"core_done",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1022,0,"core_start",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1023,0,"core_reset",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("core_block_id", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1024+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("core_thread_count", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1026+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+1028,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1029,0,"total_blocks",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1030,0,"blocks_dispatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+1031,0,"blocks_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+1032,0,"start_execution",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1033,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1034,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1035,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1036,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("program_memory_controller", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1065,0,"ADDR_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1067,0,"DATA_BITS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1069,0,"NUM_CONSUMERS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1068,0,"NUM_CHANNELS",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+1093,0,"WRITE_ENABLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+1037,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1038,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1039,0,"consumer_read_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("consumer_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1040+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1042,0,"consumer_read_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("consumer_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1043+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1045,0,"consumer_write_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("consumer_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1046+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("consumer_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+1048+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1050,0,"consumer_write_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+1051,0,"mem_read_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("mem_read_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1052+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1053,0,"mem_read_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("mem_read_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1054+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1055,0,"mem_write_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->pushPrefix("mem_write_address", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1056+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 7,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("mem_write_data", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1057+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 15,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1058,0,"mem_write_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+1081,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1083,0,"READ_WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1088,0,"WRITE_WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1089,0,"READ_RELAYING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+1090,0,"WRITE_RELAYING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->pushPrefix("controller_state", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1059+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 2,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("current_consumer", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+1060+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 0,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+1061,0,"channel_serving_consumer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1062,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1063,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+1064,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtop___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtop___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_const_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_const_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1065,(8U),32);
    bufp->fullIData(oldp+1066,(4U),32);
    bufp->fullIData(oldp+1067,(0x10U),32);
    bufp->fullIData(oldp+1068,(1U),32);
    bufp->fullIData(oldp+1069,(2U),32);
    bufp->fullCData(oldp+1070,(0U),4);
    bufp->fullCData(oldp+1071,(1U),4);
    bufp->fullCData(oldp+1072,(2U),4);
    bufp->fullCData(oldp+1073,(3U),4);
    bufp->fullCData(oldp+1074,(4U),4);
    bufp->fullCData(oldp+1075,(5U),4);
    bufp->fullCData(oldp+1076,(6U),4);
    bufp->fullCData(oldp+1077,(7U),4);
    bufp->fullCData(oldp+1078,(8U),4);
    bufp->fullCData(oldp+1079,(9U),4);
    bufp->fullCData(oldp+1080,(0xfU),4);
    bufp->fullCData(oldp+1081,(0U),3);
    bufp->fullCData(oldp+1082,(1U),3);
    bufp->fullCData(oldp+1083,(2U),3);
    bufp->fullCData(oldp+1084,(0U),2);
    bufp->fullCData(oldp+1085,(1U),2);
    bufp->fullCData(oldp+1086,(2U),2);
    bufp->fullCData(oldp+1087,(3U),2);
    bufp->fullCData(oldp+1088,(3U),3);
    bufp->fullCData(oldp+1089,(4U),3);
    bufp->fullCData(oldp+1090,(5U),3);
    bufp->fullCData(oldp+1091,(6U),3);
    bufp->fullCData(oldp+1092,(7U),3);
    bufp->fullIData(oldp+1093,(0U),32);
    bufp->fullIData(oldp+1094,(3U),32);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_0_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_0_sub_0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.clk));
    bufp->fullBit(oldp+2,(vlSelfRef.reset));
    bufp->fullBit(oldp+3,(vlSelfRef.start));
    bufp->fullBit(oldp+4,(vlSelfRef.done));
    bufp->fullBit(oldp+5,(vlSelfRef.device_control_write_enable));
    bufp->fullCData(oldp+6,(vlSelfRef.device_control_data),8);
    bufp->fullBit(oldp+7,(vlSelfRef.program_mem_read_valid));
    bufp->fullCData(oldp+8,(vlSelfRef.program_mem_read_address[0]),8);
    bufp->fullBit(oldp+9,(vlSelfRef.program_mem_read_ready));
    bufp->fullSData(oldp+10,(vlSelfRef.program_mem_read_data[0]),16);
    bufp->fullCData(oldp+11,(vlSelfRef.data_mem_read_valid),4);
    bufp->fullCData(oldp+12,(vlSelfRef.data_mem_read_address[0]),8);
    bufp->fullCData(oldp+13,(vlSelfRef.data_mem_read_address[1]),8);
    bufp->fullCData(oldp+14,(vlSelfRef.data_mem_read_address[2]),8);
    bufp->fullCData(oldp+15,(vlSelfRef.data_mem_read_address[3]),8);
    bufp->fullCData(oldp+16,(vlSelfRef.data_mem_read_ready),4);
    bufp->fullCData(oldp+17,(vlSelfRef.data_mem_read_data[0]),8);
    bufp->fullCData(oldp+18,(vlSelfRef.data_mem_read_data[1]),8);
    bufp->fullCData(oldp+19,(vlSelfRef.data_mem_read_data[2]),8);
    bufp->fullCData(oldp+20,(vlSelfRef.data_mem_read_data[3]),8);
    bufp->fullCData(oldp+21,(vlSelfRef.data_mem_write_valid),4);
    bufp->fullCData(oldp+22,(vlSelfRef.data_mem_write_address[0]),8);
    bufp->fullCData(oldp+23,(vlSelfRef.data_mem_write_address[1]),8);
    bufp->fullCData(oldp+24,(vlSelfRef.data_mem_write_address[2]),8);
    bufp->fullCData(oldp+25,(vlSelfRef.data_mem_write_address[3]),8);
    bufp->fullCData(oldp+26,(vlSelfRef.data_mem_write_data[0]),8);
    bufp->fullCData(oldp+27,(vlSelfRef.data_mem_write_data[1]),8);
    bufp->fullCData(oldp+28,(vlSelfRef.data_mem_write_data[2]),8);
    bufp->fullCData(oldp+29,(vlSelfRef.data_mem_write_data[3]),8);
    bufp->fullCData(oldp+30,(vlSelfRef.data_mem_write_ready),4);
    bufp->fullBit(oldp+31,(vlSelfRef.gpu__DOT__clk));
    bufp->fullBit(oldp+32,(vlSelfRef.gpu__DOT__reset));
    bufp->fullBit(oldp+33,(vlSelfRef.gpu__DOT__start));
    bufp->fullBit(oldp+34,(vlSelfRef.gpu__DOT__done));
    bufp->fullBit(oldp+35,(vlSelfRef.gpu__DOT__device_control_write_enable));
    bufp->fullCData(oldp+36,(vlSelfRef.gpu__DOT__device_control_data),8);
    bufp->fullBit(oldp+37,(vlSelfRef.gpu__DOT__program_mem_read_valid));
    bufp->fullCData(oldp+38,(vlSelfRef.gpu__DOT__program_mem_read_address[0]),8);
    bufp->fullBit(oldp+39,(vlSelfRef.gpu__DOT__program_mem_read_ready));
    bufp->fullSData(oldp+40,(vlSelfRef.gpu__DOT__program_mem_read_data[0]),16);
    bufp->fullCData(oldp+41,(vlSelfRef.gpu__DOT__data_mem_read_valid),4);
    bufp->fullCData(oldp+42,(vlSelfRef.gpu__DOT__data_mem_read_address[0]),8);
    bufp->fullCData(oldp+43,(vlSelfRef.gpu__DOT__data_mem_read_address[1]),8);
    bufp->fullCData(oldp+44,(vlSelfRef.gpu__DOT__data_mem_read_address[2]),8);
    bufp->fullCData(oldp+45,(vlSelfRef.gpu__DOT__data_mem_read_address[3]),8);
    bufp->fullCData(oldp+46,(vlSelfRef.gpu__DOT__data_mem_read_ready),4);
    bufp->fullCData(oldp+47,(vlSelfRef.gpu__DOT__data_mem_read_data[0]),8);
    bufp->fullCData(oldp+48,(vlSelfRef.gpu__DOT__data_mem_read_data[1]),8);
    bufp->fullCData(oldp+49,(vlSelfRef.gpu__DOT__data_mem_read_data[2]),8);
    bufp->fullCData(oldp+50,(vlSelfRef.gpu__DOT__data_mem_read_data[3]),8);
    bufp->fullCData(oldp+51,(vlSelfRef.gpu__DOT__data_mem_write_valid),4);
    bufp->fullCData(oldp+52,(vlSelfRef.gpu__DOT__data_mem_write_address[0]),8);
    bufp->fullCData(oldp+53,(vlSelfRef.gpu__DOT__data_mem_write_address[1]),8);
    bufp->fullCData(oldp+54,(vlSelfRef.gpu__DOT__data_mem_write_address[2]),8);
    bufp->fullCData(oldp+55,(vlSelfRef.gpu__DOT__data_mem_write_address[3]),8);
    bufp->fullCData(oldp+56,(vlSelfRef.gpu__DOT__data_mem_write_data[0]),8);
    bufp->fullCData(oldp+57,(vlSelfRef.gpu__DOT__data_mem_write_data[1]),8);
    bufp->fullCData(oldp+58,(vlSelfRef.gpu__DOT__data_mem_write_data[2]),8);
    bufp->fullCData(oldp+59,(vlSelfRef.gpu__DOT__data_mem_write_data[3]),8);
    bufp->fullCData(oldp+60,(vlSelfRef.gpu__DOT__data_mem_write_ready),4);
    bufp->fullCData(oldp+61,(vlSelfRef.gpu__DOT__thread_count),8);
    bufp->fullCData(oldp+62,(vlSelfRef.gpu__DOT__core_start),2);
    bufp->fullCData(oldp+63,(vlSelfRef.gpu__DOT__core_reset),2);
    bufp->fullCData(oldp+64,(vlSelfRef.gpu__DOT__core_done),2);
    bufp->fullCData(oldp+65,(vlSelfRef.gpu__DOT__core_block_id[0]),8);
    bufp->fullCData(oldp+66,(vlSelfRef.gpu__DOT__core_block_id[1]),8);
    bufp->fullCData(oldp+67,(vlSelfRef.gpu__DOT__core_thread_count[0]),3);
    bufp->fullCData(oldp+68,(vlSelfRef.gpu__DOT__core_thread_count[1]),3);
    bufp->fullCData(oldp+69,(vlSelfRef.gpu__DOT__lsu_read_valid),4);
    bufp->fullCData(oldp+70,(vlSelfRef.gpu__DOT__lsu_read_address[0]),8);
    bufp->fullCData(oldp+71,(vlSelfRef.gpu__DOT__lsu_read_address[1]),8);
    bufp->fullCData(oldp+72,(vlSelfRef.gpu__DOT__lsu_read_address[2]),8);
    bufp->fullCData(oldp+73,(vlSelfRef.gpu__DOT__lsu_read_address[3]),8);
    bufp->fullCData(oldp+74,(vlSelfRef.gpu__DOT__lsu_read_ready),4);
    bufp->fullCData(oldp+75,(vlSelfRef.gpu__DOT__lsu_read_data[0]),8);
    bufp->fullCData(oldp+76,(vlSelfRef.gpu__DOT__lsu_read_data[1]),8);
    bufp->fullCData(oldp+77,(vlSelfRef.gpu__DOT__lsu_read_data[2]),8);
    bufp->fullCData(oldp+78,(vlSelfRef.gpu__DOT__lsu_read_data[3]),8);
    bufp->fullCData(oldp+79,(vlSelfRef.gpu__DOT__lsu_write_valid),4);
    bufp->fullCData(oldp+80,(vlSelfRef.gpu__DOT__lsu_write_address[0]),8);
    bufp->fullCData(oldp+81,(vlSelfRef.gpu__DOT__lsu_write_address[1]),8);
    bufp->fullCData(oldp+82,(vlSelfRef.gpu__DOT__lsu_write_address[2]),8);
    bufp->fullCData(oldp+83,(vlSelfRef.gpu__DOT__lsu_write_address[3]),8);
    bufp->fullCData(oldp+84,(vlSelfRef.gpu__DOT__lsu_write_data[0]),8);
    bufp->fullCData(oldp+85,(vlSelfRef.gpu__DOT__lsu_write_data[1]),8);
    bufp->fullCData(oldp+86,(vlSelfRef.gpu__DOT__lsu_write_data[2]),8);
    bufp->fullCData(oldp+87,(vlSelfRef.gpu__DOT__lsu_write_data[3]),8);
    bufp->fullCData(oldp+88,(vlSelfRef.gpu__DOT__lsu_write_ready),4);
    bufp->fullCData(oldp+89,(vlSelfRef.gpu__DOT__fetcher_read_valid),2);
    bufp->fullCData(oldp+90,(vlSelfRef.gpu__DOT__fetcher_read_address[0]),8);
    bufp->fullCData(oldp+91,(vlSelfRef.gpu__DOT__fetcher_read_address[1]),8);
    bufp->fullCData(oldp+92,(vlSelfRef.gpu__DOT__fetcher_read_ready),2);
    bufp->fullSData(oldp+93,(vlSelfRef.gpu__DOT__fetcher_read_data[0]),16);
    bufp->fullSData(oldp+94,(vlSelfRef.gpu__DOT__fetcher_read_data[1]),16);
    bufp->fullCData(oldp+95,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_valid),2);
    bufp->fullCData(oldp+96,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[0]),8);
    bufp->fullCData(oldp+97,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_address[1]),8);
    bufp->fullCData(oldp+98,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_ready),2);
    bufp->fullCData(oldp+99,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[0]),8);
    bufp->fullCData(oldp+100,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_read_data[1]),8);
    bufp->fullCData(oldp+101,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_valid),2);
    bufp->fullCData(oldp+102,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[0]),8);
    bufp->fullCData(oldp+103,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_address[1]),8);
    bufp->fullCData(oldp+104,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[0]),8);
    bufp->fullCData(oldp+105,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_data[1]),8);
    bufp->fullCData(oldp+106,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_lsu_write_ready),2);
    bufp->fullBit(oldp+107,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__clk));
    bufp->fullBit(oldp+108,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__reset));
    bufp->fullBit(oldp+109,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__start));
    bufp->fullBit(oldp+110,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__done));
    bufp->fullCData(oldp+111,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__block_id),8);
    bufp->fullCData(oldp+112,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__thread_count),3);
    bufp->fullBit(oldp+113,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_valid));
    bufp->fullCData(oldp+114,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_address),8);
    bufp->fullBit(oldp+115,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_ready));
    bufp->fullSData(oldp+116,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__program_mem_read_data),16);
    bufp->fullCData(oldp+117,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_valid),2);
    bufp->fullCData(oldp+118,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[0]),8);
    bufp->fullCData(oldp+119,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_address[1]),8);
    bufp->fullCData(oldp+120,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_ready),2);
    bufp->fullCData(oldp+121,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[0]),8);
    bufp->fullCData(oldp+122,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_read_data[1]),8);
    bufp->fullCData(oldp+123,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_valid),2);
    bufp->fullCData(oldp+124,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[0]),8);
    bufp->fullCData(oldp+125,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_address[1]),8);
    bufp->fullCData(oldp+126,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[0]),8);
    bufp->fullCData(oldp+127,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_data[1]),8);
    bufp->fullCData(oldp+128,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__data_mem_write_ready),2);
    bufp->fullCData(oldp+129,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__core_state),3);
    bufp->fullCData(oldp+130,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_state),3);
    bufp->fullSData(oldp+131,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__instruction),16);
    bufp->fullCData(oldp+132,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_index),2);
    bufp->fullCData(oldp+133,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[0]),4);
    bufp->fullCData(oldp+134,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[1]),4);
    bufp->fullCData(oldp+135,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[2]),4);
    bufp->fullCData(oldp+136,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_ids[3]),4);
    bufp->fullCData(oldp+137,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
                              [0U][0U]),3);
    bufp->fullCData(oldp+138,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
                              [0U][1U]),3);
    bufp->fullCData(oldp+139,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
                              [1U][0U]),3);
    bufp->fullCData(oldp+140,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp_groups
                              [1U][1U]),3);
    bufp->fullCData(oldp+141,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks[0]),2);
    bufp->fullCData(oldp+142,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__masks[1]),2);
    bufp->fullCData(oldp+143,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warp),4);
    bufp->fullCData(oldp+144,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[0]),3);
    bufp->fullCData(oldp+145,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__Running_Threads[1]),3);
    bufp->fullCData(oldp+146,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+147,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[0]),8);
    bufp->fullCData(oldp+148,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__next_pc[1]),8);
    bufp->fullCData(oldp+149,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[0]),2);
    bufp->fullCData(oldp+150,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_state[1]),2);
    bufp->fullCData(oldp+151,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[0]),8);
    bufp->fullCData(oldp+152,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[1]),8);
    bufp->fullCData(oldp+153,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[2]),8);
    bufp->fullCData(oldp+154,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_regs[3]),8);
    bufp->fullCData(oldp+155,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[0]),8);
    bufp->fullCData(oldp+156,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[1]),8);
    bufp->fullCData(oldp+157,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[2]),8);
    bufp->fullCData(oldp+158,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_regs[3]),8);
    bufp->fullCData(oldp+159,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[0]),8);
    bufp->fullCData(oldp+160,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_computes[1]),8);
    bufp->fullCData(oldp+161,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[0]),8);
    bufp->fullCData(oldp+162,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_computes[1]),8);
    bufp->fullCData(oldp+163,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[0]),8);
    bufp->fullCData(oldp+164,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rs_computes[1]),8);
    bufp->fullCData(oldp+165,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[0]),8);
    bufp->fullCData(oldp+166,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__rt_computes[1]),8);
    bufp->fullCData(oldp+167,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[0]),8);
    bufp->fullCData(oldp+168,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[1]),8);
    bufp->fullCData(oldp+169,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[2]),8);
    bufp->fullCData(oldp+170,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__lsu_out_regs[3]),8);
    bufp->fullCData(oldp+171,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[0]),8);
    bufp->fullCData(oldp+172,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[1]),8);
    bufp->fullCData(oldp+173,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[2]),8);
    bufp->fullCData(oldp+174,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__alu_out_regs[3]),8);
    bufp->fullCData(oldp+175,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+176,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+177,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_rt_address),4);
    bufp->fullCData(oldp+178,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+179,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+180,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_write_enable));
    bufp->fullBit(oldp+181,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+182,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_mem_write_enable));
    bufp->fullBit(oldp+183,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_nzp_write_enable));
    bufp->fullCData(oldp+184,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+185,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+186,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_alu_output_mux));
    bufp->fullBit(oldp+187,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_pc_mux));
    bufp->fullBit(oldp+188,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoded_ret));
    bufp->fullBit(oldp+189,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__clk));
    bufp->fullBit(oldp+190,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset));
    bufp->fullCData(oldp+191,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state),3);
    bufp->fullSData(oldp+192,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction),16);
    bufp->fullCData(oldp+193,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+194,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+195,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address),4);
    bufp->fullCData(oldp+196,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+197,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+198,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable));
    bufp->fullBit(oldp+199,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+200,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable));
    bufp->fullBit(oldp+201,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable));
    bufp->fullCData(oldp+202,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+203,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+204,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux));
    bufp->fullBit(oldp+205,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux));
    bufp->fullBit(oldp+206,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret));
    bufp->fullBit(oldp+207,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__clk));
    bufp->fullBit(oldp+208,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset));
    bufp->fullCData(oldp+209,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state),3);
    bufp->fullCData(oldp+210,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc),8);
    bufp->fullBit(oldp+211,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid));
    bufp->fullCData(oldp+212,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address),8);
    bufp->fullBit(oldp+213,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready));
    bufp->fullSData(oldp+214,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data),16);
    bufp->fullCData(oldp+215,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state),3);
    bufp->fullSData(oldp+216,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction),16);
    bufp->fullBit(oldp+217,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk));
    bufp->fullBit(oldp+218,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset));
    bufp->fullBit(oldp+219,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start));
    bufp->fullCData(oldp+220,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count),3);
    bufp->fullBit(oldp+221,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+222,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable));
    bufp->fullBit(oldp+223,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret));
    bufp->fullCData(oldp+224,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state),3);
    bufp->fullCData(oldp+225,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[0]),2);
    bufp->fullCData(oldp+226,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[1]),2);
    bufp->fullCData(oldp+227,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_index),2);
    bufp->fullCData(oldp+228,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[0]),4);
    bufp->fullCData(oldp+229,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[1]),4);
    bufp->fullCData(oldp+230,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[2]),4);
    bufp->fullCData(oldp+231,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[3]),4);
    bufp->fullCData(oldp+232,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [0U][0U]),3);
    bufp->fullCData(oldp+233,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [0U][1U]),3);
    bufp->fullCData(oldp+234,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [1U][0U]),3);
    bufp->fullCData(oldp+235,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [1U][1U]),3);
    bufp->fullCData(oldp+236,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[0]),2);
    bufp->fullCData(oldp+237,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[1]),2);
    bufp->fullCData(oldp+238,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+239,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[0]),8);
    bufp->fullCData(oldp+240,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[1]),8);
    bufp->fullCData(oldp+241,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state),3);
    bufp->fullCData(oldp+242,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp),4);
    bufp->fullBit(oldp+243,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done));
    bufp->fullCData(oldp+244,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[0]),8);
    bufp->fullCData(oldp+245,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[1]),8);
    bufp->fullCData(oldp+246,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[0]),2);
    bufp->fullCData(oldp+247,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[1]),2);
    bufp->fullCData(oldp+248,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready),2);
    bufp->fullCData(oldp+249,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[0]),8);
    bufp->fullCData(oldp+250,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[1]),8);
    bufp->fullCData(oldp+251,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp),2);
    bufp->fullCData(oldp+252,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start_warp),3);
    bufp->fullCData(oldp+253,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps),8);
    bufp->fullIData(oldp+254,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+255,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting));
    bufp->fullIData(oldp+256,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+257,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+258,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk));
    bufp->fullBit(oldp+259,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset));
    bufp->fullBit(oldp+260,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start));
    bufp->fullCData(oldp+261,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[0]),8);
    bufp->fullCData(oldp+262,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[1]),8);
    bufp->fullCData(oldp+263,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[0]),2);
    bufp->fullCData(oldp+264,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[1]),2);
    bufp->fullCData(oldp+265,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[0]),2);
    bufp->fullCData(oldp+266,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[1]),2);
    bufp->fullCData(oldp+267,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[0]),4);
    bufp->fullCData(oldp+268,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[1]),4);
    bufp->fullCData(oldp+269,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[2]),4);
    bufp->fullCData(oldp+270,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[3]),4);
    bufp->fullCData(oldp+271,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [0U][0U]),3);
    bufp->fullCData(oldp+272,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [0U][1U]),3);
    bufp->fullCData(oldp+273,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [1U][0U]),3);
    bufp->fullCData(oldp+274,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [1U][1U]),3);
    bufp->fullCData(oldp+275,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count),3);
    bufp->fullBit(oldp+276,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done));
    bufp->fullCData(oldp+277,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps),8);
    bufp->fullBit(oldp+278,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[0]));
    bufp->fullBit(oldp+279,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[1]));
    bufp->fullCData(oldp+280,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_dispatched),8);
    bufp->fullCData(oldp+281,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done),8);
    bufp->fullBit(oldp+282,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution));
    bufp->fullIData(oldp+283,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+284,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+285,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+286,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+287,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+288,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j),32);
    bufp->fullIData(oldp+289,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk7__DOT__i),32);
    bufp->fullBit(oldp+290,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+291,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+292,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+293,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+294,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+295,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+296,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+297,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+298,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+299,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+300,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+301,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+302,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+303,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+304,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+305,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+306,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+307,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+308,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+309,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+310,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+311,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+312,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+313,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+314,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+315,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+316,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+317,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+318,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+319,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+320,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+321,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+322,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+323,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+324,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+325,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+326,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+327,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+328,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+329,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+330,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+331,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+332,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+333,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+334,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+335,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+336,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+337,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+338,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+339,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+340,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+341,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+342,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+343,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+344,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+345,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+346,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+347,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+348,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+349,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+350,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+351,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+352,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+353,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+354,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+355,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+356,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+357,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+358,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+359,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+360,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+361,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+362,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+363,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+364,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+365,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+366,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+367,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+368,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+369,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+370,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+371,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+372,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+373,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+374,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+375,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+376,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+377,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+378,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+379,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+380,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+381,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+382,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+383,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+384,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+385,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+386,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+387,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+388,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+389,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+390,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+391,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+392,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+393,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+394,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+395,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+396,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+397,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+398,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+399,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+400,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+401,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+402,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+403,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+404,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+405,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+406,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+407,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+408,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+409,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+410,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+411,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+412,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+413,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+414,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__clk));
    bufp->fullBit(oldp+415,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset));
    bufp->fullBit(oldp+416,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable));
    bufp->fullCData(oldp+417,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state),3);
    bufp->fullCData(oldp+418,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+419,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux));
    bufp->fullCData(oldp+420,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs),8);
    bufp->fullCData(oldp+421,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt),8);
    bufp->fullCData(oldp+422,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+423,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg),8);
    bufp->fullBit(oldp+424,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__clk));
    bufp->fullBit(oldp+425,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset));
    bufp->fullBit(oldp+426,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable));
    bufp->fullCData(oldp+427,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state),3);
    bufp->fullBit(oldp+428,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+429,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable));
    bufp->fullCData(oldp+430,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs),8);
    bufp->fullCData(oldp+431,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt),8);
    bufp->fullBit(oldp+432,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid));
    bufp->fullCData(oldp+433,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address),8);
    bufp->fullBit(oldp+434,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready));
    bufp->fullCData(oldp+435,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data),8);
    bufp->fullBit(oldp+436,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid));
    bufp->fullCData(oldp+437,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address),8);
    bufp->fullCData(oldp+438,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data),8);
    bufp->fullBit(oldp+439,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready));
    bufp->fullCData(oldp+440,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state),2);
    bufp->fullCData(oldp+441,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out),8);
    bufp->fullBit(oldp+442,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__clk));
    bufp->fullBit(oldp+443,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset));
    bufp->fullBit(oldp+444,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable));
    bufp->fullCData(oldp+445,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state),3);
    bufp->fullCData(oldp+446,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+447,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+448,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable));
    bufp->fullBit(oldp+449,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux));
    bufp->fullCData(oldp+450,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+451,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+452,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc),8);
    bufp->fullCData(oldp+453,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp),3);
    bufp->fullBit(oldp+454,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__clk));
    bufp->fullBit(oldp+455,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset));
    bufp->fullBit(oldp+456,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable));
    bufp->fullCData(oldp+457,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state),3);
    bufp->fullCData(oldp+458,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+459,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux));
    bufp->fullCData(oldp+460,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs),8);
    bufp->fullCData(oldp+461,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt),8);
    bufp->fullCData(oldp+462,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+463,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg),8);
    bufp->fullBit(oldp+464,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__clk));
    bufp->fullBit(oldp+465,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset));
    bufp->fullBit(oldp+466,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable));
    bufp->fullCData(oldp+467,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state),3);
    bufp->fullBit(oldp+468,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+469,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable));
    bufp->fullCData(oldp+470,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs),8);
    bufp->fullCData(oldp+471,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt),8);
    bufp->fullBit(oldp+472,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid));
    bufp->fullCData(oldp+473,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address),8);
    bufp->fullBit(oldp+474,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready));
    bufp->fullCData(oldp+475,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data),8);
    bufp->fullBit(oldp+476,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid));
    bufp->fullCData(oldp+477,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address),8);
    bufp->fullCData(oldp+478,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data),8);
    bufp->fullBit(oldp+479,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready));
    bufp->fullCData(oldp+480,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state),2);
    bufp->fullCData(oldp+481,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out),8);
    bufp->fullBit(oldp+482,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__clk));
    bufp->fullBit(oldp+483,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset));
    bufp->fullBit(oldp+484,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable));
    bufp->fullCData(oldp+485,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state),3);
    bufp->fullCData(oldp+486,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+487,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+488,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable));
    bufp->fullBit(oldp+489,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux));
    bufp->fullCData(oldp+490,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+491,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+492,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc),8);
    bufp->fullCData(oldp+493,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp),3);
    bufp->fullBit(oldp+494,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__clk));
    bufp->fullBit(oldp+495,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset));
    bufp->fullCData(oldp+496,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp),4);
    bufp->fullCData(oldp+497,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[0]),8);
    bufp->fullCData(oldp+498,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[1]),8);
    bufp->fullCData(oldp+499,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[2]),8);
    bufp->fullCData(oldp+500,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[3]),8);
    bufp->fullCData(oldp+501,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[0]),8);
    bufp->fullCData(oldp+502,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[1]),8);
    bufp->fullCData(oldp+503,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[2]),8);
    bufp->fullCData(oldp+504,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[3]),8);
    bufp->fullCData(oldp+505,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[0]),8);
    bufp->fullCData(oldp+506,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[1]),8);
    bufp->fullCData(oldp+507,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[0]),8);
    bufp->fullCData(oldp+508,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[1]),8);
    bufp->fullCData(oldp+509,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[0]),3);
    bufp->fullCData(oldp+510,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[1]),3);
    bufp->fullCData(oldp+511,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0]),8);
    bufp->fullCData(oldp+512,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1]),8);
    bufp->fullCData(oldp+513,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0]),8);
    bufp->fullCData(oldp+514,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1]),8);
    bufp->fullCData(oldp+515,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[0]),8);
    bufp->fullCData(oldp+516,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[1]),8);
    bufp->fullCData(oldp+517,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[2]),8);
    bufp->fullCData(oldp+518,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[3]),8);
    bufp->fullCData(oldp+519,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[0]),8);
    bufp->fullCData(oldp+520,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[1]),8);
    bufp->fullCData(oldp+521,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[2]),8);
    bufp->fullCData(oldp+522,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[3]),8);
    bufp->fullIData(oldp+523,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+524,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+525,(vlSelfRef.gpu__DOT__cores__BRA__0__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i),32);
    bufp->fullCData(oldp+526,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_valid),2);
    bufp->fullCData(oldp+527,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[0]),8);
    bufp->fullCData(oldp+528,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_address[1]),8);
    bufp->fullCData(oldp+529,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_ready),2);
    bufp->fullCData(oldp+530,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[0]),8);
    bufp->fullCData(oldp+531,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_read_data[1]),8);
    bufp->fullCData(oldp+532,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_valid),2);
    bufp->fullCData(oldp+533,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[0]),8);
    bufp->fullCData(oldp+534,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_address[1]),8);
    bufp->fullCData(oldp+535,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[0]),8);
    bufp->fullCData(oldp+536,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_data[1]),8);
    bufp->fullCData(oldp+537,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_lsu_write_ready),2);
    bufp->fullBit(oldp+538,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__clk));
    bufp->fullBit(oldp+539,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__reset));
    bufp->fullBit(oldp+540,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__start));
    bufp->fullBit(oldp+541,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__done));
    bufp->fullCData(oldp+542,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__block_id),8);
    bufp->fullCData(oldp+543,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__thread_count),3);
    bufp->fullBit(oldp+544,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_valid));
    bufp->fullCData(oldp+545,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_address),8);
    bufp->fullBit(oldp+546,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_ready));
    bufp->fullSData(oldp+547,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__program_mem_read_data),16);
    bufp->fullCData(oldp+548,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_valid),2);
    bufp->fullCData(oldp+549,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[0]),8);
    bufp->fullCData(oldp+550,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_address[1]),8);
    bufp->fullCData(oldp+551,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_ready),2);
    bufp->fullCData(oldp+552,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[0]),8);
    bufp->fullCData(oldp+553,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_read_data[1]),8);
    bufp->fullCData(oldp+554,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_valid),2);
    bufp->fullCData(oldp+555,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[0]),8);
    bufp->fullCData(oldp+556,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_address[1]),8);
    bufp->fullCData(oldp+557,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[0]),8);
    bufp->fullCData(oldp+558,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_data[1]),8);
    bufp->fullCData(oldp+559,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__data_mem_write_ready),2);
    bufp->fullCData(oldp+560,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__core_state),3);
    bufp->fullCData(oldp+561,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_state),3);
    bufp->fullSData(oldp+562,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__instruction),16);
    bufp->fullCData(oldp+563,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_index),2);
    bufp->fullCData(oldp+564,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[0]),4);
    bufp->fullCData(oldp+565,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[1]),4);
    bufp->fullCData(oldp+566,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[2]),4);
    bufp->fullCData(oldp+567,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_ids[3]),4);
    bufp->fullCData(oldp+568,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
                              [0U][0U]),3);
    bufp->fullCData(oldp+569,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
                              [0U][1U]),3);
    bufp->fullCData(oldp+570,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
                              [1U][0U]),3);
    bufp->fullCData(oldp+571,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp_groups
                              [1U][1U]),3);
    bufp->fullCData(oldp+572,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks[0]),2);
    bufp->fullCData(oldp+573,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__masks[1]),2);
    bufp->fullCData(oldp+574,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warp),4);
    bufp->fullCData(oldp+575,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[0]),3);
    bufp->fullCData(oldp+576,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__Running_Threads[1]),3);
    bufp->fullCData(oldp+577,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+578,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[0]),8);
    bufp->fullCData(oldp+579,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__next_pc[1]),8);
    bufp->fullCData(oldp+580,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[0]),2);
    bufp->fullCData(oldp+581,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_state[1]),2);
    bufp->fullCData(oldp+582,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[0]),8);
    bufp->fullCData(oldp+583,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[1]),8);
    bufp->fullCData(oldp+584,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[2]),8);
    bufp->fullCData(oldp+585,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_regs[3]),8);
    bufp->fullCData(oldp+586,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[0]),8);
    bufp->fullCData(oldp+587,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[1]),8);
    bufp->fullCData(oldp+588,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[2]),8);
    bufp->fullCData(oldp+589,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_regs[3]),8);
    bufp->fullCData(oldp+590,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[0]),8);
    bufp->fullCData(oldp+591,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_computes[1]),8);
    bufp->fullCData(oldp+592,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[0]),8);
    bufp->fullCData(oldp+593,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_computes[1]),8);
    bufp->fullCData(oldp+594,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[0]),8);
    bufp->fullCData(oldp+595,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rs_computes[1]),8);
    bufp->fullCData(oldp+596,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[0]),8);
    bufp->fullCData(oldp+597,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__rt_computes[1]),8);
    bufp->fullCData(oldp+598,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[0]),8);
    bufp->fullCData(oldp+599,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[1]),8);
    bufp->fullCData(oldp+600,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[2]),8);
    bufp->fullCData(oldp+601,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__lsu_out_regs[3]),8);
    bufp->fullCData(oldp+602,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[0]),8);
    bufp->fullCData(oldp+603,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[1]),8);
    bufp->fullCData(oldp+604,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[2]),8);
    bufp->fullCData(oldp+605,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__alu_out_regs[3]),8);
    bufp->fullCData(oldp+606,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+607,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+608,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_rt_address),4);
    bufp->fullCData(oldp+609,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+610,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+611,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_write_enable));
    bufp->fullBit(oldp+612,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+613,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_mem_write_enable));
    bufp->fullBit(oldp+614,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_nzp_write_enable));
    bufp->fullCData(oldp+615,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+616,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+617,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_alu_output_mux));
    bufp->fullBit(oldp+618,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_pc_mux));
    bufp->fullBit(oldp+619,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoded_ret));
    bufp->fullBit(oldp+620,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__clk));
    bufp->fullBit(oldp+621,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__reset));
    bufp->fullCData(oldp+622,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__core_state),3);
    bufp->fullSData(oldp+623,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__instruction),16);
    bufp->fullCData(oldp+624,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+625,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+626,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_rt_address),4);
    bufp->fullCData(oldp+627,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+628,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+629,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_write_enable));
    bufp->fullBit(oldp+630,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+631,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_mem_write_enable));
    bufp->fullBit(oldp+632,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_nzp_write_enable));
    bufp->fullCData(oldp+633,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+634,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+635,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_alu_output_mux));
    bufp->fullBit(oldp+636,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_pc_mux));
    bufp->fullBit(oldp+637,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__decoder_instance__DOT__decoded_ret));
    bufp->fullBit(oldp+638,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__clk));
    bufp->fullBit(oldp+639,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__reset));
    bufp->fullCData(oldp+640,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__core_state),3);
    bufp->fullCData(oldp+641,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__current_pc),8);
    bufp->fullBit(oldp+642,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_valid));
    bufp->fullCData(oldp+643,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_address),8);
    bufp->fullBit(oldp+644,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_ready));
    bufp->fullSData(oldp+645,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__mem_read_data),16);
    bufp->fullCData(oldp+646,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__fetcher_state),3);
    bufp->fullSData(oldp+647,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__fetcher_instance__DOT__instruction),16);
    bufp->fullBit(oldp+648,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__clk));
    bufp->fullBit(oldp+649,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__reset));
    bufp->fullBit(oldp+650,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start));
    bufp->fullCData(oldp+651,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__thread_count),3);
    bufp->fullBit(oldp+652,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+653,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_mem_write_enable));
    bufp->fullBit(oldp+654,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__decoded_ret));
    bufp->fullCData(oldp+655,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__fetcher_state),3);
    bufp->fullCData(oldp+656,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[0]),2);
    bufp->fullCData(oldp+657,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__lsu_state[1]),2);
    bufp->fullCData(oldp+658,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_index),2);
    bufp->fullCData(oldp+659,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[0]),4);
    bufp->fullCData(oldp+660,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[1]),4);
    bufp->fullCData(oldp+661,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[2]),4);
    bufp->fullCData(oldp+662,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_ids[3]),4);
    bufp->fullCData(oldp+663,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [0U][0U]),3);
    bufp->fullCData(oldp+664,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [0U][1U]),3);
    bufp->fullCData(oldp+665,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [1U][0U]),3);
    bufp->fullCData(oldp+666,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_groups
                              [1U][1U]),3);
    bufp->fullCData(oldp+667,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[0]),2);
    bufp->fullCData(oldp+668,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__masks[1]),2);
    bufp->fullCData(oldp+669,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+670,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[0]),8);
    bufp->fullCData(oldp+671,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_pc[1]),8);
    bufp->fullCData(oldp+672,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__core_state),3);
    bufp->fullCData(oldp+673,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp),4);
    bufp->fullBit(oldp+674,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__done));
    bufp->fullCData(oldp+675,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[0]),8);
    bufp->fullCData(oldp+676,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_states[1]),8);
    bufp->fullCData(oldp+677,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[0]),2);
    bufp->fullCData(oldp+678,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_status[1]),2);
    bufp->fullCData(oldp+679,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warps_ready),2);
    bufp->fullCData(oldp+680,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[0]),8);
    bufp->fullCData(oldp+681,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_pcs[1]),8);
    bufp->fullCData(oldp+682,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__next_warp),2);
    bufp->fullCData(oldp+683,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__start_warp),3);
    bufp->fullCData(oldp+684,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__total_warps),8);
    bufp->fullIData(oldp+685,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullBit(oldp+686,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__any_lsu_waiting));
    bufp->fullIData(oldp+687,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk2__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+688,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+689,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__clk));
    bufp->fullBit(oldp+690,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__reset));
    bufp->fullBit(oldp+691,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start));
    bufp->fullCData(oldp+692,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[0]),8);
    bufp->fullCData(oldp+693,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_states[1]),8);
    bufp->fullCData(oldp+694,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[0]),2);
    bufp->fullCData(oldp+695,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_status[1]),2);
    bufp->fullCData(oldp+696,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[0]),2);
    bufp->fullCData(oldp+697,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__masks[1]),2);
    bufp->fullCData(oldp+698,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[0]),4);
    bufp->fullCData(oldp+699,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[1]),4);
    bufp->fullCData(oldp+700,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[2]),4);
    bufp->fullCData(oldp+701,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_ids[3]),4);
    bufp->fullCData(oldp+702,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [0U][0U]),3);
    bufp->fullCData(oldp+703,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [0U][1U]),3);
    bufp->fullCData(oldp+704,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [1U][0U]),3);
    bufp->fullCData(oldp+705,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warp_groups
                              [1U][1U]),3);
    bufp->fullCData(oldp+706,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__thread_count),3);
    bufp->fullBit(oldp+707,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done));
    bufp->fullCData(oldp+708,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__total_warps),8);
    bufp->fullBit(oldp+709,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[0]));
    bufp->fullBit(oldp+710,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__done_warps[1]));
    bufp->fullCData(oldp+711,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_dispatched),8);
    bufp->fullCData(oldp+712,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__warps_done),8);
    bufp->fullBit(oldp+713,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__start_execution));
    bufp->fullIData(oldp+714,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+715,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+716,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+717,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+718,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+719,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk5__DOT__unnamedblk6__DOT__j),32);
    bufp->fullIData(oldp+720,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__scheduler_instance__DOT__warp_manager_instance__DOT__unnamedblk7__DOT__i),32);
    bufp->fullBit(oldp+721,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+722,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+723,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+724,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+725,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+726,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+727,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+728,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+729,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+730,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+731,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+732,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+733,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+734,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+735,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+736,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+737,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+738,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+739,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+740,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+741,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+742,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+743,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+744,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+745,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+746,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+747,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+748,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+749,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+750,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+751,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__0__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+752,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+753,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+754,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+755,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+756,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+757,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+758,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+759,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+760,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+761,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+762,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+763,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+764,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+765,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+766,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+767,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+768,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+769,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+770,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+771,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+772,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+773,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+774,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+775,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+776,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+777,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+778,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+779,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+780,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+781,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+782,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__1__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+783,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+784,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+785,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+786,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+787,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+788,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+789,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+790,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+791,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+792,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+793,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+794,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+795,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+796,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+797,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+798,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+799,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+800,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+801,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+802,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+803,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+804,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+805,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+806,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+807,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+808,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+809,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+810,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+811,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+812,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+813,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__2__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+814,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__clk));
    bufp->fullBit(oldp+815,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__reset));
    bufp->fullBit(oldp+816,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__enable));
    bufp->fullCData(oldp+817,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__block_id),8);
    bufp->fullCData(oldp+818,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__core_state),3);
    bufp->fullCData(oldp+819,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rd_address),4);
    bufp->fullCData(oldp+820,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rs_address),4);
    bufp->fullCData(oldp+821,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_rt_address),4);
    bufp->fullBit(oldp+822,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_write_enable));
    bufp->fullCData(oldp+823,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_reg_input_mux),2);
    bufp->fullCData(oldp+824,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__decoded_immediate),8);
    bufp->fullCData(oldp+825,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+826,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__lsu_out),8);
    bufp->fullCData(oldp+827,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rs),8);
    bufp->fullCData(oldp+828,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__rt),8);
    bufp->fullCData(oldp+829,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[0]),8);
    bufp->fullCData(oldp+830,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[1]),8);
    bufp->fullCData(oldp+831,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[2]),8);
    bufp->fullCData(oldp+832,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[3]),8);
    bufp->fullCData(oldp+833,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[4]),8);
    bufp->fullCData(oldp+834,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[5]),8);
    bufp->fullCData(oldp+835,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[6]),8);
    bufp->fullCData(oldp+836,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[7]),8);
    bufp->fullCData(oldp+837,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[8]),8);
    bufp->fullCData(oldp+838,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[9]),8);
    bufp->fullCData(oldp+839,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[10]),8);
    bufp->fullCData(oldp+840,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[11]),8);
    bufp->fullCData(oldp+841,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[12]),8);
    bufp->fullCData(oldp+842,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[13]),8);
    bufp->fullCData(oldp+843,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[14]),8);
    bufp->fullCData(oldp+844,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__threads__BRA__3__KET____DOT__register_instance__DOT__registers[15]),8);
    bufp->fullBit(oldp+845,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__clk));
    bufp->fullBit(oldp+846,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__reset));
    bufp->fullBit(oldp+847,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__enable));
    bufp->fullCData(oldp+848,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__core_state),3);
    bufp->fullCData(oldp+849,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+850,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__decoded_alu_output_mux));
    bufp->fullCData(oldp+851,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rs),8);
    bufp->fullCData(oldp+852,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__rt),8);
    bufp->fullCData(oldp+853,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+854,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__alu_instance__DOT__alu_out_reg),8);
    bufp->fullBit(oldp+855,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__clk));
    bufp->fullBit(oldp+856,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__reset));
    bufp->fullBit(oldp+857,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__enable));
    bufp->fullCData(oldp+858,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__core_state),3);
    bufp->fullBit(oldp+859,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+860,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable));
    bufp->fullCData(oldp+861,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rs),8);
    bufp->fullCData(oldp+862,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__rt),8);
    bufp->fullBit(oldp+863,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_valid));
    bufp->fullCData(oldp+864,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_address),8);
    bufp->fullBit(oldp+865,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_ready));
    bufp->fullCData(oldp+866,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_read_data),8);
    bufp->fullBit(oldp+867,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_valid));
    bufp->fullCData(oldp+868,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_address),8);
    bufp->fullCData(oldp+869,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_data),8);
    bufp->fullBit(oldp+870,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__mem_write_ready));
    bufp->fullCData(oldp+871,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_state),2);
    bufp->fullCData(oldp+872,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__lsu_instance__DOT__lsu_out),8);
    bufp->fullBit(oldp+873,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__clk));
    bufp->fullBit(oldp+874,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__reset));
    bufp->fullBit(oldp+875,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__enable));
    bufp->fullCData(oldp+876,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__core_state),3);
    bufp->fullCData(oldp+877,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+878,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+879,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable));
    bufp->fullBit(oldp+880,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__decoded_pc_mux));
    bufp->fullCData(oldp+881,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+882,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+883,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__next_pc),8);
    bufp->fullCData(oldp+884,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__0__KET____DOT__pc_instance__DOT__nzp),3);
    bufp->fullBit(oldp+885,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__clk));
    bufp->fullBit(oldp+886,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__reset));
    bufp->fullBit(oldp+887,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__enable));
    bufp->fullCData(oldp+888,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__core_state),3);
    bufp->fullCData(oldp+889,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_arithmetic_mux),2);
    bufp->fullBit(oldp+890,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__decoded_alu_output_mux));
    bufp->fullCData(oldp+891,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rs),8);
    bufp->fullCData(oldp+892,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__rt),8);
    bufp->fullCData(oldp+893,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+894,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__alu_instance__DOT__alu_out_reg),8);
    bufp->fullBit(oldp+895,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__clk));
    bufp->fullBit(oldp+896,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__reset));
    bufp->fullBit(oldp+897,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__enable));
    bufp->fullCData(oldp+898,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__core_state),3);
    bufp->fullBit(oldp+899,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_read_enable));
    bufp->fullBit(oldp+900,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__decoded_mem_write_enable));
    bufp->fullCData(oldp+901,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rs),8);
    bufp->fullCData(oldp+902,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__rt),8);
    bufp->fullBit(oldp+903,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_valid));
    bufp->fullCData(oldp+904,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_address),8);
    bufp->fullBit(oldp+905,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_ready));
    bufp->fullCData(oldp+906,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_read_data),8);
    bufp->fullBit(oldp+907,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_valid));
    bufp->fullCData(oldp+908,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_address),8);
    bufp->fullCData(oldp+909,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_data),8);
    bufp->fullBit(oldp+910,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__mem_write_ready));
    bufp->fullCData(oldp+911,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_state),2);
    bufp->fullCData(oldp+912,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__lsu_instance__DOT__lsu_out),8);
    bufp->fullBit(oldp+913,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__clk));
    bufp->fullBit(oldp+914,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__reset));
    bufp->fullBit(oldp+915,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__enable));
    bufp->fullCData(oldp+916,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__core_state),3);
    bufp->fullCData(oldp+917,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp),3);
    bufp->fullCData(oldp+918,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_immediate),8);
    bufp->fullBit(oldp+919,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_nzp_write_enable));
    bufp->fullBit(oldp+920,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__decoded_pc_mux));
    bufp->fullCData(oldp+921,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__alu_out),8);
    bufp->fullCData(oldp+922,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__current_pc),8);
    bufp->fullCData(oldp+923,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__next_pc),8);
    bufp->fullCData(oldp+924,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warps__BRA__1__KET____DOT__pc_instance__DOT__nzp),3);
    bufp->fullBit(oldp+925,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__clk));
    bufp->fullBit(oldp+926,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__reset));
    bufp->fullCData(oldp+927,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__warp),4);
    bufp->fullCData(oldp+928,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[0]),8);
    bufp->fullCData(oldp+929,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[1]),8);
    bufp->fullCData(oldp+930,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[2]),8);
    bufp->fullCData(oldp+931,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_regs[3]),8);
    bufp->fullCData(oldp+932,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[0]),8);
    bufp->fullCData(oldp+933,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[1]),8);
    bufp->fullCData(oldp+934,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[2]),8);
    bufp->fullCData(oldp+935,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_regs[3]),8);
    bufp->fullCData(oldp+936,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[0]),8);
    bufp->fullCData(oldp+937,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_computes[1]),8);
    bufp->fullCData(oldp+938,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[0]),8);
    bufp->fullCData(oldp+939,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_computes[1]),8);
    bufp->fullCData(oldp+940,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[0]),3);
    bufp->fullCData(oldp+941,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__Running_Threads[1]),3);
    bufp->fullCData(oldp+942,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[0]),8);
    bufp->fullCData(oldp+943,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rs_computes[1]),8);
    bufp->fullCData(oldp+944,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[0]),8);
    bufp->fullCData(oldp+945,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__rt_computes[1]),8);
    bufp->fullCData(oldp+946,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[0]),8);
    bufp->fullCData(oldp+947,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[1]),8);
    bufp->fullCData(oldp+948,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[2]),8);
    bufp->fullCData(oldp+949,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__lsu_out_regs[3]),8);
    bufp->fullCData(oldp+950,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[0]),8);
    bufp->fullCData(oldp+951,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[1]),8);
    bufp->fullCData(oldp+952,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[2]),8);
    bufp->fullCData(oldp+953,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__alu_out_regs[3]),8);
    bufp->fullIData(oldp+954,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+955,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+956,(vlSelfRef.gpu__DOT__cores__BRA__1__KET____DOT__core_instance__DOT__warptothreadbus_instance__DOT__unnamedblk3__DOT__i),32);
    bufp->fullBit(oldp+957,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__clk));
    bufp->fullBit(oldp+958,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__reset));
    bufp->fullCData(oldp+959,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_valid),4);
    bufp->fullCData(oldp+960,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[0]),8);
    bufp->fullCData(oldp+961,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[1]),8);
    bufp->fullCData(oldp+962,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[2]),8);
    bufp->fullCData(oldp+963,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_address[3]),8);
    bufp->fullCData(oldp+964,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_ready),4);
    bufp->fullCData(oldp+965,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[0]),8);
    bufp->fullCData(oldp+966,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[1]),8);
    bufp->fullCData(oldp+967,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[2]),8);
    bufp->fullCData(oldp+968,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_read_data[3]),8);
    bufp->fullCData(oldp+969,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_valid),4);
    bufp->fullCData(oldp+970,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[0]),8);
    bufp->fullCData(oldp+971,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[1]),8);
    bufp->fullCData(oldp+972,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[2]),8);
    bufp->fullCData(oldp+973,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_address[3]),8);
    bufp->fullCData(oldp+974,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[0]),8);
    bufp->fullCData(oldp+975,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[1]),8);
    bufp->fullCData(oldp+976,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[2]),8);
    bufp->fullCData(oldp+977,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_data[3]),8);
    bufp->fullCData(oldp+978,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__consumer_write_ready),4);
    bufp->fullCData(oldp+979,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_valid),4);
    bufp->fullCData(oldp+980,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address[0]),8);
    bufp->fullCData(oldp+981,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address[1]),8);
    bufp->fullCData(oldp+982,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address[2]),8);
    bufp->fullCData(oldp+983,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_address[3]),8);
    bufp->fullCData(oldp+984,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_ready),4);
    bufp->fullCData(oldp+985,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[0]),8);
    bufp->fullCData(oldp+986,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[1]),8);
    bufp->fullCData(oldp+987,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[2]),8);
    bufp->fullCData(oldp+988,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_read_data[3]),8);
    bufp->fullCData(oldp+989,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_valid),4);
    bufp->fullCData(oldp+990,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address[0]),8);
    bufp->fullCData(oldp+991,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address[1]),8);
    bufp->fullCData(oldp+992,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address[2]),8);
    bufp->fullCData(oldp+993,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_address[3]),8);
    bufp->fullCData(oldp+994,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data[0]),8);
    bufp->fullCData(oldp+995,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data[1]),8);
    bufp->fullCData(oldp+996,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data[2]),8);
    bufp->fullCData(oldp+997,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_data[3]),8);
    bufp->fullCData(oldp+998,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__mem_write_ready),4);
    bufp->fullCData(oldp+999,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[0]),3);
    bufp->fullCData(oldp+1000,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[1]),3);
    bufp->fullCData(oldp+1001,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[2]),3);
    bufp->fullCData(oldp+1002,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__controller_state[3]),3);
    bufp->fullCData(oldp+1003,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[0]),2);
    bufp->fullCData(oldp+1004,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[1]),2);
    bufp->fullCData(oldp+1005,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[2]),2);
    bufp->fullCData(oldp+1006,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__current_consumer[3]),2);
    bufp->fullCData(oldp+1007,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__channel_serving_consumer),4);
    bufp->fullIData(oldp+1008,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1009,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1010,(vlSelfRef.gpu__DOT__data_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
    bufp->fullBit(oldp+1011,(vlSelfRef.gpu__DOT__dcr_instance__DOT__clk));
    bufp->fullBit(oldp+1012,(vlSelfRef.gpu__DOT__dcr_instance__DOT__reset));
    bufp->fullBit(oldp+1013,(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_control_write_enable));
    bufp->fullCData(oldp+1014,(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_control_data),8);
    bufp->fullCData(oldp+1015,(vlSelfRef.gpu__DOT__dcr_instance__DOT__thread_count),8);
    bufp->fullCData(oldp+1016,(vlSelfRef.gpu__DOT__dcr_instance__DOT__device_conrol_register),8);
    bufp->fullBit(oldp+1017,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__clk));
    bufp->fullBit(oldp+1018,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__reset));
    bufp->fullBit(oldp+1019,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__start));
    bufp->fullCData(oldp+1020,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__thread_count),8);
    bufp->fullCData(oldp+1021,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_done),2);
    bufp->fullCData(oldp+1022,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_start),2);
    bufp->fullCData(oldp+1023,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_reset),2);
    bufp->fullCData(oldp+1024,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id[0]),8);
    bufp->fullCData(oldp+1025,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_block_id[1]),8);
    bufp->fullCData(oldp+1026,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count[0]),3);
    bufp->fullCData(oldp+1027,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__core_thread_count[1]),3);
    bufp->fullBit(oldp+1028,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__done));
    bufp->fullCData(oldp+1029,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__total_blocks),8);
    bufp->fullCData(oldp+1030,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_dispatched),8);
    bufp->fullCData(oldp+1031,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__blocks_done),8);
    bufp->fullBit(oldp+1032,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__start_execution));
    bufp->fullIData(oldp+1033,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1034,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1035,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1036,(vlSelfRef.gpu__DOT__dispatch_instance__DOT__unnamedblk4__DOT__i),32);
    bufp->fullBit(oldp+1037,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__clk));
    bufp->fullBit(oldp+1038,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__reset));
    bufp->fullCData(oldp+1039,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_valid),2);
    bufp->fullCData(oldp+1040,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address[0]),8);
    bufp->fullCData(oldp+1041,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_address[1]),8);
    bufp->fullCData(oldp+1042,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_ready),2);
    bufp->fullSData(oldp+1043,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data[0]),16);
    bufp->fullSData(oldp+1044,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_read_data[1]),16);
    bufp->fullCData(oldp+1045,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_valid),2);
    bufp->fullCData(oldp+1046,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address[0]),8);
    bufp->fullCData(oldp+1047,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_address[1]),8);
    bufp->fullSData(oldp+1048,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data[0]),16);
    bufp->fullSData(oldp+1049,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_data[1]),16);
    bufp->fullCData(oldp+1050,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__consumer_write_ready),2);
    bufp->fullBit(oldp+1051,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_valid));
    bufp->fullCData(oldp+1052,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_address[0]),8);
    bufp->fullBit(oldp+1053,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_ready));
    bufp->fullSData(oldp+1054,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_read_data[0]),16);
    bufp->fullBit(oldp+1055,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_valid));
    bufp->fullCData(oldp+1056,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_address[0]),8);
    bufp->fullSData(oldp+1057,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_data[0]),16);
    bufp->fullBit(oldp+1058,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__mem_write_ready));
    bufp->fullCData(oldp+1059,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__controller_state[0]),3);
    bufp->fullBit(oldp+1060,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__current_consumer[0]));
    bufp->fullCData(oldp+1061,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__channel_serving_consumer),2);
    bufp->fullIData(oldp+1062,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1063,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1064,(vlSelfRef.gpu__DOT__program_memory_controller__DOT__unnamedblk2__DOT__unnamedblk3__DOT__j),32);
}
