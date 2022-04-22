	global main
	extern printf

section .data:

string: db "Hello, Holberton", 0x0A, 0

section .text:

main:
	mov	edi, string
	xor	eax, eax
	call printf
	mov	eax, 0x1
	mov	ebx, 0
	int 0x80
	ret
