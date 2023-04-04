org 100h
include emu8086.inc
.data
num1 dw 10
.code
main proc
    mov cx,10
    l1:
    mov ax,num1
    call print_num
    inc num1
    loop l1
      
main endp
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_SCAN_NUM
end main