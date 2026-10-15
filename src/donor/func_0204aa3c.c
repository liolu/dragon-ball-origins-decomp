/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* DmaTasks_StartPair from https://github.com/sturmds/advance-wars-dual-strike-decomp src/game/main/dma_tasks_start_pair.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned short u16;
extern void func_0204aaf4(const void *src1, const void *src2, volatile void *dest1, volatile void *dest2, u16 unk34, u16 unk36,
                          void (*callback1)(void), void (*callback2)(void));
void func_0204aa3c(const void *src1, const void *src2, volatile void *dest1, volatile void *dest2, void (*callback1)(void),
                   void (*callback2)(void)) {
    func_0204aaf4(src1, src2, dest1, dest2, 0, 0, callback1, callback2);
}
