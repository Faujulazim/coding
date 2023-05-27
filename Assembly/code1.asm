include "emu8086.inc"  
ORG 100h 


print 'Enter a number:'
CALL scan_num 
MOV AX, CX  
printn
print 'The number is:',0 
CALL print_num  
printn  



print 'Enter a character:'
MOV AH,1    ;asks for keyboard input.
INT 21H      ;stored in AL register.
MOV DL,AL    ;DL is the register used to display 
printn
print 'The character is:'         
MOV AH,2     ;character output function
INT 21H  
printn


print 'Enter a String:'
CALL GET_STRING 
PRINTN
print 'The string is:'
CALL PRINT_STRING


DEFINE_GET_STRING
DEFINE_SCAN_NUM
DEFINE_PRINT_STRING
DEFINE_PRINT_NUM
DEFINE_PRINT_NUM_UNS ; required for print_num.
DEFINE_PTHIS
END