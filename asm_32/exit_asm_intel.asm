; for 32-bit
; syntax Intel
[SECTION .text]
global _start
_start:

  xor ebx,ebx ; null ebx
  mov al, 1   ; syscall 1
  int 0x80    ; kernel exit
