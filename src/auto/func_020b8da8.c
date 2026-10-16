/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned char u8;
typedef void (*ThreadDestructor)(void *arg);
typedef struct OSThread {
    u8 pad_00[0xb4];
    ThreadDestructor destructor;
} OSThread;
typedef struct {
    u8 pad_00[8];
    OSThread **currentThreadPtr;
} SchedulerGlobals_02056b50;
extern SchedulerGlobals_02056b50 data_0216cea0;
extern void func_020ba034(void);
extern void func_020b8de0(void);

/* ExitCurrentThreadWithArg_02002a00 from https://github.com/kh-recoded-decomp/kh-recoded-decomp
 * src/arm9/unclassified_helpers/ExitCurrentThreadWithArg_02002a00.c (license: MIT), reused by tools/donor_match.py */
void func_020b8da8(void *arg) {
    OSThread *currentThread     = *data_0216cea0.currentThreadPtr;
    ThreadDestructor destructor = currentThread->destructor;

    if (destructor != 0) {
        currentThread->destructor = 0;
        destructor(arg);
        func_020ba034();
    }
    func_020b8de0();
}
