.text
 ldi r0, x
 ld r1, r0
 ldi r0, y
 ld r2, (r0)
loop:
 ldi r0, 15
 and r3, r1, r0
is_4:
 sub r10, r2,r1
 ldi r11, 1
 ldi r5, 3
 and r3, r1,r5
 brnz is_8
 ldi r6, a
 ld r7 , (r6)
 add r7, r7,r11
 st (r6), r7
is_8:
 ldi r5, 7
 and r3, r1,r5
 brnz is_16
 ldi r6, b
 ld r7 , (r6)
 add r7, r7,r11
 st (r6), r7
 is_16:
 ldi r5, 8
 and r3, r1,r5
 brnz incrementation
 ldi r6, c
 ld r7 , (r6)
 add r7, r7,r11
 st (r6), r7
 incrementation:
 add r1, r1,r11
 sub r10, r10,r11
 brgez loop
end:
 stop
.data
x: 95 // Remplacez 0 par la valeur de (MATR ETU 1 + MATR ETU 2) % 264
y: 100 // Remplacez 0 par la valeur de X + ((MATR ETU 1 + MATR ETU 2) % 9)
a: 0 // N multiples de 4
b: 0 // N multiples de 8
c: 0 // N multiples de 16