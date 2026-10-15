#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020baa64(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    ldr r5, [r0], #0x4
    mov r2, r5, lsr #0x8
    mov r7, #0x0
    tst r5, #0xf
    bne L_020baa80
    b L_020baa84
L_020baa80:
    mov r7, #0x1
L_020baa84:
    cmp r2, #0x0
    ble L_020bab5c
    ldrb lr, [r0], #0x1
    mov r4, #0x8
L_020baa94:
    subs r4, r4, #0x1
    blt L_020baa84
    tst lr, #0x80
    bne L_020baab8
    ldrb r6, [r0], #0x1
    swpb r6, r6, [r1]
    add r1, r1, #0x1
    sub r2, r2, #0x1
    b L_020bab44
L_020baab8:
    ldrb r5, [r0, #0x0]
    cmp r7, #0x0
    beq L_020baac8
    b L_020baacc
L_020baac8:
    mov r6, #0x3
L_020baacc:
    beq L_020bab10
    tst r5, #0xe0
    bne L_020baadc
    b L_020baae0
L_020baadc:
    mov r6, #0x1
L_020baae0:
    bne L_020bab10
    add r0, r0, #0x1
    and r6, r5, #0xf
    mov r6, r6, lsl #0x4
    tst r5, #0x10
    beq L_020bab08
    mov r6, r6, lsl #0x8
    ldrb r5, [r0], #0x1
    add r6, r6, r5, lsl #0x4
    add r6, r6, #0x100
L_020bab08:
    add r6, r6, #0x11
    ldrb r5, [r0, #0x0]
L_020bab10:
    add r3, r6, r5, asr #0x4
    add r0, r0, #0x1
    and r5, r5, #0xf
    mov ip, r5, lsl #0x8
    ldrb r6, [r0], #0x1
    orr r5, r6, ip
    add ip, r5, #0x1
    sub r2, r2, r3
L_020bab30:
    ldrb r5, [r1, -ip]
    swpb r5, r5, [r1]
    add r1, r1, #0x1
    subs r3, r3, #0x1
    bgt L_020bab30
L_020bab44:
    cmp r2, #0x0
    bgt L_020bab50
    b L_020bab54
L_020bab50:
    mov lr, lr, lsl #0x1
L_020bab54:
    bgt L_020baa94
    b L_020baa84
L_020bab5c:
    ldmfd sp!, {r4, r5, r6, r7, lr}
    bx lr
}
// clang-format on
