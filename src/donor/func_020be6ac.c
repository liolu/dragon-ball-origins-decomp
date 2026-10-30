/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* PM_SendUtilityCommandAsync from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/spi/calls/PM_SendUtilityCommandAsync.c (license: CC0-1.0), reused by tools/donor_match.py */
extern int func_020be3e8(void);
extern void func_020beaa4(unsigned int cmd);
struct CC {
    char _0[0x20];
    int field_20;
    int field_24;
};
extern struct CC data_0216eeec;
int func_020be6ac(unsigned int arg0, int arg1, int arg2) {
    if (func_020be3e8() == 0) {
        return 1;
    }
    data_0216eeec.field_20 = arg1;
    data_0216eeec.field_24 = arg2;
    func_020beaa4(((arg0 >> 16) & 0xff) | 0x02006300);
    func_020beaa4(0x01010000 | (arg0 & 0xffff));
    return 0;
}
