	global main
	extern printf

section .data:
	string: db "Hello, Holberton", 0x0A, 0
main:
	mov	edi, string
	xor	eax, eax
	call printf
	mov	eax, 0
	ret
