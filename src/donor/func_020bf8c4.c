/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARDi_InitCommon from projets/blue-dragon-awakened-shadow/src/donor/CARDi_InitCommon.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef signed char s8;
typedef short s16;
typedef signed long s32;
typedef long long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef int BOOL;
typedef volatile u8 REGType8v;
typedef volatile u16 REGType16v;
typedef volatile u32 REGType32v;
typedef int OSIntrMode;
typedef u64 OSTick;
typedef struct OSBirthday {
    u8 month;
    u8 day;
} OSBirthday;
typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColor;
    OSBirthday birthday;
    u16 nickName[10 + 1];
    u16 nickNameLength;
    u16 comment[26 + 1];
    u16 commentLength;
} OSOwnerInfo;
typedef void *OSMessage;
typedef s32 CARDiOwner;
typedef int CARDResult;
typedef int CARDBackupType;
typedef int CARDRequest;
typedef int CARDRequestMode;
typedef int CARDTargetMode;
typedef void (*MIDmaCallback)(void *);
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
};
enum {
    CARD_TARGET_NONE,
    CARD_TARGET_ROM,
    CARD_TARGET_BACKUP
};
enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_READ_STATUS,
    CARD_REQ_WRITE_STATUS,
    CARD_REQ_ERASE_SUBSECTOR_BACKUP,
    CARD_REQ_MAX
};
enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
};
enum {
    CARD_STAT_INIT     = (1 << 0),
    CARD_STAT_INIT_CMD = (1 << 1),
    CARD_STAT_BUSY     = (1 << 2),
    CARD_STAT_TASK     = (1 << 3),
    CARD_STAT_RECV     = (1 << 4),
    CARD_STAT_REQ      = (1 << 5),
    CARD_STAT_CANCEL   = (1 << 6)
};
typedef struct CARDiCommandArg {
    CARDResult result;
    CARDBackupType type;
    u32 id;
    u32 src;
    u32 dst;
    u32 len;
    struct {
        u32 total_size;
        u32 sect_size;
        u32 subsect_size;
        u32 page_size;
        u32 addr_width;
        u32 program_page;
        u32 write_page;
        u32 write_page_total;
        u32 erase_chip;
        u32 erase_chip_total;
        u32 erase_sector;
        u32 erase_sector_total;
        u32 erase_subsector;
        u32 erase_subsector_total;
        u32 erase_page;
        u8 initial_status;
        u8 padding1[3];
        u32 caps;
        u8 padding2[4];
    } spec;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    int command;
    volatile CARDiOwner lock_owner;
    volatile int lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    CARDRequest req_type;
    int req_retry;
    CARDRequestMode req_mode;
    MIDmaCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *);
    u8 thread[0xc0];
    struct OSThread *cur_th;
    u32 priority;
    OSThreadQueue busy_q[1];
    volatile u32 flag;
    u32 flush_threshold_ic;
    u32 flush_threshold_dc;
    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
} CARDiCommon;
extern OSIntrMode OS_DisableInterrupts(void);
extern OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void OS_WakeupThread(OSThreadQueue *queue);
extern void func_020b8ef4(void *thread);
extern void OS_Terminate(void);
extern void func_020ba8dc(const void *src, void *dst, u32 size);
extern void MI_CpuFill8(void *dst, u8 data, u32 size);
extern void func_020b963c(const void *startAddr, u32 nBytes);
extern void DC_InvalidateRange(void *startAddr, u32 nBytes);
extern void DC_WaitWriteBufferEmpty(void);
extern BOOL CARDi_Request(CARDiCommon *p, int req_type, int retry_max);
extern void CARDi_SetTask(void (*task)(CARDiCommon *));
extern u32 CARD_GetBackupSectorSize(void);
extern void CARD_CheckEnabled(void);
extern void OSi_ReferSymbol(void *symbol);
extern struct {
    u32 initialized;
    struct OSThread *current;
} data_02044330;
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->head = queue->tail = ((void *) 0);
}
static inline void CARDi_WaitTask(CARDiCommon *p, MIDmaCallback callback, void *callback_arg) {
    OSIntrMode bak_psr = OS_DisableInterrupts();

    while ((p->flag & CARD_STAT_BUSY) != 0) {
        OS_SleepThread(p->busy_q);
    }

    p->flag |= CARD_STAT_BUSY;
    p->callback     = callback;
    p->callback_arg = callback_arg;

    (void) OS_RestoreInterrupts(bak_psr);
}
static inline void CARDi_EndTask(CARDiCommon *p, BOOL is_own_task) {
    const MIDmaCallback func = p->callback;
    void *const arg          = p->callback_arg;

    {
        OSIntrMode bak_psr = OS_DisableInterrupts();

        p->flag &= ~(CARD_STAT_BUSY | CARD_STAT_TASK | CARD_STAT_CANCEL);
        OS_WakeupThread(p->busy_q);

        if ((p->flag & CARD_STAT_RECV) != 0) {
            func_020b8ef4(p->thread);
        }

        (void) OS_RestoreInterrupts(bak_psr);
    }

    if (is_own_task && func) {
        (*func)(arg);
    }
}
extern CARDiCommon data_0216f020 __attribute__((aligned(32)));
extern CARDiCommandArg data_0216efc0 __attribute__((aligned(32)));
extern u8 data_0216f640[];
extern void func_020ba734(u32 data, void *destp, u32 size);
extern void func_020b8c30(void *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void func_020bbe98(int fifotag, void (*callback)(int, u32, BOOL));
extern void func_020c09a4(void *arg);
extern void func_020c0970(int tag, u32 data, BOOL err);
extern void func_020bf9fc(BOOL enable);
static inline BOOL MB_IsMultiBootChild(void) {
    return *(const u16 *) 0x027FFC40 == 2;
}
void func_020bf8c4(void) {
    CARDiCommon *p = &data_0216f020;

    p->lock_owner  = (-3);
    p->lock_ref    = 0;
    p->lock_target = CARD_TARGET_NONE;

    p->cmd = &data_0216efc0;
    func_020ba734((0x00), (&data_0216efc0), (sizeof(data_0216efc0)));
    func_020b963c(&data_0216efc0, sizeof(data_0216efc0));

    p->flush_threshold_ic = 0xFFFFFFFF;
    p->flush_threshold_dc = 0xFFFFFFFF;

    if (!MB_IsMultiBootChild()) {
        func_020ba8dc((const void *) 0x027FFE00, (void *) 0x027FFA80, 0x160);
    }

    OS_InitThreadQueue(p->lock_queue);
    OS_InitThreadQueue(p->busy_q);
    p->priority = 4;
    func_020b8c30(p->thread, func_020c09a4, ((void *) 0), data_0216f640, 0x400, p->priority);
    func_020b8ef4(p->thread);

    func_020bbe98(11, func_020c0970);

    if (!MB_IsMultiBootChild()) {
        func_020bf9fc(1);
    }
}
