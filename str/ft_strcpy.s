.globl ft_strcpy

ft_strcpy :
	movl $0, %ecx					#0 in ecx in order to count

copy :
	cmpb $0, (%rsi, %rcx)			#compare '/0' and src[i]
	je exit							#jump to exit if equal
	movb (%rsi, %rcx), %dl			#move str[i] in dl
	movb %dl, (%rdi, %rcx)			#move dl in dest[i]
	incl %ecx						#increment ecx
	jmp copy						#jmp to copy to loop

exit : 
	movb $0, (%rdi, %rcx)			#put '/0' at the end of dest
	mov %rdi, %rax					#store dest to return it
	ret 							#return rax that contains dest
