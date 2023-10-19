section .data
    hello_holberton db "Hello, Holberton",0xa,0  

section .text
    global main

    extern printf

main:
    mov rdi, hello_holberton    
    xor rax, rax        
    call printf
    ret
