include 'emu8086.inc'
org 100h

mov BX, 1234
mov DI, 0
mov CX, 5

L1:
	mov AX, CX
	call scan_num
	mov DX, CX
	mov CX, AX
	
	mov [BX+DI], DL
	inc DI
	
	mov [BX+DI], DH
	inc DI
	
	call pthis
	db 13,10,'',0
	
	loop L1
	
call maxval
call minval

ret

maxval proc
	call pthis
	db 13,10,'',0
	
	mov AL, [BX]
	mov AH, [BX+1]
	mov CX, 5
	mov DI, 0
	
	L2:
		mov DL, [BX+DI]
		inc DI
		
		mov DH, [BX+DI]
		inc DI
		
		cmp DX, AX
		jb cont2
		mov AX, DX
		
		cont2:
			loop L2

	call pthis
	db 'Max: ',0
	
	call print_num

maxval endp	

minval proc
	call pthis
	db 13,10,'',0
	
	mov AL, [BX]
	mov AH, [BX+1]
	mov CX, 5
	mov DI, 0
	
	L3:
		mov DL, [BX+DI]
		inc DI
		
		mov DH, [BX+DI]
		inc DI
		
		cmp DX, AX
		jg cont3
		mov AX, DX
		
		cont3:
			loop L3

	call pthis
	db 'Min: ',0
	
	call print_num

minval endp	

define_scan_num
define_print_num
define_print_num_uns
define_pthis

end