/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d8eec[];
extern u8 data_020d8f08[];
extern u8 data_020e7b54[];
extern u8 data_020e7b64[];

u32 data_020d8ef4[2] = {(u32) &data_020e7b64, (u32) &data_020d8eec};
u32 data_020d8efc[3] = {(u32) &data_020e7b54, (u32) &data_020d8f08, (u32) &data_020d8ef4};
