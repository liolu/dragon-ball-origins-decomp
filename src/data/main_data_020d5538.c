/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d5530[];
extern u8 data_020d554c[];
extern u8 data_020e7b54[];
extern u8 data_020e7b64[];

u32 data_020d5538[2] = {(u32) &data_020e7b64, (u32) &data_020d5530};
u32 data_020d5540[3] = {(u32) &data_020e7b54, (u32) &data_020d554c, (u32) &data_020d5538};
