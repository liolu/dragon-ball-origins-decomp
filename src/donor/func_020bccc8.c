/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_NextCommand from projets/blue-dragon-awakened-shadow/src/donor/FSi_NextCommand.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
extern void OSi_ReferSymbol(void *symbol);
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef signed long long int s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef volatile f32 vf32;
typedef u8 REGType8;
typedef u16 REGType16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu8 REGType8v;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef int BOOL;
extern u32 OS_GetDTCMAddress(void);
typedef volatile struct OSLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;
typedef enum {
    OS_PROCMODE_USER  = 16,
    OS_PROCMODE_FIQ   = 17,
    OS_PROCMODE_IRQ   = 18,
    OS_PROCMODE_SVC   = 19,
    OS_PROCMODE_ABORT = 23,
    OS_PROCMODE_UNDEF = 27,
    OS_PROCMODE_SYS   = 31
} OSProcMode;
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode OS_EnableInterrupts(void);
extern OSIntrMode func_020ba034(void);
extern OSIntrMode func_020ba048(OSIntrMode state);
extern OSIntrMode OS_DisableInterrupts_IrqAndFiq(void);
extern OSIntrMode OS_RestoreInterrupts_IrqAndFiq(OSIntrMode state);
extern OSIntrMode OS_GetCpsrIrq(void);
extern OSProcMode OS_GetProcMode(void);
extern void OS_SpinWait(u32 cycles);
extern void OS_WaitVBlankIntr(void);
typedef void (*MIDmaCallback)(void *);
typedef union {
    u32 b32;
    u16 b16;
} MIiDmaClearSrc;
extern void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
extern void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
extern void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, MIDmaCallback callback, void *arg);
extern void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
extern void MI_WaitDma(u32 dmaNo);
extern void MI_StopDma(u32 dmaNo);
extern void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType);
extern void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
extern void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_wait(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
extern void MIi_DmaSetParams_wait_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
static inline void MIi_DmaSetParams_wait_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = func_020ba034();

    MIiDmaClearSrc *scrp = (MIiDmaClearSrc *) ((u32) 0x40000e0 + dmaNo * 4);
    scrp->b32            = data;
    MIi_DmaSetParams_wait_noInt(dmaNo, (u32) scrp, dest, ctrl);

    (void) func_020ba048(lastIntrMode);
}
static inline void MIi_DmaSetParams_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = func_020ba034();

    MIiDmaClearSrc *srcp = (MIiDmaClearSrc *) ((u32) 0x40000e0 + dmaNo * 4);
    srcp->b32            = data;
    MIi_DmaSetParams_noInt(dmaNo, (u32) srcp, dest, ctrl);

    (void) func_020ba048(lastIntrMode);
}
static inline void MIi_CallCallback(MIDmaCallback callback, void *arg) {
    if (callback) {
        (callback)(arg);
    }
}
extern void SVC_CpuSet(const void *srcp, void *destp, u32 dmaCntData);
extern void SVC_WaitByLoop(u32 ct);
static inline void OSi_WaitByLoop(void) {
    SVC_WaitByLoop(0x1000 / 4);
}
extern void OS_InitLock(void);
extern s32 OSi_DoLockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFiq);
extern s32 OS_TryLockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OSi_DoUnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFIQ);
extern s32 OS_UnlockByWord(u16 lockId, OSLockWord *lockp, void (*ctrlFuncp)(void));
extern s32 OSi_DoTryLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void), BOOL disableFiq);
extern s32 OS_LockCartridge(u16 lockID);
extern s32 OS_UnlockCartridge(u16 lockID);
extern s32 OS_TryLockCartridge(u16 lockID);
extern void OSi_AllocateCartridgeBus(void);
extern void OSi_FreeCartridgeBus(void);
extern s32 OS_TryLockCard(u16 lockID);
extern s32 OS_UnlockCard(u16 lockID);
extern void OSi_AllocateCardBus(void);
extern void OSi_FreeCardBus(void);
extern u16 OS_ReadOwnerOfLockWord(OSLockWord *lock);
extern s32 OS_UnLockCartridge(u16 lockID);
extern s32 OS_GetLockID(void);
extern void OS_ReleaseLockID(register u16 lockID);
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
extern void CP_SaveContext(register CPContext *context);
extern void CPi_RestoreContext(const CPContext *context);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;
    u32 sp_svc;
    CPContext cp_context;
} OSContext;
extern void OS_InitContext(register OSContext *context, register u32 newpc, register u32 newsp);
extern BOOL OS_SaveContext(register OSContext *context);
extern void OS_LoadContext(register OSContext *context);
typedef enum {
    OS_TIMER_PRESCALER_1    = (0UL << 0),
    OS_TIMER_PRESCALER_64   = (1UL << 0),
    OS_TIMER_PRESCALER_256  = (2UL << 0),
    OS_TIMER_PRESCALER_1024 = (3UL << 0)
} OSTimerPrescaler;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
static inline void OS_SetTimerCount(OSTimer id, u16 count) {
    *((REGType16 *) ((u32) & (*(REGType16v *) 0x4000100) + id * 4)) = count;
}
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    *((REGType16 *) ((u32) & (*(REGType16v *) 0x4000102) + id * 4)) = control;
}
extern void OSi_SetTimerReserved(s32 timerNum);
typedef u64 OSTick;
extern void OS_InitTick(void);
extern BOOL OS_IsTickAvailable(void);
extern OSTick OS_GetTick(void);
extern u16 OS_GetTickLo(void);
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSSwitchThreadCallback)(OSThread *from, OSThread *to);
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;

    OSThreadQueue *queue;
    OSThreadLink link;

    OSMutex *mutex;
    OSMutexQueue mutexQueue;

    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;

    OSThreadQueue joinQueue;

    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;

    u32 systemErrno;
};
extern OSThreadInfo OSi_ThreadInfo;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &OSi_ThreadInfo;
}
static inline BOOL OS_IsThreadRunnable(const OSThread *thread) {
    return thread->state == OS_THREAD_STATE_READY;
}
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->head = queue->tail = ((void *) 0);
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}
extern OSMutex *OSi_RemoveMutexLinkFromQueue(OSMutexQueue *queue);
extern void OS_InitThread(void);
extern BOOL OS_IsThreadAvailable(void);
extern void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
extern void OS_ExitThread(void);
extern void OS_DestroyThread(OSThread *thread);
extern void OS_JoinThread(OSThread *thread);
extern BOOL OS_IsThreadTerminated(const OSThread *thread);
extern void OS_SleepThread(OSThreadQueue *queue);
extern void func_020b8e8c(OSThreadQueue *queue);
extern void OS_WakeupThreadDirect(OSThread *thread);
extern OSThread *OS_SelectThread(void);
extern void OS_RescheduleThread(void);
extern void OS_YieldThread(void);
extern BOOL OS_SetThreadPriority(OSThread *thread, u32 prio);
extern u32 OS_GetThreadPriority(const OSThread *thread);
extern void OS_Sleep(u32 msec);
extern OSSwitchThreadCallback OS_SetSwitchThreadCallback(OSSwitchThreadCallback callback);
extern u32 OS_DisableScheduler(void);
extern u32 OS_EnableScheduler(void);
extern void OS_SetThreadDestructor(OSThread *thread, OSThreadDestructor dtor);
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;

    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;

    OSTick period;
    OSTick start;
};
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
extern void OS_InitAlarm(void);
extern BOOL OS_IsAlarmAvailable(void);
extern void OS_CreateAlarm(OSAlarm *alarm);
extern void OS_SetAlarm(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
extern void OS_CancelAlarm(OSAlarm *alarm);
extern void OSi_AlarmHandler(void *arg);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
extern void OS_InitMutex(OSMutex *mutex);
extern void OS_LockMutex(OSMutex *mutex);
extern void OS_UnlockMutex(OSMutex *mutex);
extern void OSi_UnlockAllMutex(OSThread *thread);
extern BOOL OS_TryLockMutex(OSMutex *mutex);
extern void OSi_EnqueueTail(OSThread *thread, OSMutex *mutex);
extern void OSi_DequeueItem(OSThread *thread, OSMutex *mutex);
extern void OS_SetDPermissionsForProtectionRegion(register u32 setMask, register u32 flags);
extern void OS_SetProtectionRegion1(u32 param);
extern void OS_SetProtectionRegion2(u32 param);
typedef enum {
    OSi_PR_BASE_MASK_4KB   = 0xfffff000,
    OSi_PR_BASE_MASK_8KB   = 0xffffe000,
    OSi_PR_BASE_MASK_16KB  = 0xffffc000,
    OSi_PR_BASE_MASK_32KB  = 0xffff8000,
    OSi_PR_BASE_MASK_64KB  = 0xffff0000,
    OSi_PR_BASE_MASK_128KB = 0xfffe0000,
    OSi_PR_BASE_MASK_256KB = 0xfffc0000,
    OSi_PR_BASE_MASK_512KB = 0xfff80000,
    OSi_PR_BASE_MASK_1MB   = 0xfff00000,
    OSi_PR_BASE_MASK_2MB   = 0xffe00000,
    OSi_PR_BASE_MASK_4MB   = 0xffc00000,
    OSi_PR_BASE_MASK_8MB   = 0xff800000,
    OSi_PR_BASE_MASK_16MB  = 0xff000000,
    OSi_PR_BASE_MASK_32MB  = 0xfe000000,
    OSi_PR_BASE_MASK_64MB  = 0xfc000000,
    OSi_PR_BASE_MASK_128MB = 0xf8000000,
    OSi_PR_BASE_MASK_256MB = 0xf0000000,
    OSi_PR_BASE_MASK_512MB = 0xe0000000,
    OSi_PR_BASE_MASK_1GB   = 0xc0000000,
    OSi_PR_BASE_MASK_2GB   = 0x80000000,
    OSi_PR_BASE_MASK_4GB   = 0x00000000
} OSiProtectionRegionBaseMask;
static inline u32 OSi_CalcPRParam(u32 address, u32 size, OSiProtectionRegionBaseMask mask) {
    return ((address & mask) | size);
}
extern void OS_EnableProtectionUnit(void);
extern void OS_DisableProtectionUnit(void);
extern void OS_GetLowEntropyData(u32 *arr);
extern vu64 OSi_TickCounter;
extern u16 OS_GetTickLo(void);
static inline s32 GX_GetVCount(void) {
    return (*(REGType16v *) 0x4000006);
}
extern BOOL OS_IsRunOnEmulator(void);
extern u32 OS_GetConsoleType(void);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef struct {
    void *lo[OS_ARENA_MAX];
    void *hi[OS_ARENA_MAX];
    u16 initialized;
    u8 padding[2];
} OSArenaInfo;
extern void OS_InitArena(void);
extern void OS_InitArenaEx(void);
extern void *OS_GetArenaHi(OSArenaId id);
extern void *OS_GetArenaLo(OSArenaId id);
extern void *OS_GetInitArenaHi(OSArenaId id);
extern void *OS_GetInitArenaLo(OSArenaId id);
extern void OS_SetArenaHi(OSArenaId id, void *newHi);
extern void OS_SetArenaLo(OSArenaId id, void *newLo);
extern void *OS_AllocFromArenaLo(OSArenaId id, u32 size, u32 align);
extern void *OS_AllocFromArenaHi(OSArenaId id, u32 size, u32 align);
typedef s32 OSHeapHandle;
typedef struct Cell Cell;
struct Cell {
    Cell *prev;
    Cell *next;
    long size;
};
typedef struct {
    long size;
    Cell *free;
    Cell *allocated;
} HeapDesc;
typedef struct {
    volatile OSHeapHandle currentHeap;
    int numHeaps;
    void *arenaStart;
    void *arenaEnd;
    HeapDesc *heapArray;
} OSHeapInfo;
extern Cell *DLAddFront(Cell *list, Cell *cell);
extern Cell *DLExtract(Cell *list, Cell *cell);
extern Cell *DLInsert(Cell *original, Cell *inserted);
extern void *OS_AllocFromHeap(OSArenaId id, OSHeapHandle heap, u32 size);
extern void OS_FreeToHeap(OSArenaId id, OSHeapHandle heap, void *ptr);
extern void OS_Terminate(void);
extern void OS_Halt(void);
extern u32 SDK_AUTOLOAD_DTCM_START[];
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void);
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
extern OSIrqFunction OS_IRQTable[];
extern OSIrqCallbackInfo OSi_IrqCallbackInfo[8];
extern void OS_InitIrqTable(void);
extern void OS_SetIrqFunction(OSIrqMask intrBit, OSIrqFunction function);
extern OSIrqFunction OS_GetIrqFunction(OSIrqMask intrBit);
extern void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *), void *arg);
extern void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
extern OSIrqMask OS_SetIrqMask(OSIrqMask mask);
extern OSIrqMask OS_EnableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
extern OSIrqMask OS_ResetRequestIrqMask(OSIrqMask mask);
extern void OS_SetIrqStackChecker(void);
static inline BOOL OS_DisableIrq(void) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (0UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_EnableIrq(void) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (1UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    u16 prep                    = (*(REGType16v *) 0x4000208);
    (*(REGType16v *) 0x4000208) = (u16) enable;
    return (BOOL) prep;
}
static inline OSIrqMask OS_GetIrqMask(void) {
    return (*(REGType32v *) 0x4000210);
}
static inline void OS_ClearIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) &= (u32) ~intr;
}
static inline OSIrqMask OS_GetIrqCheckFlag(void) {
    return *(OSIrqMask *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38);
}
extern void OS_IrqHandler(void);
extern void OS_IrqHandler_ThreadSwitch(void);
extern void OS_WaitIrq(BOOL clear, OSIrqMask irqFlags);
extern void OS_IrqDummy(void);
extern void OSi_IrqCallback(s32 index);
extern void OSi_IrqDma0(void);
extern void OSi_IrqDma1(void);
extern void OSi_IrqDma2(void);
extern void OSi_IrqDma3(void);
extern void OSi_IrqTimer0(void);
extern void OSi_IrqTimer1(void);
extern void OSi_IrqTimer2(void);
extern void OSi_IrqTimer3(void);
static inline void OS_SetIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) |= (u32) intr;
}
extern void OS_InitReset(void);
extern void OS_ResetSystem(u32 parameter);
extern void OSi_DoBoot(void);
static inline u32 OS_GetResetParameter(void) {
    return (u32) * (u32 *) (0x02000000 + 0x007ffc20);
}
typedef struct {
    OSContext context;
    u32 cp15;
    u32 spsr;
    u32 exinfo;
    u32 debug[4];
} OSiExContext;
typedef void (*OSExceptionHandler)(u32, void *);
extern void OS_InitException(void);
extern void OSi_ExceptionHandler(void);
typedef void *OSMessage;
typedef struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
extern void OS_InitMessageQueue(OSMessageQueue *mq, OSMessage *msgArray, s32 msgCount);
extern BOOL OS_SendMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
extern BOOL OS_ReceiveMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
extern BOOL OS_JamMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
extern BOOL OS_ReadMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
extern void OS_InitVAlarm(void);
extern void OSi_InitVramExclusive(void);
extern BOOL OSi_TryLockVram(u16 bank, u16 lockId);
extern void OSi_UnlockVram(u16 bank, u16 lockId);
extern void OS_Init(void);
struct FSFile;
struct FSArchive;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,

    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,

    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,

    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, u32 pos, u32 size);
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef struct {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchive {
    union {
        char ptr[4];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
static inline BOOL FS_IsArchiveLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000002) ? 1 : 0;
}
static inline u32 FS_GetArchiveOffset(const FSArchive *p_arc, u32 pos) {
    return p_arc->base + pos;
}
static inline BOOL FSi_IsArchiveCanceling(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000020) != 0;
}
static inline BOOL FS_IsArchiveSuspended(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000008) ? 1 : 0;
}
static inline BOOL FSi_IsArchiveSuspending(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000040) != 0;
}
static inline BOOL FSi_IsArchiveRunning(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000010) != 0;
}
static inline BOOL FSi_IsArchiveUnloading(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000080) != 0;
}
static inline BOOL FSi_IsArchiveAsync(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000100) != 0;
}
static inline BOOL FSi_IsArchiveSync(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000200) != 0;
}
static inline BOOL FS_IsArchiveTableLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000004) ? 1 : 0;
}
extern u32 FSi_GetPackedName(const char *name, int name_len);
extern FSResult FSi_ReadMemCallback(struct FSArchive *p_arc, void *dest, u32 pos, u32 size);
extern FSResult FSi_WriteMemCallback(struct FSArchive *p_arc, const void *src, u32 pos, u32 size);
extern FSResult SDK_data_02004710(struct FSArchive *p_arc, void *dest, u32 pos, u32 size);
extern struct FSFile *func_020bccc8(struct FSArchive *p_arc);
extern void FSi_ExecuteAsyncCommand(struct FSFile *p_file);
extern BOOL FSi_ExecuteSyncCommand(struct FSFile *file);
extern BOOL FSi_SendCommand(struct FSFile *file, FSCommandType command);
extern void FS_InitArchive(struct FSArchive *p_arc);
extern struct FSArchive *const FS_FindArchive(const char *path, int offset);
extern BOOL FS_RegisterArchiveName(struct FSArchive *p_arc, const char *name, int name_len);
extern void FS_ReleaseArchiveName(struct FSArchive *p_arc);
extern BOOL FS_LoadArchive(struct FSArchive *p_arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                           FS_ARCHIVE_READ_FUNC read_func, FS_ARCHIVE_WRITE_FUNC write_func);
extern BOOL FS_UnloadArchive(struct FSArchive *p_arc);
extern u32 Fs_Archive_LoadFatFnt(struct FSArchive *p_arc, void *p_mem, u32 max_size);
extern void *FS_UnloadArchiveTables(struct FSArchive *p_arc);
extern BOOL FS_SuspendArchive(struct FSArchive *p_arc);
extern BOOL FS_ResumeArchive(struct FSArchive *p_arc);
extern void FS_SetArchiveProc(struct FSArchive *p_arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
extern void FS_NotifyArchiveAsyncEnd(struct FSArchive *p_arc, FSResult ret);
typedef enum FSSeekFileMode {
    FS_SEEK_SET = 0,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
struct FSFile;
typedef struct FSDirPos {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct FSFileID {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[128];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;

    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;

        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
extern void FS_Init(u32 default_dma_no);
extern BOOL FS_IsAvailable(void);
extern void func_020bd3c4(FSFile *p_file);
extern int FSi_ReadFileCore(FSFile *p_file, void *dst, s32 len, BOOL async);
extern BOOL FS_ConvertPathToFileID(FSFileID *p_file_id, const char *path);
extern BOOL Fs_File_OpenRaw(FSFile *p_file, FSArchive *p_arc, u32 image_top, u32 image_bottom, u32 file_index);
extern BOOL FS_OpenFileFast(FSFile *p_file, FSFileID file_id);
extern BOOL FS_OpenFile(FSFile *p_file, const char *path);
extern BOOL Fs_File_Close(FSFile *p_file);
extern BOOL FS_WaitAsync(FSFile *p_file);
extern int FS_ReadFileAsync(FSFile *p_file, void *dst, s32 len);
extern int Fs_File_Read(FSFile *p_file, void *dst, s32 len);
extern BOOL FS_SeekFile(FSFile *p_file, s32 offset, FSSeekFileMode origin);
extern BOOL FS_ChangeDir(const char *path);
static inline u32 const FS_GetFileImageTop(volatile const FSFile *p_file) {
    return p_file->prop.file.top;
}
static inline u32 const FS_GetLength(volatile const FSFile *p_file) {
    return p_file->prop.file.bottom - p_file->prop.file.top;
}
static inline BOOL FS_IsCanceling(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsFileSyncMode(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000004) ? 1 : 0;
}
static inline BOOL FS_IsBusy(volatile const FSFile *p_file) {
    return p_file->stat & 0x00000001 ? 1 : 0;
}
static inline BOOL FS_IsSucceeded(volatile const FSFile *p_file) {
    return (p_file->error == FS_RESULT_SUCCESS) ? 1 : 0;
}
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
extern FSResult (*const fsi_default_command[])(FSFile *);
extern void func_020bc0a8(FSFile *file, FSResult signal);
extern FSResult FSi_TranslateCommand(FSFile *file, FSCommandType command);
typedef enum {
    PXI_PROC_ARM9 = 0,
    PXI_PROC_ARM7 = 1
} PXIProc;
typedef enum {
    PXI_FIFO_TAG_EX = 0,
    PXI_FIFO_TAG_USER_0,
    PXI_FIFO_TAG_USER_1,
    PXI_FIFO_TAG_SYSTEM,
    PXI_FIFO_TAG_NVRAM,
    PXI_FIFO_TAG_RTC,
    PXI_FIFO_TAG_TOUCHPANEL,
    PXI_FIFO_TAG_SOUND,
    PXI_FIFO_TAG_PM,
    PXI_FIFO_TAG_MIC,
    PXI_FIFO_TAG_WM,
    PXI_FIFO_TAG_FS,
    PXI_FIFO_TAG_OS,
    PXI_FIFO_TAG_CTRDG,
    PXI_FIFO_TAG_CARD,
    PXI_FIFO_TAG_WVR,
    PXI_FIFO_TAG_CTRDG_Ex,
    PXI_MAX_FIFO_TAG = 32
} PXIFifoTag;
typedef enum {
    PXI_FIFO_SUCCESS           = 0,
    PXI_FIFO_FAIL_SEND_ERR     = -1,
    PXI_FIFO_FAIL_SEND_FULL    = -2,
    PXI_FIFO_FAIL_RECV_ERR     = -3,
    PXI_FIFO_FAIL_RECV_EMPTY   = -4,
    PXI_FIFO_NO_CALLBACK_ENTRY = -5
} PXIFifoStatus;
typedef union {
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } e;
    u32 raw;
} PXIFifoMessage;
typedef void (*PXIFifoCallback)(PXIFifoTag tag, u32 data, BOOL err);
extern void PXI_InitFifo(void);
extern void PXI_SetFifoRecvCallback(s32 fifotag, PXIFifoCallback callback);
extern BOOL PXI_IsCallbackReady(s32 fifotag, PXIProc proc);
extern s32 PXI_SendWordByFifo(s32 fifotag, u32 data, BOOL err);
extern void PXIi_HandlerRecvFifoNotEmpty(void);
typedef enum {
    CARD_BACKUP_TYPE_EEPROM_4KBITS   = (((1) << 0) | ((9) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_64KBITS  = (((1) << 0) | ((13) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = (((1) << 0) | ((16) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_2MBITS    = (((2) << 0) | ((18) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_4MBITS    = (((2) << 0) | ((19) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_8MBITS    = (((2) << 0) | ((20) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FRAM_256KBITS   = (((3) << 0) | ((15) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_NOT_USE         = 0
} CARDBackupType;
typedef enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
} CARDResult;
typedef enum {
    CARD_TARGET_NONE,
    CARD_TARGET_ROM,
    CARD_TARGET_BACKUP
} CARDTargetMode;
typedef enum {
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
    CARD_REQ_MAX
} CARDRequest;
typedef enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;
enum {
    CARD_STAT_INIT     = (1 << 0),
    CARD_STAT_INIT_CMD = (1 << 1),
    CARD_STAT_BUSY     = (1 << 2),
    CARD_STAT_TASK     = (1 << 3),
    CARD_STAT_RECV     = (1 << 4),
    CARD_STAT_REQ      = (1 << 5),
    CARD_STAT_CANCEL   = (1 << 6)
};
typedef s32 CARDiOwner;
typedef struct CARDiCommandArg {
    CARDResult result;
    CARDBackupType type;
    u32 id;
    u32 src;
    u32 dest;
    u32 len;

    struct {
        u32 total_size;
        u32 sect_size;
        u32 page_size;
        u32 addr_width;
        u32 program_page;
        u32 write_page;
        u32 write_page_total;
        u32 erase_chip;
        u32 erase_chip_total;
        u32 erase_sector;
        u32 erase_sector_total;
        u32 erase_page;
        u8 initial_status;
        u8 padding1[3];
        u32 caps;
        u8 padding2[16];
    } spec;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    s32 command;

    volatile CARDiOwner lock_owner;
    volatile s32 lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;

    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    CARDRequest req_type;
    s32 req_retry;
    CARDRequestMode req_mode;
    MIDmaCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *);

    OSThread thread[1];
    OSThread *cur_th;

    u32 priority;
    OSThreadQueue busy_q[1];

    volatile u32 flag;

    u8 dummy[8];

    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
} CARDiCommon;
static inline void CARDi_EndTask(CARDiCommon *p, BOOL is_own_task) {
    const MIDmaCallback func = p->callback;
    void *const arg          = p->callback_arg;

    {
        OSIntrMode bak_psr = func_020ba034();

        p->flag &= ~(CARD_STAT_BUSY | CARD_STAT_TASK | CARD_STAT_CANCEL);
        func_020b8e8c(p->busy_q);
        if ((p->flag & CARD_STAT_RECV) != 0) {
            OS_WakeupThreadDirect(p->thread);
        }
        (void) func_020ba048(bak_psr);
    }

    if (is_own_task && func) {
        (*func)(arg);
    }
}
static inline void CARDi_WaitTask(CARDiCommon *p, MIDmaCallback callback, void *callback_arg) {
    OSIntrMode bak_psr = func_020ba034();
    while ((p->flag & CARD_STAT_BUSY) != 0) {
        OS_SleepThread(p->busy_q);
    }
    p->flag |= CARD_STAT_BUSY;
    p->callback     = callback;
    p->callback_arg = callback_arg;
    (void) func_020ba048(bak_psr);
}
extern void CARDi_SetTask(void (*task)(CARDiCommon *));
extern void CARDi_InitCommon(void);
extern BOOL CARD_IsEnabled(void);
extern void CARD_CheckEnabled(void);
extern void CARD_Enable(BOOL enable);
extern BOOL CARDi_WaitAsync(void);
extern BOOL CARDi_TryWaitAsync(void);
extern CARDResult CARD_GetResultCode(void);
extern void CARD_LockRom(u16 lock_id);
extern void CARD_UnlockRom(u16 lock_id);
extern void CARD_LockBackup(u16 lock_id);
extern void CARD_UnlockBackup(u16 lock_id);
static inline void CARDi_SendPxi(u32 data) {
    while (PXI_SendWordByFifo(PXI_FIFO_TAG_FS, data, 1) < 0)
        ;
}
static inline BOOL FSi_IsSlash(u32 c) {
    return (c == '/') || (c == '\\');
}
static inline void FSi_CutFromListCore(FSFileLink *trg) {
    FSFile *const pr = trg->prev;
    FSFile *const nx = trg->next;
    if (pr) {
        pr->link.next = nx;
    }
    if (nx) {
        nx->link.prev = pr;
    }
}
static inline void FSi_CutFromList(FSFile *elem) {
    FSFileLink *const trg = &elem->link;
    FSi_CutFromListCore(trg);
    trg->next = trg->prev = ((void *) 0);
}
static inline void FSi_AppendToList(FSFile *elem, FSFile *list) {
    FSFileLink *const trg = &elem->link;
    FSi_CutFromListCore(trg);
    {
        while (list->link.next) {
            list = list->link.next;
        }
        list->link.next = elem;
        trg->prev       = list;
        trg->next       = ((void *) 0);
    }
}
extern void MIi_CpuClear16(register u16 data, register void *destp, register u32 size);
extern void MIi_CpuCopy16(register const void *srcp, register void *destp, register u32 size);
extern void MIi_CpuClear32(register u32 data, register void *destp, register u32 size);
extern void MIi_CpuCopy32(register const void *srcp, register void *destp, register u32 size);
extern void MIi_CpuSend32(register const void *srcp, volatile void *destp, u32 size);
extern void MIi_CpuClearFast(register u32 data, register void *destp, register u32 size);
extern void MIi_CpuCopyFast(register const void *srcp, register void *destp, register u32 size);
extern void MI_Copy32B(register const void *pSrc, register void *pDest);
extern void MI_Copy36B(register const void *pSrc, register void *pDest);
extern void MI_Copy48B(register const void *pSrc, register void *pDest);
extern void MI_Copy64B(register const void *pSrc, register void *pDest);
extern void Mem_CpuFill8(register void *dstp, register u8 data, register u32 size);
extern void MI_CpuCopy8(register const void *srcp, register void *dstp, register u32 size);
extern void MI_Zero36B(register void *pDest);
static inline void MI_CpuClearFast(void *destp, u32 size) {
    MIi_CpuClearFast(0, destp, size);
}
static inline void MI_CpuClear8(void *dest, u32 size) {
    Mem_CpuFill8(dest, 0, size);
}
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    MIi_CpuClear16(data, dest, size);
}
static inline void MI_CpuClear16(void *destp, u32 size) {
    MIi_CpuClear16(0, destp, size);
}
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    MIi_CpuClear32(data, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    MIi_CpuCopy16(src, dest, size);
}
static inline void MI_CpuCopy32(const void *src, void *dest, u32 size) {
    MIi_CpuCopy32(src, dest, size);
}
static inline void MI_CpuFillFast(void *dest, u32 data, u32 size) {
    MIi_CpuClearFast(data, dest, size);
}
static inline void MI_CpuCopyFast(const void *src, void *dest, u32 size) {
    MIi_CpuCopyFast(src, dest, size);
}
static inline u8 MI_ReadByte(const void *address) {
    return *(u8 *) address;
}
static inline void MI_WriteByte(void *address, u8 value) {
    *(u8 *) address = value;
}
extern s32 OS_SPrintf(s8 *buffer, const s8 *format, ...);
extern s32 OS_VSPrintf(s8 *buffer, const s8 *format, void *args);
extern s32 OS_SNPrintf(s8 *buffer, s32 bufsz, const s8 *format, ...);
extern s32 OS_VSNPrintf(s8 *buffer, s32 bufsz, const s8 *format, void *args);
extern FSArchive *arc_list;
extern FSDirPos current_dir_pos;
extern u32 FSi_GetPackedName(const char *name, int name_len);
extern FSResult FSi_ReadMemCallback(struct FSArchive *p_arc, void *dest, u32 pos, u32 size);
extern FSResult FSi_WriteMemCallback(struct FSArchive *p_arc, const void *src, u32 pos, u32 size);
extern FSResult SDK_data_02004710(FSArchive *p_arc, void *dest, u32 pos, u32 size);
FSFile *func_020bccc8(FSArchive *p_arc) {
    OSIntrMode bak_psr = func_020ba034();
    if (FSi_IsArchiveCanceling(p_arc)) {
        FSFile *p, *q;
        p_arc->flag &= ~0x00000020;
        for (p = p_arc->list.next; p; p = q) {
            q = p->link.next;
            if (FS_IsCanceling(p)) {
                if (p_arc->list.next == p) {
                    p_arc->list.next = q;
                }
                func_020bc0a8(p, FS_RESULT_CANCELED);
                if (!q) {
                    q = p_arc->list.next;
                }
            }
        }
    }
    if (!FSi_IsArchiveSuspending(p_arc) && !FS_IsArchiveSuspended(p_arc)) {
        FSFile *p_file = p_arc->list.next;
        if (p_file != ((void *) 0)) {
            const BOOL is_start = !FSi_IsArchiveRunning(p_arc);
            if (is_start) {
                p_arc->flag |= 0x00000010;
            }
            (void) func_020ba048(bak_psr);
            if (is_start) {
                if ((p_arc->proc_flag & (1 << FS_COMMAND_ACTIVATE)) != 0) {
                    (void) ((*p_arc->proc)(p_file, FS_COMMAND_ACTIVATE));
                }
            }
            bak_psr = func_020ba034();
            p_file->stat |= 0x00000040;
            if (FS_IsFileSyncMode(p_file)) {
                func_020b8e8c(p_file->queue);
                (void) func_020ba048(bak_psr);
                return ((void *) 0);
            }
            (void) func_020ba048(bak_psr);
            return p_file;
        }
    }
    if (FSi_IsArchiveRunning(p_arc)) {
        p_arc->flag &= ~0x00000010;
        if (p_arc->proc_flag & (1 << FS_COMMAND_IDLE)) {
            FSFile tmp;
            func_020bd3c4(&tmp);
            tmp.arc = p_arc;
            (void) ((*p_arc->proc)(&tmp, FS_COMMAND_IDLE));
        }
    }
    if (FSi_IsArchiveSuspending(p_arc)) {
        p_arc->flag &= ~0x00000040;
        p_arc->flag |= 0x00000008;
        func_020b8e8c(&p_arc->stat_q);
    }
    (void) func_020ba048(bak_psr);
    return ((void *) 0);
}
extern void FSi_ExecuteAsyncCommand(FSFile *p_file);
extern BOOL FSi_ExecuteSyncCommand(FSFile *p_file);
extern BOOL FSi_SendCommand(FSFile *p_file, FSCommandType command);
extern void FS_InitArchive(FSArchive *p_arc);
extern FSArchive *const FS_FindArchive(const char *name, int name_len);
extern BOOL FS_RegisterArchiveName(FSArchive *p_arc, const char *name, int name_len);
extern void FS_ReleaseArchiveName(FSArchive *p_arc);
extern BOOL FS_LoadArchive(FSArchive *p_arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size,
                           FS_ARCHIVE_READ_FUNC read_func, FS_ARCHIVE_WRITE_FUNC write_func);
extern BOOL FS_UnloadArchive(FSArchive *p_arc);
extern u32 Fs_Archive_LoadFatFnt(FSArchive *p_arc, void *p_mem, u32 max_size);
extern void *FS_UnloadArchiveTables(FSArchive *p_arc);
extern BOOL FS_SuspendArchive(FSArchive *p_arc);
extern BOOL FS_ResumeArchive(FSArchive *p_arc);
extern void FS_SetArchiveProc(struct FSArchive *p_arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
extern void FS_NotifyArchiveAsyncEnd(FSArchive *p_arc, FSResult ret);
