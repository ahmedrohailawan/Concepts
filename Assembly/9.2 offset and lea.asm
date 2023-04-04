org 100h
include emu8086.inc
.data
num1 dw 10h
num2 dw 20h
.code
main proc
      mov ax,offset num1
      call print_num
      
      mov ax,offset num2
      call print_num 
      
      lea ax,num2
      call print_num 
      
      
main endp
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
DEFINE_SCAN_NUM
end main