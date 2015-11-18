; Calculate the power of two numbers. 
; Paramaters: (number, power)
; Runtime complexity: O(power). Perhaps attempt to implement the O(log n) algorithm?

PROC Power 
  
  push ax ; Remember AX
  push cx ; Remember CX
  
  mov cx, ss:[si+8] ; power
  mov ax, ss:[si+6] ; number
  multiplyAX: ; Multiplies AX
    mul ax, ax
  loop multiplyAX

  
  pop cx ; Retrieve original CX
  pop ax ; Retrieve original AX
ENDP Power

PROC EPower ; Efficient implementation

  push ax ; Remember AX
  push cx ; Remember CX
  
  mov ax, ss:[si+8] ; Get parameter number 
  mov cx, ss:[si+6] ; Get parameter power
  
  div cx, 2 ; Divide power to 2
  push ax ; Set parameter number to EPower
  push cx ; Set parameter power to EPower
  
  call EPower ; Call EPower(power/2, number)
  
  pop
  pop ax
  
  mul ax, ax
  
  pop cx ; Retrieve original CX
  pop ax ; Retrieve original AX
  ret
END EPower
