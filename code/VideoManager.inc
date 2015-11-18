PROC SetTextMode ; Set the grpahics mode to text mode

push ax ; Remember current AX

mov ah, 0 ; Set interrupt mode to change video mode
mov al, 02h ; Set video mode parameter to text mode
int 10h ; Interrupt DOS

pop ax ; Retrieve original AX
ret

ENDP SetTextMode

PROC SetVideoMode ; Set the graphics mode to video mode

push ax ; Remember current AX

mov ah, 0 ; Set interrupt mode to change video mode
mov al, 13h ; Set video mode parameter to RGB 320x200 mode
int 10h ; Interrupt DOS

pop ax ; Retrieve original AX
ret
ENDP SetVideoMode
