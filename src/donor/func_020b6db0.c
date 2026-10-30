/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3C_Vtx from https://github.com/ntrtwl/NitroSDK libraries/gx/src/g3c.c (license: none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed short int s16;
typedef int BOOL;
typedef s16 fx16;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void func_020b6d30(GXDLInfo *info, int op, u32 param0, u32 param1);
extern void G3CS_Vtx(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
extern void func_020b6d54(GXDLInfo *info, int n);
extern void func_020b6db0(GXDLInfo *info, fx16 x, fx16 y, fx16 z);
static inline void G3CS_Vtx(GXDLInfo *info, fx16 x, fx16 y, fx16 z) {
    func_020b6d30(info, 0x23, ((u32) ((u32) (u16) (x) | ((u32) (u16) (y) << 16))), (u32) (u16) z);
}
void func_020b6d30(GXDLInfo *info, int op, u32 param0, u32 param1);
void func_020b6d54(GXDLInfo *info, int n);
void func_020b6db0(GXDLInfo *info, fx16 x, fx16 y, fx16 z) {
    G3CS_Vtx(info, x, y, z);
    func_020b6d54(info, 2);
}
