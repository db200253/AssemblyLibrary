.globl ft_strlen

ft_strlen : 
	movl $0, %ecx				#move long (0) dans un compteur

count :
	cmpb $0, (%rdi, %rcx)		#compare byte str + compteur vs byte 0 ('/0')
	je exit						#jump to exit if equal
	incl %ecx					#increment ecx else
	jmp count					#jump to count to loop

exit : 
	movl %ecx, %eax				#store the result to return it
	ret							#return
