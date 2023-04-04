org 100h

.data
.code 

; check which key is pressed and store its value in ascii
 
mov ah,0      
int 16h     

; sending value of al to dl  
mov dl,al      
             
; to display value in dl
int 21h      

; to return from register
mov ah,4ch
int 21h

end main
