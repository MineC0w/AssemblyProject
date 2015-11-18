IDEAL
MODEL tiny
STACK 100h

DATASEG

CODESEG

start:
  mov ax, @data
  mov ds, ax
  ; code here
  
exit: ; Terminate the program
  mov al, 0Ch 
  int 21
END start
