/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e4508[];
extern u8 data_020e6518[];
extern u8 data_020e6534[];
extern u8 data_020e7b54[];

u32 data_020e64d0[3] = {(u32) &data_020e7b54, (u32) &data_020e6534, (u32) &data_020e4508};
u32 data_020e64dc[5] = {(u32) &data_020e7b54, (u32) &data_020e6518, (u32) &data_020e4508, 0x00000000, (u32) &data_020e64d0};
