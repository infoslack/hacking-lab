# for 32-bit platform
# syntax AT&T
.data
.text
.global _start

_start:
  xor %eax, %eax  # null %eax
  xor %ebx, %ebx  # null %ebx
  inc %eax        # %eax = 1
  int $0x80       # kernel exit
