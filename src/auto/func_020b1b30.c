/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02041a78 from projets/spider-man-web-of-shadows/src/donor/func_02041a78.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndWaveArc UnkSndWaveArc;
typedef struct UnkSndWaveArcLink {
    UnkSndWaveArc *waveArc;
    struct UnkSndWaveArcLink *next;
} UnkSndWaveArcLink;
struct UnkSndWaveArc {
    u8 unk_00[8];
    u32 fileSize;
    u8 unk_0c[4];
    u8 blockHeader[8];
    UnkSndWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
};
typedef struct UnkSndInstPos {
    u32 prgNo;
    u32 index;
} UnkSndInstPos;
typedef struct UnkSndInstData {
    u8 type;
    u8 unk_01;
    u16 waveNo;
    u16 waveArcNo;
    u8 unk_06[6];
} UnkSndInstData;
extern UnkSndInstPos func_020bbb44(void);
extern BOOL func_020bbb64(void *bank, UnkSndInstData *inst, UnkSndInstPos *pos);
extern BOOL func_020b1a68(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
extern BOOL func_020b1b30(UnkSndWaveArc *waveArc, void *bank, int index, u32 fileId, void *heap);
extern BOOL func_020b1a68(UnkSndWaveArc *waveArc, u32 index, u32 fileId, void *heap);
BOOL func_020b1b30(UnkSndWaveArc *waveArc, void *bank, int index, u32 fileId, void *heap) {
    UnkSndInstPos pos = func_020bbb44();
    UnkSndInstData inst;

    if (bank == 0) {
        return 0;
    }

    while (func_020bbb64(bank, &inst, &pos)) {
        if (inst.type == 1 && index == inst.waveArcNo) {
            if (!func_020b1a68(waveArc, inst.waveNo, fileId, heap)) {
                return 0;
            }
        }
    }
    return 1;
}
