/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e4508[];
extern u8 data_020e48ec[];
extern u8 data_020e4908[];
extern u8 data_020e7b54[];

u32 data_020e48a4[3] = {(u32) &data_020e7b54, (u32) &data_020e48ec, (u32) &data_020e4508};
u32 data_020e48b0[5] = {(u32) &data_020e7b54, (u32) &data_020e4908, (u32) &data_020e4508, 0x00000000, (u32) &data_020e48a4};
