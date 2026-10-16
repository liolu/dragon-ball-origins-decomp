
extern void func_020b9ce0();
extern void func_020b9d70();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020b9ccc(void) {
    stmfd sp!, {r0, lr}
    bl func_020b9ce0
    bl func_020b9d70
    ldmfd sp!, {r0, lr}
    bx lr
}
