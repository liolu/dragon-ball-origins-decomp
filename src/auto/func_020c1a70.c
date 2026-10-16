/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned short u16;
typedef unsigned long u32;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
extern void func_020bef74(void);
extern int func_020bf054(RTCTime *time);
extern u32 data_020e7a18;

/* Ov105_WM_GetNextTgid from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WM_GetNextTgid.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
u16 func_020c1a70(void) {
    enum {
        TGID_DEFAULT = (1 << 16)
    };

    if (data_020e7a18 == (u32) TGID_DEFAULT) {
        RTCTime rt[1];
        func_020bef74();
        if (func_020bf054(rt) == 0) {
            data_020e7a18 = (u16) (rt->second + (rt->minute << 8));
        }
    }

    data_020e7a18 = (u16) (data_020e7a18 + 1);
    return (u16) data_020e7a18;
}
