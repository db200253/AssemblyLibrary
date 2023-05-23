.globl ft_strcmp

ft_strcmp : 
	movl $0, %ecx					#0 in ecx in order to count

compare : 
	movb (%rsi, %rcx), %al			#mov str1[i] in al in order to compare 
	cmpb %al, (%rdi, %rcx)			#compare al and str2[i]
	je continue						#if equal : jump to continue
	jl lower						#if lower : jump to lower
	jg greater						#if greater : jump to greater

continue : 
	cmpb $0, (%rsi, %rcx)			#compare str[i] and '/0'
	je exit							#if equal exit
	incl %ecx						#else increment ecx
	jmp compare						#jump to compare to loop

lower : 
	movl $-1, %eax					#return -1
	ret

greater : 
	movl $1, %eax					#return 1
	ret

exit : 
	movl $0, %eax					#return 0
	ret
