/*
Opcode:
  31 db     xor    %ebx,%ebx
  b0 01     mov    $0x1,%al
  cd 80     int    $0x80
*/

const char shellcode[] = "\x31\xdb\xb0\x01\xcd\x80";

int
main () {
    __asm__("jmp shellcode");
    return 0;
}
