section .data
	format db 'Hello, Holberton', 0
	newline db 10, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	mov rdi, format
	xor eax, eax
	call printf

	mov rdi, newline
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret

