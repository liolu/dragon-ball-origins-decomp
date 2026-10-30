/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207c2d0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/std/std_string.c (license: none), reused
 * by tools/donor_match.py */
char *func_020c367c(const char *str, const char *pattern) {
    int i;
    int j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; pattern[j] != '\0' && str[i + j] == pattern[j]; j++) {
        }
        if (pattern[j] == '\0') {
            return (char *) str + i;
        }
    }
    return 0;
}
