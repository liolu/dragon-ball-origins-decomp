/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b8a20 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b8a20.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL func_020b9134(OSContext *context);
extern void func_020b9180(OSContext *context);
extern int func_020ba098(void);
extern void *func_020b8f1c(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 data_0216cec4;
extern struct Globals data_0216cea0;
void func_020b8a20(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (data_0216cea0.rescheduleCount != 0) {
        return;
    }

    info = &data_0216cec4;
    if (data_0216cea0.irqDepth != 0 || func_020ba098() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) data_0216cea0.currentThreadPtr;
    cur    = *curPtr;
    next   = func_020b8f1c();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (func_020b9134((OSContext *) cur)) {
            return;
        }
    }

    cb = data_0216cea0.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    data_0216cea0.currentThread = next;
    func_020b9180((OSContext *) next);
}
