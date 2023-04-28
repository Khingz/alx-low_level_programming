section .text
	global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, msg_len
	syscall

	mov rax, 60
	mov rdi, 0
	syscall

section .data
	message db "Hello Holberton", 10;
	msg_len equ $ -message
