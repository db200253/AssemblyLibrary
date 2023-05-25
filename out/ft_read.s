.globl ft_read

ft_read : 
	mov $0, %rax 			#0 = num syscall read
	syscall					
	cmp $0, %rax			#if return value < 0 -> error else return
	jl error
	ret

error : 
	mov $-1, %rax			#if error return -1
	ret
