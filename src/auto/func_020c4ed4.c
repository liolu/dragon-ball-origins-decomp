/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020c4ed4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/Runtime/src/console_io.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long __file_handle;
extern int func_020c4ed4(__file_handle handle, unsigned char *buffer, int *count, void *ref);
// clang-format off
asm void func_020c4e4c(register void* c);
// clang-format on
int func_020c4ed4(__file_handle handle, unsigned char *buffer, int *count, void *ref) {
    unsigned long i, n;

    for (i = 0, n = *count; i < n; i++) {
        func_020c4e4c(&buffer[i]);
    }

    return 0;
}
