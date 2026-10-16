/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020b9344 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_020b9344.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020ba034(void);
extern void func_020ba048(int state);
extern void func_020b8e3c(void *queue);
extern void func_020b8e8c(void *queue);
extern long long func_020c4a58(int a, int b);
int func_020b9344(char *q, void *msg, int flags) {
    int enabled = func_020ba034();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_020ba048(enabled);
            return 0;
        }
        func_020b8e3c(q);
    }
    *(int *) (q + 0x18) = (int) (func_020c4a58(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots               = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    func_020b8e8c(q + 8);
    func_020ba048(enabled);
    return 1;
}
