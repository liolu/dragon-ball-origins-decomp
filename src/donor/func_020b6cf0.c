/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* G3CS_Direct0 from https://github.com/ntrtwl/NitroSDK libraries/gx/src/g3c.c (license: none), reused by tools/donor_match.py
 */
typedef unsigned char u8;
typedef unsigned long u32;
typedef int BOOL;
typedef struct {
    u8 *curr_cmd;
    u32 *curr_param;
    u32 *bottom;
    u32 length;
    BOOL param0_cmd_flg;
} GXDLInfo;
extern void func_020b6cf0(GXDLInfo *info, int op);
#pragma thumb off
void func_020b6cf0(GXDLInfo *info, int op) {
    ((void) 0);
    ((void) 0);

    if (op != 0x00 && ((u32) info->curr_cmd & 0x3) != 0) {
        info->param0_cmd_flg = 1;
    }

    *info->curr_cmd = (u8) (op);
}
