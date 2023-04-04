org 100h
.data
.code
main proc

mov ah,86h  ; entry 
mov cx,98h  ; specifying number of microseconds  
int 15h     ; next instruction will be execute after 10 second od delay
mov ah,1    
int 21h  


main endp
end main
