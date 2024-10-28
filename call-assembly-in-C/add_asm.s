.intel_syntax noprefix
.global addNumbers
.text
addNumbers:
	add rdi, rsi
	mov rax, rdi
	ret
