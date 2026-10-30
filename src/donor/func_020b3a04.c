/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207e640 from projets/thrillville-off-the-rails/src/donor/func_0207e640.c (same code in another game of this
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
extern void func_020b3a04(void *bufferL_p, void *bufferR_p, u32 len, CallbackInfo *info);
extern s16 Cut_S32toS16(s32 val);
static inline s16 Cut_S32toS16(s32 val) {
    if (val < ((s16) -0x8000)) {
        val = ((s16) -0x8000);
    } else if (val > ((s16) 0x7fff)) {
        val = ((s16) 0x7fff);
    }
    return (s16) val;
}
void func_020b3a04(void *bufferL_p, void *bufferR_p, u32 len, CallbackInfo *info) {
    s16 *lp                     = (s16 *) bufferL_p;
    s16 *rp                     = (s16 *) bufferR_p;
    const unsigned long samples = len >> 1;
    int i;
    s32 l;
    s32 r;
    int offset;
    unsigned long rest_samples;

    offset = 0;
    while (samples > 24 + offset) {
        for (i = 0; i < 24; i++) {
            const register int x = i + offset;

            l = lp[x] + info->buffer.headphone[i][0];
            r = rp[x] + info->buffer.headphone[i][1];

            lp[x]                        = Cut_S32toS16(l);
            rp[x]                        = Cut_S32toS16(r);
            info->buffer.headphone[i][0] = (r + 1) >> 2;
            info->buffer.headphone[i][1] = (l + 1) >> 2;
        }
        offset += 24;
    }

    rest_samples = samples - offset;
    for (i = 0; i < rest_samples; i++) {
        const int x = i + offset;

        l     = lp[x] + info->buffer.headphone[i][0];
        r     = rp[x] + info->buffer.headphone[i][1];
        lp[x] = Cut_S32toS16(l);
        rp[x] = Cut_S32toS16(r);
    }

    for (i = 0; i < 24 - rest_samples; i++) {
        info->buffer.headphone[i][0] = info->buffer.headphone[i + rest_samples][0];
        info->buffer.headphone[i][1] = info->buffer.headphone[i + rest_samples][1];
    }

    for (i = 0; i < rest_samples; i++) {
        const long x = (long) (i + 24 - rest_samples);

        info->buffer.headphone[x][0] = (rp[i + offset] + 1) >> 2;
        info->buffer.headphone[x][1] = (lp[i + offset] + 1) >> 2;
    }
}
