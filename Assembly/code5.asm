include "emu8086.inc"
org 100h
mov al, 25 
mov bl, 25 
cmp al, bl 
je equal 
putc 'n' 
jmp stop 
equal: 
putc 'y' 
stop:
ret