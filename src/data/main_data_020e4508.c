/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e459c[];
extern u8 data_020e45f8[];
extern u8 data_020e7b54[];
extern u8 data_020e7b64[];

u32 data_020e4508[2] = {(u32) &data_020e7b64, (u32) &data_020e459c};
u32 data_020e4510[3] = {(u32) &data_020e7b54, (u32) &data_020e45f8, (u32) &data_020e4508};
