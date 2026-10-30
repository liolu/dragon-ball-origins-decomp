/* func_02017fac from projets/rayman-rr/src/auto/func_02017fac.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020ba7e8(void) {
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3}
    stmia r1!, {r2, r3}
    bx lr
}
// clang-format on
