/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02002e64 from projets/farm-frenzy/src/donor/func_02002e64.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef volatile u32 vu32;
typedef vu32 REGType32v;
typedef int BOOL;
typedef s32 fx32;
typedef union {
    struct {
        fx32 _00, _01, _02, _03;
        fx32 _10, _11, _12, _13;
        fx32 _20, _21, _22, _23;
        fx32 _30, _31, _32, _33;
    };
    fx32 m[4][4];
    fx32 a[16];
} MtxFx44;
typedef enum {
    GX_MTXMODE_PROJECTION      = 0,
    GX_MTXMODE_POSITION        = 1,
    GX_MTXMODE_POSITION_VECTOR = 2,
    GX_MTXMODE_TEXTURE         = 3
} GXMtxMode;
extern void func_020b4b1c(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, MtxFx44 *mtx);
extern void func_020b718c(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, BOOL draw, MtxFx44 *mtx);
extern void G3_MtxMode(GXMtxMode mode);
extern void func_020b6ea8(const MtxFx44 *m);
static inline void G3_MtxMode(GXMtxMode mode) {
    ((void) 0);
    (*(REGType32v *) (0x04000000 + 0x440)) = ((u32) ((mode) << 0));
}
void func_020b718c(fx32 t, fx32 b, fx32 l, fx32 r, fx32 n, fx32 f, fx32 scaleW, BOOL draw, MtxFx44 *mtx) {
    MtxFx44 tmp[1];

    if (mtx == 0) {
        mtx = tmp;
    }

    func_020b4b1c(t, b, l, r, n, f, scaleW, mtx);

    if (draw) {
        G3_MtxMode(GX_MTXMODE_PROJECTION);
        func_020b6ea8(mtx);
    }
}
