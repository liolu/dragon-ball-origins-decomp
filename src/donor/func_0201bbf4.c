/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_Mul from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fx/auto/FX_Mul.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
#pragma ipa file
int func_0201bbf4(int a, int b) {
    return ((long long) a * b + 0x800) >> 12;
}
