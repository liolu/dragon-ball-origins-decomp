/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e7790[];
extern u8 data_020e77a8[];
extern u8 data_020e77c0[];
extern u8 data_020e77fc[];

u32 data_020e7740[2] = {0x05030403, 0x00000003};
u32 data_020e7748[3] = {0x00020100, 0x03000302, 0x02030101};
u32 data_020e7754[5] = {(u32) &data_020e7748, (u32) &data_020e7790, (u32) &data_020e77a8, (u32) &data_020e77fc,
                        (u32) &data_020e77c0};
