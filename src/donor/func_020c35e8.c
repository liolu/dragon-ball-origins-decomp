/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* STD_CopyString from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/std/std_string.c (license: none), reused
 * by tools/donor_match.py */
char *func_020c35e8(char *dst, const char *src) {
    char *ret = dst;

    while (*src != '\0') {
        *dst++ = *src++;
    }
    *dst = '\0';
    return ret;
}
