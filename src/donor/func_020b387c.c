/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207e4b8 from projets/thrillville-off-the-rails/src/donor/func_0207e4b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef signed short int s16;
typedef signed long s32;
typedef enum {
    NNS_SND_CAPTURE_FORMAT_PCM16,
    NNS_SND_CAPTURE_FORMAT_PCM8
} NNSSndCaptureFormat;
typedef void (*NNSSndCaptureCallback)(void *bufferL, void *bufferR, u32 len, NNSSndCaptureFormat format, void *arg);
typedef enum {
    NNS_SND_CAPTURE_OUTPUT_EFFECT_NORMAL,
    NNS_SND_CAPTURE_OUTPUT_EFFECT_SURROUND,
    NNS_SND_CAPTURE_OUTPUT_EFFECT_HEADPHONE,
    NNS_SND_CAPTURE_OUTPUT_EFFECT_MONO
} NNSSndCaptureOutputEffectType;
typedef void (*EffectFunc)(void *bufferL_p, void *bufferR_p, u32 len, struct CallbackInfo *info);
typedef struct CallbackInfo {
    NNSSndCaptureOutputEffectType type;
    EffectFunc effectFunc;
    NNSSndCaptureCallback cbFunc;
    void *cbArg;
    NNSSndCaptureCallback cbPostFunc;
    void *cbPostArg;
    union {
        s32 surround[2];
        s32 headphone[24][2];
    } buffer;
} CallbackInfo;
extern void func_020b387c(void *bufferL_p, void *bufferR_p, u32 len, CallbackInfo *info);
extern s16 Cut_S32toS16(s32 val);
static inline s16 Cut_S32toS16(s32 val) {
    if (val < ((s16) -0x8000)) {
        val = ((s16) -0x8000);
    } else if (val > ((s16) 0x7fff)) {
        val = ((s16) 0x7fff);
    }
    return (s16) val;
}
void func_020b387c(void *bufferL_p, void *bufferR_p, u32 len, CallbackInfo *info) {
    s16 *lp = (s16 *) bufferL_p;
    s16 *rp = (s16 *) bufferR_p;
    s16 org[2];
    const unsigned long samples = len >> 1;
    long i;

    for (i = 0; i < 2; i++) {
        s32 temp = lp[i + samples - 2] - rp[i + samples - 2];
        org[i]   = Cut_S32toS16(temp);
    }

    {
        s16 *lpi = &lp[samples - 1];
        s16 *rpi = &rp[samples - 1];
        for (; lpi >= &lp[2]; lpi--, rpi--) {
            s32 diff  = lpi[-2] - rpi[-2];
            s32 templ = *lpi + diff;
            s32 tempr = *rpi - diff;

            if (diff >= 0) {
                if (templ < (s32) ((s16) 0x7fff)) {
                    *lpi = (s16) templ;
                } else {
                    *lpi = ((s16) 0x7fff);
                }
                if (tempr > (s32) ((s16) -0x8000)) {
                    *rpi = (s16) tempr;
                } else {
                    *rpi = ((s16) -0x8000);
                }
            } else {
                if (templ > (s32) ((s16) -0x8000)) {
                    *lpi = (s16) templ;
                } else {
                    *lpi = ((s16) -0x8000);
                }
                if (tempr < (s32) ((s16) 0x7fff)) {
                    *rpi = (s16) tempr;
                } else {
                    *rpi = ((s16) 0x7fff);
                }
            }
        }
    }

    for (i = 2 - 1; i >= 0; i--) {
        s32 temp = lp[i] + info->buffer.surround[i];
        lp[i]    = Cut_S32toS16(temp);
        temp     = rp[i] - info->buffer.surround[i];
        rp[i]    = Cut_S32toS16(temp);
    }

    for (i = 0; i < 2; i++) {
        info->buffer.surround[i] = org[i];
    }
}
