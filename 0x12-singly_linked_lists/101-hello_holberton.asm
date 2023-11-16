section .data
	hello_msg db 'Hello, Holberton', 0
	format db '%s', 0

section .text
	global main
	extern printf

main:
	; Push arguments onto the stack in reverse order
	push hello_msg
	push format

	; Call printf function
	call printf

	; Clean up the stack
	add rsp, 16

	; Exit the program
	mov eax, 0
	ret
