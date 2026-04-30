# GAR Toolchain Setup Summary

These instructions apply to the current TinyGPU toolchain. These instructions will soon be updated with the RISC-V toolchain and Vortex toolchain. 

## Supported Tool Versions

- cocotb 1.9.2
- Icarus Verilog 12.0
- sv2v v0.0.13

Note:
The current controller RTL is incompatible with Verilator due to
nonblocking assignments to unpacked arrays inside procedural for-loops.
Use Icarus Verilog for simulation until the controller RTL is refactored.

## Install Ubuntu Packages

```
sudo apt update
sudo apt install -y git make iverilog python3 python3-pip python3-venv unzip cargo
```

## Install sv2v

```
cd ~
wget https://github.com/zachjs/sv2v/releases/latest/download/sv2v-Linux.zip
unzip sv2v-Linux.zip
chmod +x sv2v-Linux/sv2v
sudo mv sv2v-Linux/sv2v /usr/local/bin/sv2v
```
Verify Installation:
```
which sv2v
sv2v --version
```
Should expect something like:
```
/usr/local/bin/sv2v
sv2v v0.0.x
```

## Create Python Virtual Environment
```
cd ~
python3 -m venv gar-env
source ~/gar-env/bin/activate
```

## Install CocoTB 1.9.2
Inside the activated virtual environment:
```
pip install cocotb==1.9.2
```

Verify Installation:
```
cocotb-config --version
```

Should expect:
```
1.9.2
```

## Enter Project Directory
Enter GAR directory and create build file:
```
cd ~/GAR_General-Accelerator-Renderer
mkdir -p build
```

## Export CocoTB Environment Variables
```
export PYGPI_PYTHON_BIN="$(which python3)"
export COCOTB_LIB_DIR="$(cocotb-config --lib-dir)"
```

## Make Python Test Folders Importable

If it doesn't exists, add:
```
touch test/__init__.py
```

(Or through VS Code, just create a \_\_init__.py file inside the tests folder)

## Generate Assembler JSON files
Note: This step will be outdated once RISC-V ISA implemented. 
```
make assemble_matadd_8_threads
make assemble_matadd_32_threads
```
Verify
```
ls tiny-gpu-assembler/asm_build/
```

## Run CocoTB Tests With Icarus
