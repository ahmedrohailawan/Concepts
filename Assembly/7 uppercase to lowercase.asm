org 100h

.data
.code

main proc 
        
        mov ah,1   
        int 21h     ; input from user
        
        sub al,32   ; sub 32 to make it upperrcase
        mov dl,al   ; moving value to data register
        mov ah,2    ; output of a program
        int 21h
        
        mov ah,4ch  ; to return from register
        int 21h    
        
main endp

end main