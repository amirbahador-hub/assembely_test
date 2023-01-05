we need x86_64 processors -> 64bit processors
==============
uname -a

assembeler
============
compiler for assembely(nasm)

How TO compile
================
nasm -f (assembely format) -o (output) (input)
nasm -f elf64 -o hello.o hello.asm

Link an objectfile to link(executable)
======================================
ld hello.o -o hello

