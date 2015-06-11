SECTION .text
	extern malloc, currentObject, pos
	global calcDarstellung

calcDarstellung:
	push ebp
	mov ebp, esp
	
	push ebx
	push ecx
	push edx
	
	xor edx, edx
	mov eax, [ebp+8]
	
	mov ebx, [currentObject]
	add ebx, 7
	mov ecx, 16
loop1:
	div ecx
	
	cmp edx, 9
	jle lower
	
	add edx, 7
	
lower:	
	add edx, 48
	
	mov [ebx], DL
	dec ebx
	
	xor edx, edx
	cmp eax, 0
	jg loop1
	
	xor edx, edx
	mov eax, [ebp+8]
	
	mov ebx, [currentObject]
	add ebx, 18
	mov ecx, 10
loop2:
	div ecx
	
	add edx, 48
	
	mov [ebx], DL
	dec ebx
	
	xor edx, edx
	cmp eax, 0
	jg loop2
	
	pop edx
	pop ecx
	pop ebx
	
	mov eax, [currentObject]
	
	pop ebp
	ret