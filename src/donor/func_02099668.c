/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* RandNextScaled from https://github.com/Yokimitsuro/khdays-decomp src/engine/RandNextScaled.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef struct {
    char pad0[0xc];
    long long seed;
    long long mult;
    long long inc;
} RngState;
extern RngState data_0215f2a4;
unsigned int func_02099668(unsigned int range) {
    RngState *s = &data_0215f2a4;
    unsigned int result;

    s->seed = s->mult * s->seed + s->inc;
    result  = (unsigned int) (s->seed >> 32);
    if (range != 0) {
        result = (unsigned int) ((unsigned long long) result * range >> 32);
    }
    return result;
}
