#Hacking Lab

### My studies on the development of exploits

- asm_32/ assembly code for the opcodes
- shellcode_32/ C code to execute a shellcode

### Run

Assembly code AT&T syntax:

    as -o code_asm.o code_asm.s
    ld -o code_asm code_asm.o

Assembly code Intel syntax:

    nasm -f elf code_asm.asm
    ld -o code_asm code_asm.o

Testing and debugging:

    ./code_asm
    strace ./code_asm

Return opcode:

    objdump -d code_asm

Compile shellcode and execute:

    gcc -o code_shellcode code_shellcode.c
    ./code_shellcode

Testing:

    strace ./code_shellcode
