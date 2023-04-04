org 100h
include emu8086.inc 
  
.data
x  dd offffh
y dd 1111h 

msg dd  0ah,0dh,"Enter 1:For And  2: For Or  3:For Xor  4:For not",0ah,0dh,'$'
error_msg db 0ah,0dh,"invalid operation",0ah,0dh,'$'

.code
main proc  
    
mov ax,@data
mov ds,ax

mov ah,09h
mov dx,offset msg
int 21h

mov ah,1
int 21h 

mov edx,x
and al,ofh

cmp al,1
je L1
cmp al,2
je L2
cmp al,3
je L3
cmp al,4
je L4

mov ah,9h
mov dx,offset error_msg
int 21h
jmp L5

L1:
    and edx,y
    jmp L5
L2:
    or edx,y
    jmp L5
L3:
    xor edx,y
    jmp L5
L4:
    not edx
L5:
    mov ah,4ch
    int 21h 

                
main endp
end main
