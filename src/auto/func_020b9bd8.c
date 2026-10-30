/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_InstallExceptionVector from https://github.com/Yokimitsuro/khdays-decomp
 * libs/nitro/os/calls/OSi_InstallExceptionVector.c (license: CC0-1.0), reused by tools/donor_match.py */
extern void func_020b9c48(void);
extern char data_0216d148[];
void func_020b9bd8(void) {
    unsigned int v = *(volatile unsigned int *) 0x027FFD9Cu;
    if (v >= 0x02600000u && v < 0x02800000u) {
        *(unsigned int *) data_0216d148 = v;
    } else {
        *(unsigned int *) data_0216d148 = 0;
    }
    if (*(unsigned int *) data_0216d148 == 0) {
        *(volatile void **) 0x027FFD9Cu = (void *) func_020b9c48;
        {
            volatile char *base                = (volatile char *) 0x027E3000u;
            *(volatile void **) (base + 0xFDC) = (void *) func_020b9c48;
        }
    }
    *(unsigned int *) (data_0216d148 + 8) = 0;
}
