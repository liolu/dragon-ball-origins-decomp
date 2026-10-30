/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_Init from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PM_Init.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
extern void func_020bbd8c(void);
extern int func_020bbee4(int fifoNo, int kind);
extern void func_020bbe98(int fifoNo, void (*cb)(int, unsigned int));
extern void func_020b93e0(void *mutex);
extern void func_020be550(int fifoNo, unsigned int data);
extern struct {
    unsigned short initialized;
    char _2[0xe];
    int field_10;
    char _14[0x8];
    int field_1c;
    int field_20;
} data_0216eeec;
extern unsigned short data_0216ef30[5][4];
extern int data_0216ef18;
void func_020be4ac(void) {
    int i;

    if (data_0216eeec.initialized != 0) {
        return;
    }

    data_0216eeec.initialized = 1;
    data_0216eeec.field_1c    = 0;
    data_0216eeec.field_20    = 0;
    func_020bbd8c();
    while (!func_020bbee4(8, 1)) {
    }
    func_020bbe98(8, func_020be550);
    for (i = 0; i < 5; i++) {
        data_0216ef30[i][0] = 0;
    }
    func_020b93e0(&data_0216ef18);
    data_0216eeec.field_10 = *(int *) 0x027ffc3c;
}
