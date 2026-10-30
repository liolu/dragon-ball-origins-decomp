/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PMi_WaitBusy from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/spi/calls/PMi_WaitBusy.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020ba08c(void);
extern void func_020bbf90(void);
extern struct {
    char _0[0x1c];
    int field_1c;
} data_0216eeec;
extern int data_0216ef08;
void func_020be424(void) {
    int *p = &data_0216ef08;
    if (data_0216eeec.field_1c == 0) {
        return;
    }
    do {
        if (func_020ba08c() == 0x80) {
            func_020bbf90();
        }
    } while (*p != 0);
}
