/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020ba034(void);
extern void func_020ba048(int state);
extern void func_020ba820(void *dst, int value, int size);
extern void func_020b8e3c(void *queue);
extern void func_020b8d2c(void);
extern char data_02170528;
typedef struct {
    int (*run)(void *);
    void (*done)(void *);
    int result;
    int rest[6];
} Ov_CardJob;

/* JobQueue_WorkerLoop from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/mi/calls/JobQueue_WorkerLoop.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
void func_020c34b4(char *ctx) {
    Ov_CardJob job;
    void (*done)(void *);
    int enabled;
    for (;;) {
        func_020ba820(&job, 0, 0x24);
        enabled = func_020ba034();
        while (*(char *volatile *) (ctx + 0xc0) == 0) {
            func_020b8e3c(0);
        }
        job = *(Ov_CardJob *) *(char *volatile *) (ctx + 0xc0);
        func_020ba048(enabled);
        if (job.run != 0) {
            job.result = job.run(&job);
        }
        enabled                           = func_020ba034();
        done                              = job.done;
        *((char *) &data_02170528 + 0x26) = 0;
        if (done != 0) {
            done(&job);
        }
        if (*(int *) &data_02170528 != 0) {
            *(char *volatile *) (ctx + 0xc0) = 0;
            func_020ba048(enabled);
        } else {
            func_020b8d2c();
            return;
        }
    }
}
