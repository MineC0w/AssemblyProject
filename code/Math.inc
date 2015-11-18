; Calculate the power of two numbers. 
; Paramaters: (power, number)
; Runtime complexity: O(power). Perhaps attempt to implement the O(log n) algorithm?

PROC Power 
  
  push ax ; Remember AX
  push cx ; Remember CX
  
  mov cx, ss:[si+3]
  
  multiplyAX: ; Multiplies AX
    mul ax, ax
  loop multiplyAX
  
  pop cx ; Retrieve original CX
  pop ax ; Retrieve original AX
ENDP Power
