#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void AutoloadCallback();
extern char BuildInfo[];
// clang-format off
asm void func_02000a1c(void) {
    ldr r0, =BuildInfo
    ldr r1, [r0, #0x0]
    ldr r2, [r0, #0x4]
    ldr r3, [r0, #0x8]
L_02000a2c:
    cmp r1, r2
    beq L_02000aa4
    ldr r5, [r1], #0x4
    ldr r7, [r1], #0x4
    add r6, r5, r7
    mov r4, r5
L_02000a44:
    cmp r4, r6
    bmi L_02000a50
    b L_02000a54
L_02000a50:
    ldr r7, [r3], #0x4
L_02000a54:
    bmi L_02000a5c
    b L_02000a60
L_02000a5c:
    str r7, [r4], #0x4
L_02000a60:
    bmi L_02000a44
    ldr r7, [r1], #0x4
    add r6, r4, r7
    mov r7, #0x0
L_02000a70:
    cmp r4, r6
    blo L_02000a7c
    b L_02000a80
L_02000a7c:
    str r7, [r4], #0x4
L_02000a80:
    blo L_02000a70
    bic r4, r5, #0x1f
L_02000a88:
    mcr p15, 0, r7, c7, c10, 4
    mcr p15, 0, r4, c7, c5, 1
    mcr p15, 0, r4, c7, c14, 1
    add r4, r4, #0x20
    cmp r4, r6
    blt L_02000a88
    b L_02000a2c
L_02000aa4:
    b AutoloadCallback
}
// clang-format on
