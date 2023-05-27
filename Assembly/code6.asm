MyOwnMacro MACRO p1
MOV DL, p1 
print 'Last Character of my Name Is:'
MOV AH,2     ;character output function
INT 21H  

ENDM 
include 'emu8086.inc'
ORG 100h
MyOwnMacro 'M'

RET
