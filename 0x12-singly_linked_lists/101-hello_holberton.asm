section .data
    message db "Hello, Holberton\n", 0 ; String with newline

section .text
    global _start

_start:
    ; Set up arguments for printf
    mov rdi, message ; First argument: string addres
    mov rax, 0 ; No floating- point arguments
    call printf ; Call printf function

    ; Exit gracefully
    mov rax, 60 ; system call number for exit
    mov rdi, 0 ; Exit code 0
    syscall
