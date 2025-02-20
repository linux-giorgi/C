# Thus is Makefile for Default C code
# You can edit it if it needed


# File ariables
MAIN := main.c
XMAIN := main
OUT := a.out

# System variables
GCC = gcc
CLEAR = clear
RMRF = rm -rf

# System flags
O = -o  

# Make Scripts
make:  # For default program 
	$(GCC) ${MAIN} $(O) ${XMAIN}

start:
	echo "#include <stdio> int main(void){ return 0; }"> ${MAIN} 

clear: # For clear terminall and executables
	$(RMRF) ${XMAIN} ${OUT} & $(CLEAR)

gdb:   # For check with gnu debugger program 
	$(CLEAR) & 
	$(GCC) -O0 -g3 ${MAIN} $(O) ${XMAIN}
