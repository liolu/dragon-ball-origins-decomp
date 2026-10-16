/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020758e4 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_arcplayer.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkSndSeqParam {
    u32 fileId;
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
} UnkSndSeqParam;
typedef struct UnkSndSeqData {
    u8 unk_00[0x18];
    u32 dataOffset;
} UnkSndSeqData;
extern int func_020b1318(int seqNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern int func_020b13fc(int bankNo, u32 flags, void *heap, BOOL addToArc, void **pData);
extern void *func_020af380(void *handle, int playerNo, int prio);
extern void func_020af418(void *seqPlayer);
extern void func_020af424(void *seqPlayer, const void *seq, u32 offset, const void *bank);
extern void *func_020af4c0(int playerNo, void *seqPlayer);
extern void func_020af050(void *handle, int volume);
extern void func_020af090(void *handle, int prio);
extern void func_020af0f0(void *handle, int seqNo);
extern BOOL func_020b1cb8(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, int seqNo);
BOOL func_020b1cb8(void *handle, int playerNo, int bankNo, int playerPrio, UnkSndSeqParam *param, int seqNo) {
    void *seqPlayer;
    void *heap;
    UnkSndSeqData *seq;
    void *bank;

    seqPlayer = func_020af380(handle, playerNo, playerPrio);
    if (seqPlayer == 0) {
        return 0;
    }

    heap = func_020af4c0(playerNo, seqPlayer);

    if (func_020b13fc(bankNo, 6, heap, 0, &bank) != 0) {
        func_020af418(seqPlayer);
        return 0;
    }

    if (func_020b1318(seqNo, 1, heap, 0, (void **) &seq) != 0) {
        func_020af418(seqPlayer);
        return 0;
    }

    func_020af424(seqPlayer, (u8 *) seq + seq->dataOffset, 0, bank);
    func_020af050(handle, param->volume);
    func_020af090(handle, param->channelPrio);
    func_020af0f0(handle, seqNo);
    return 1;
}
