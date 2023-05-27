include 'emu8086.inc'
ORG 100h 

print 'Enter First Number:'
CALL scan_num ; get number in CX.
MOV BX, CX ; 
PRINTN 
print 'Enter second Number:'
CALL scan_num 
MOV DX, CX ; 
PRINTN 
print 'Enter Third Number:'
CALL scan_num  
PRINTN

cmp bx,dx
jg jum1
    cmp dx,cx
    jg jum3
       mov ax,cx 
       print 'The max value is:',0
       CALL print_num
       ret 
    
    jum3:
         mov ax,dx
         print 'The max value is:',0
         CALL print_num
         ret 



    jum1:
       cmp bx,cx
       jg jum2
       
       
       jum2:
           mov ax,bx 
           print 'The max value is:',0
           CALL print_num
           ret 
           
DEFINE_SCAN_NUM           
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS
