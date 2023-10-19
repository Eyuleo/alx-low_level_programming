section .data
    hello_holberton db "Hello, Holberton",0xa,0  

section .text
    global main

    extern printf

main:
    mov rdi, hello_holberton    
    mov rax, 0          
    call printf
    ret
