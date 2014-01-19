/*
Opcode:

  31 c0                xor    %eax,%eax
  31 db                xor    %ebx,%ebx
  40                   inc    %eax
  cd 80                int    $0x80
*/

const char shellcode[] = "\x31\xc0\x31\xdb\x40\xcd\x80";

int
main () {
    __asm__("jmp shellcode");
    return 0;
}
