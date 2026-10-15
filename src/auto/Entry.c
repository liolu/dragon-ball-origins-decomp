#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02000954();
extern void func_02000970();
extern void func_02000a1c();
extern void func_02000ab0();
extern void func_02000b98();
extern void func_020c4e48();
extern void func_020c6380();
extern char BuildInfo[];
extern char data_027e0000[];
extern char func_01fff228[];
extern char main[];
// clang-format off
asm void Entry(void) {
    mov ip, #0x4000000
    str ip, [ip, #0x208]
L_02000808:
    ldrh r0, [ip, #0x6]
    cmp r0, #0x0
    bne L_02000808
    bl func_02000ab0
    mov r0, #0x13
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    mov sp, r0
    mov r0, #0x12
    msr cpsr_c, r0
    ldr r0, =data_027e0000
    add r0, r0, #0x3fc0
    sub r0, r0, #0x40
    sub sp, r0, #0x4
    tst sp, #0x4
    beq L_02000850
    b L_02000854
L_02000850:
    sub sp, sp, #0x4
L_02000854:
    ldr r1, =0x800
    sub r1, r0, r1
    mov r0, #0x1f
    msr cpsr_fsxc, r0
    sub sp, r1, #0x4
    mov r0, #0x0
    ldr r1, =data_027e0000
    mov r2, #0x4000
    bl func_02000954
    mov r0, #0x0
    ldr r1, =0x5000000
    mov r2, #0x400
    bl func_02000954
    mov r0, #0x200
    ldr r1, =0x7000000
    mov r2, #0x400
    bl func_02000954
    ldr r1, =BuildInfo
    ldr r0, [r1, #0x14]
    bl func_02000970
    bl func_02000a1c
    ldr r0, =BuildInfo
    ldr r1, [r0, #0xc]
    ldr r2, [r0, #0x10]
    mov r3, r1
    mov r0, #0x0
L_020008bc:
    cmp r1, r2
    blo L_020008c8
    b L_020008cc
L_020008c8:
    str r0, [r1], #0x4
L_020008cc:
    blo L_020008bc
    bic r1, r3, #0x1f
L_020008d4:
    mcr p15, 0, r0, c7, c10, 4
    mcr p15, 0, r1, c7, c5, 1
    mcr p15, 0, r1, c7, c14, 1
    add r1, r1, #0x20
    cmp r1, r2
    blt L_020008d4
    ldr r1, =0x27fff9c
    str r0, [r1, #0x0]
    ldr r1, =data_027e0000
    add r1, r1, #0x3fc0
    add r1, r1, #0x3c
    ldr r0, =func_01fff228
    str r0, [r1, #0x0]
    bl func_020c4e48
    bl func_02000b98
    bl func_020c6380
    ldr r1, =main
    ldr lr, =0xffff0000
    tst sp, #0x4
    bne L_02000928
    b L_0200092c
L_02000928:
    sub sp, sp, #0x4
L_0200092c:
    bx r1
}
// clang-format on
