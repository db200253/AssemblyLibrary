.global ft_atoi

ft_atoi:
    xorl %ebx, %ebx        # result
    movq %rdi, %rcx        
    movb (%rcx), %dl       
    movl $1, %eax		   # init eax that will contains the sign (1 if positive, -1 else)

    cmpb $45, %dl          # first digit '-' ?
    jne convert_loop    

    movl $-1, %eax         # eax -1 if first digit '-'
    incq %rcx              
    movb (%rcx), %dl                   

convert_loop:
    cmpb $0, %dl           # end of str ?
    je done               

    subb $48, %dl          # convert ascii into decimal
    imull $10, %ebx        # multiply by 10
    addl %edx, %ebx       

    incq %rcx              
    movb (%rcx), %dl       

    jmp convert_loop      # loop

done:
    imull %eax, %ebx       # what's the sign ? 
    movl %ebx, %eax        # store in eax to return 
    ret
