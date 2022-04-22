	extern printf

	SECTION .data
msg:    db "Hello, Holberton", 0
fmt:    db "%s", 10, 0

	SECTION .text
	global main
main:
	push rbp	; set up stack frame

	mov rdi, fmt    ; 64-bit ABI passing order starts w/ edi, esi, ...
	mov rsi, msg    ;
	call printf

	pop rbp		; restore stack

	ret
;----------------------------------------------------------------------------
