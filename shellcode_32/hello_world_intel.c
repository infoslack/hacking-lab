/*
Opcode:

eb 19                jmp    804807b <ender>
31 c0                xor    %eax,%eax
31 db                xor    %ebx,%ebx
31 d2                xor    %edx,%edx
31 c9                xor    %ecx,%ecx
b0 04                mov    $0x4,%al
b3 01                mov    $0x1,%bl
59                   pop    %ecx
b2 0b                mov    $0xb,%dl
cd 80                int    $0x1x80
31 c0                xor    %eax,%eax
b0 01                mov    $0x1,%al
31 db                xor    %edxbx,%ebx
cd 80                int    $0x80
e8 e2 ff ff ff       call   8048062 <starter>
48                   dec    %eax
65                   gs
6c                   insb   (%dx),%es:(%edi)
6c                   insb   (%dx),%es:(%edi)
6f                   outsl  %ds:(%esi),(%dx)
20 57 6f             and    %dl,0x6f(%edidi)
72 6c                jb     80480f6 <ender+0x7b>
64                   fs
*/

const char shellcode[] =
    "\xeb\x19\x31\xc0\x31\xdb\x31\xd2\x31\xc9\xb0\x04\xb3\x01"
    "\x59\xb2\x0b\xcd\x80\x31\xc0\xb0\x01\x31\xdb\xcd\x80\xe8"
    "\xe2\xff\xff\xff\x48\x65\x6c\x6c\x6f\x20\x57\x6f\x72\x6c"
    "\x64";

int
main () {
    __asm__("jmp shellcode");
    return 0;
}
