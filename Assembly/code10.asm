include "emu8086.inc"
org 100h

mov bx,1
mov cx,10
mov dx,0
loop1:
mov ax,bx 
CALL print_num               
printn
add dx,bx
inc bx              

loop loop1 
mov ax,dx 

print 'The sum is:',0;
CALL print_num               
printn
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS