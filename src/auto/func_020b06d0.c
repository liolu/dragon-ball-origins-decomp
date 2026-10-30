/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020744d0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_capture.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_020b9604(void *ptr, u32 size);
extern BOOL func_020b92a0(void *queue, void *msg, s32 flags);
typedef struct UnkSndFader {
    s32 origin;
    s32 target;
    s32 counter;
    s32 frames;
} UnkSndFader;
typedef void (*UnkCaptureCallback)(void *buf0, void *buf1, u32 size, int format, void *arg);
typedef struct UnkSndCapture {
    BOOL active;
    int type;
    int format;
    void *buf0;
    void *buf1;
    u32 bufSize;
    u32 unk_18;
    u32 unk_1c;
    u32 lockedChBitMask;
    u32 chBitMask;
    u32 capBitMask;
    int alarmNo;
    u32 unk_30;
    UnkCaptureCallback callback;
    void *arg;
    UnkSndFader fader;
    BOOL stopAfterFade;
    int volume;
} UnkSndCapture;
typedef struct UnkSndCaptureMsg {
    UnkSndCapture *capture;
    u32 size;
    u32 unk_08;
    void *buf0;
    void *buf1;
} UnkSndCaptureMsg;
typedef struct UnkMessageQueue {
    u8 unk_00[0x20];
} UnkMessageQueue;
extern UnkMessageQueue data_0216b93c;
extern void func_020b06d0(void *arg);
void func_020b06d0(void *arg) {
    void *msg;

    while (1) {
        UnkSndCaptureMsg *info;
        UnkSndCapture *capture;

        func_020b92a0(&data_0216b93c, &msg, 1);
        info = msg;
        if (info == 0) {
            break;
        }

        func_020b9604(info->buf0, info->size);
        func_020b9604(info->buf1, info->size);

        capture = info->capture;
        capture->callback(info->buf0, info->buf1, info->size, capture->format, capture->arg);
    }
}
