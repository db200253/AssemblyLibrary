.globl ft_pow

ft_pow:
    mov %rdi, %rax        
    mov %rsi, %rcx         
    cmp $0, %rcx        
    je base             
    mov $1, %rdx         

loop:
    cmp $1, %rcx       
    je exit                
    imul %rax, %rdi      
    dec %rcx               
    jmp loop             

base:
    mov $1, %rax          
    ret

exit:
    ret
