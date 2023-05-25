.globl ft_strdup
.extern ft_strlen
.extern malloc
.extern ft_strcpy

ft_strdup:
    push %rdi                   #rdi in stack
    call ft_strlen              
    inc %rax                    #increment len ('/0')
    mov %rax, %rdi              #prepare argrument for malloc
    call malloc
    test %rax, %rax                 
    je failed                   #if rax = null -> failed
    pop %rsi                    #get str out of the stack and put it in rsi
    mov %rax, %rdi              #get the allocated memory in rdi
    call ft_strcpy              #copy then return
    ret 

failed:
    mov $0, %rax                #null in rax in case of error
    ret
