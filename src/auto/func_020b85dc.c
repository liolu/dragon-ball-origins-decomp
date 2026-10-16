/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020778bc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_spinlock.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
extern u32 func_020ba034(void);
extern u32 func_020ba048(u32 irq_flag);
extern u32 func_020ba060(void);
extern u32 func_020ba074(u32 fiq_flag);
extern s32 func_020baa5c(u32 value, void *dst);
typedef struct UnkLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} UnkLockWord;
extern s32 func_020b85dc(u16 lockID, UnkLockWord *lockp, void (*ctrlFunc)(void), BOOL disableFiq);
s32 func_020b85dc(u16 lockID, UnkLockWord *lockp, void (*ctrlFunc)(void), BOOL disableFiq) {
    s32 lastLockFlag;
    u32 prev;

    if (disableFiq) {
        prev = func_020ba060();
    } else {
        prev = func_020ba034();
    }

    lastLockFlag = func_020baa5c(lockID, &lockp->lockFlag);
    if (lastLockFlag == 0) {
        if (ctrlFunc) {
            ctrlFunc();
        }
        lockp->ownerID = lockID;
    }

    if (disableFiq) {
        func_020ba074(prev);
    } else {
        func_020ba048(prev);
    }
    return lastLockFlag;
}
