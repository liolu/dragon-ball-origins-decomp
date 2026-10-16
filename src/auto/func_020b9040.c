/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b9040 from https://github.com/Yokimitsuro/khrecoded-decomp libs/nitro/os/calls/func_020b9040.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int OSIntrMode;
typedef struct OSThreadSystemState {
    u32 reserved000;
    u32 rescheduleCount;
} OSThreadSystemState;
extern OSThreadSystemState data_0216cea0;
extern OSIntrMode func_020ba034(void);
extern OSIntrMode func_020ba048(OSIntrMode mode);
u32 func_020b9040(void) {
    OSIntrMode interruptMode = func_020ba034();
    u32 count;

    if (data_0216cea0.rescheduleCount < (u32) (0 - 1)) {
        count = data_0216cea0.rescheduleCount++;
    }
    (void) func_020ba048(interruptMode);

    return count;
}
