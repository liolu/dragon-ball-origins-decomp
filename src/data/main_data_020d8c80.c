/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d8c9c[];
extern u8 data_020e7b64[];

#pragma explicit_zero_data on
u32 data_020d8c80[1] = {0};
u32 data_020d8c84[4] = {(u32) &data_020e7b64, (u32) &data_020d8c9c, 0x00000000, (u32) &data_020d8c84};
