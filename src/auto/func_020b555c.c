/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FX_AcosIdx from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/fx/calls/FX_AcosIdx.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef short s16;
extern short data_020d0178[];
u16 func_020b555c(int nCos) {
    int lo, hi;
    int mid;
    s16 target;

    if (nCos >= 0) {
        lo = 0;
        hi = 0x400;
    } else {
        lo = 0x400;
        hi = 0x800;
    }
    target = (s16) nCos;

    while (lo <= hi) {
        mid = (lo + hi) / 2;
        if (target == data_020d0178[mid * 2 + 1]) {
            break;
        }
        if (data_020d0178[mid * 2 + 1] < target) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }

    return (u16) (((mid * 2 + 1) << 16) / 0x2000);
}
