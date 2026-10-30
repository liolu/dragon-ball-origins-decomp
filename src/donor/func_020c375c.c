/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* STD_CompareNString from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/std/std_string.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
int func_020c375c(const char *s1, const char *s2, int n) {
    const u8 *p1 = (const u8 *) s1;
    const u8 *p2 = (const u8 *) s2;

    if (n != 0) {
        int i;
        for (i = 0; i < n; i++) {
            if (p1[i] != p2[i]) {
                return p1[i] - p2[i];
            }
        }
    }
    return 0;
}
