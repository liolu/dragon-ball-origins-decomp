/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02009a9c from https://github.com/banatic/acww-decomp src/main/func_02009a9c.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    int a;
    int b;
    int c;
    int d;
} UnkStruct_02009a9c;
void func_020a9bac(UnkStruct_02009a9c *out, UnkStruct_02009a9c v) {
    out->a = v.a;
    out->b = v.b;
    out->c = v.c;
    out->d = v.d;
}
