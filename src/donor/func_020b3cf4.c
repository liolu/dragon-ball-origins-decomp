/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* MTX_Copy43To33 from https://github.com/kh-recoded-decomp/kh-recoded-decomp eu/src/calls/MTX_Copy43To33.c (license: MIT),
 * reused by tools/donor_match.py */
// clang-format off
#pragma ipa file
asm void func_020b3cf4(const void *src, void *dst)
{
    stmdb sp!, {r4, r5, r6, r7, r8, r9}
    ldmia r0, {r2, r3, r4, r5, r6, r7, r8, r9, r12}
    stmia r1!, {r2, r5, r8}
    stmia r1!, {r3, r6, r9}
    stmia r1!, {r4, r7, r12}
    ldmia sp!, {r4, r5, r6, r7, r8, r9}
    bx lr
}
// clang-format on
