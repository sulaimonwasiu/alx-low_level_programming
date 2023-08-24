section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8

    ; Push the format string and the hello string onto the stack
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Push the newline string onto the stack
    mov rdi, format
    mov rsi, newline
    xor rax, rax
    call printf

    add rsp, 8

    xor eax, eax
    ret
