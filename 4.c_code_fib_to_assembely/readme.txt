
clang -E fib.c -o fib.i                                                        
clang -S fib.i -o fib.s                                                                                                  
clang -c fib.s -o fib.o                                                                                        
ld fib fib.o
