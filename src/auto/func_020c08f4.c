#include "m2c.h"
typedef struct {
    u32 pad0[7];
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    u32 pad2c[3];
    u32 callback;
    u32 callback_arg;
    u8 pad40[0xd4];
    u32 flag;
} CardCommon;
typedef struct {
    u32 pad[8];
    void *read_func;
} RomStat;
extern CardCommon data_0216f020;
extern RomStat data_0216f640;
void func_020bf8c4(void);
void *func_020c0964(void);
void func_020c0b48(void);
void func_020c08f4(void) {
    CardCommon *const p = &data_0216f020;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        data_0216f640.pad[0]     = 0;
        func_020bf8c4();
        data_0216f640.read_func = func_020c0964();
        func_020c0b48();
    }
}
