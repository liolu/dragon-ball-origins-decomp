#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020b9b94();
extern void func_020b9ba4();
extern char data_0216d148[];
extern char data_0216d14c[];
extern char data_0216d150[];
extern char data_0216d174[];
// clang-format off
asm void func_020b9d70(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0216d148
    ldr r0, [r0, #0x8]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_020b9b94
    ldr r0, =data_0216d174
    ldr r1, =data_0216d14c
    ldr r1, [r1, #0x0]
    ldr ip, =data_0216d150
    ldr ip, [ip, #0x0]
    ldr lr, =0x20b9dc0
    bx ip
    bl func_020b9ba4
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
