/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02068198 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_expheap.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
extern void func_020ae440(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option);
typedef struct UnkExpMBlock {
    u16 unk_00;
    u16 unk_02;
    u32 unk_04;
    struct UnkExpMBlock *unk_08;
    struct UnkExpMBlock *unk_0c;
} UnkExpMBlock;
typedef struct UnkExpMBlockList {
    UnkExpMBlock *unk_00;
    UnkExpMBlock *unk_04;
} UnkExpMBlockList;
typedef struct UnkExpHeapHead {
    UnkExpMBlockList unk_00;
    UnkExpMBlockList unk_08;
    u16 unk_10;
    u16 unk_12;
} UnkExpHeapHead;
typedef struct UnkExpHeap {
    UnkFndHeapHead unk_00;
    UnkExpHeapHead unk_24;
} UnkExpHeap;
typedef struct UnkMemRegion {
    void *unk_00;
    void *unk_04;
} UnkMemRegion;
UnkExpMBlock *func_020ae558(UnkMemRegion *region, u16 signature);
UnkExpHeap *func_020ae584(void *start, void *end, u16 option) {
    UnkExpHeap *heap    = (UnkExpHeap *) start;
    UnkExpHeapHead *exp = &heap->unk_24;

    func_020ae440(&heap->unk_00, 0x45585048, (void *) ((u32) heap + sizeof(UnkExpHeap)), end, option);
    exp->unk_10 = 0;
    exp->unk_12 = 0;
    do {
        (exp->unk_12) &= ~(((1 << (1)) - 1) << (0));
        (exp->unk_12) |= ((0) & ((1 << (1)) - 1)) << (0);
    } while (0);
    {
        UnkMemRegion region;
        UnkExpMBlock *block;

        region.unk_00      = heap->unk_00.unk_18;
        region.unk_04      = heap->unk_00.unk_1c;
        block              = func_020ae558(&region, 0x4652);
        exp->unk_00.unk_00 = block;
        exp->unk_00.unk_04 = block;
        exp->unk_08.unk_00 = 0;
        exp->unk_08.unk_04 = 0;
    }
    return heap;
}
