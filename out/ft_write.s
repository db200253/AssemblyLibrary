.globl ft_write

ft_write :
	mov $1, %rax 			#1 = num syscall write
	syscall					
	cmp $0, %rax			#if return value < 0 -> error else return
	jl error
	ret

error : 
	mov $-1, %rax			#if error return -1
	ret
