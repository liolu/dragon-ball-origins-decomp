/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* STD_CompareString from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/std/std_string.c (license: none),
 * reused by tools/donor_match.py */
int func_020c3730(const char *s1, const char *s2) {
    while (*s1 == *s2 && *s1 != '\0') {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}
