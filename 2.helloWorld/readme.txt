Flags
-------
flags like registers hold data (only 1 bit each true or false)
individual flags are part of a larger register.

pointers
---------
registers that hold data
they hold it's memory address

jumps
-----
jump different parts of code base on labels
jmp label (change rip or control flow)

comparisons
------------
allow programs to take different paths base on certain conditins
comparisons are done on registers

cmp register, register/value
cmp rax, 23
cmp rax, rbx

call == jumps

conditional jumps
-----------------
cmp rax, 23
je _doThis

cmp rax, rbx
jg _doThis




