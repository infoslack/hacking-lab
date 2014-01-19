; for 32-bit
; syntax Intel
[SECTION .text]
global _start
_start:

  jmp short ender

  starter:

  xor eax, eax    ; null eax
  xor ebx, ebx    ; null ebx
  xor edx, edx    ; null edx
  xor ecx, ecx    ; null ecx
  mov al, 4       ; execute syscall (write)
  mov bl, 1       ; activate stdout
  pop ecx         ; copies the address of the string and adds the stack
  mov dl, 11      ; lenght of the string (Hello World)
  int 0x80        ; call kernel exit
  xor eax, eax    ; null eax
  mov al, 1       ; exit(0)
  xor ebx, ebx    ; null ebx
  int 0x80        ; call kernel exit
  ender:
  call starter    ; put the address of the string on the stack
  db 'Hello World'
