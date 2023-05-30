.global ft_pow

ft_pow:
	mov $1, %rbx
	push %rbx
	cmp $0, %rsi
	je exit
	jmp loop

loop:
	pop %rbx
	imul %rdi, %rbx
	push %rbx
	dec %rsi
	cmp $0, %rsi
	je exit
	jmp loop

exit:
	pop %rax
	ret
