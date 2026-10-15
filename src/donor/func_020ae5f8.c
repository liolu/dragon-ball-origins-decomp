/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0206820c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/fnd/fnd_expheap.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
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
extern void func_020ba6f0(u32 value, void *dest, u32 size);
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
typedef struct UnkMemRegion {
    void *unk_00;
    void *unk_04;
} UnkMemRegion;
static inline void SetAllocDirForMBlock(UnkExpMBlock *block, u16 dir) {
    do {
        (block->unk_02) &= ~(((1 << (1)) - 1) << (15));
        (block->unk_02) |= ((dir) & ((1 << (1)) - 1)) << (15);
    } while (0);
}
static inline void SetAlignmentForMBlock(UnkExpMBlock *block, u16 alignment) {
    do {
        (block->unk_02) &= ~(((1 << (7)) - 1) << (8));
        (block->unk_02) |= ((alignment) & ((1 << (7)) - 1)) << (8);
    } while (0);
}
static inline void SetGroupIDForMBlock(UnkExpMBlock *block, u8 id) {
    do {
        (block->unk_02) &= ~(((1 << (8)) - 1) << (0));
        (block->unk_02) |= ((id) & ((1 << (8)) - 1)) << (0);
    } while (0);
}
static inline void FillAllocMemory(UnkFndHeapHead *heap, void *address, u32 size) {
    if ((u16) (((heap->unk_20) >> (0)) & ((1 << (8)) - 1)) & 1) {
        func_020ba6f0(0, address, size);
    }
}
void func_020ae4d4(UnkMemRegion *region, UnkExpMBlock *block);
UnkExpMBlock *func_020ae500(UnkExpMBlockList *list, UnkExpMBlock *block);
UnkExpMBlock *func_020ae528(UnkExpMBlockList *list, UnkExpMBlock *block, UnkExpMBlock *prev);
UnkExpMBlock *func_020ae558(UnkMemRegion *region, u16 signature);
void *func_020ae5f8(UnkExpHeapHead *exp, UnkExpMBlock *block, void *mem, u32 size, u16 direction) {
    UnkMemRegion freeRgnT;
    UnkMemRegion freeRgnB;
    UnkExpMBlock *prev;

    func_020ae4d4(&freeRgnT, block);
    freeRgnB.unk_04 = freeRgnT.unk_04;
    freeRgnB.unk_00 = (void *) (size + (u32) mem);
    freeRgnT.unk_04 = (void *) ((u32) mem - sizeof(UnkExpMBlock));

    prev = func_020ae500(&exp->unk_00, block);

    if ((u32) freeRgnT.unk_04 - (u32) freeRgnT.unk_00 < sizeof(UnkExpMBlock) + 4) {
        freeRgnT.unk_04 = freeRgnT.unk_00;
    } else {
        prev = func_020ae528(&exp->unk_00, func_020ae558(&freeRgnT, 0x4652), prev);
    }

    if ((u32) freeRgnB.unk_04 - (u32) freeRgnB.unk_00 < sizeof(UnkExpMBlock) + 4) {
        freeRgnB.unk_00 = freeRgnB.unk_04;
    } else {
        func_020ae528(&exp->unk_00, func_020ae558(&freeRgnB, 0x4652), prev);
    }

    FillAllocMemory(((UnkFndHeapHead *) ((u32) (exp) - sizeof(UnkFndHeapHead))), freeRgnT.unk_04,
                    (u32) freeRgnB.unk_00 - (u32) freeRgnT.unk_04);

    {
        UnkMemRegion region;
        UnkExpMBlock *newBlock;

        region.unk_00 = (void *) ((u32) mem - sizeof(UnkExpMBlock));
        region.unk_04 = freeRgnB.unk_00;
        newBlock      = func_020ae558(&region, 0x5544);
        SetAllocDirForMBlock(newBlock, direction);
        SetAlignmentForMBlock(newBlock, (u16) ((u32) newBlock - (u32) freeRgnT.unk_04));
        SetGroupIDForMBlock(newBlock, exp->unk_10);
        func_020ae528(&exp->unk_08, newBlock, exp->unk_08.unk_04);
    }
    return mem;
}
