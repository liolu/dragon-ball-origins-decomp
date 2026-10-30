/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d51b4[];
extern u8 data_020e679c[];
extern u8 data_020e6934[];
extern u8 data_020e7b44[];
extern u8 func_02003ef0[];
extern u8 func_02003ef4[];
extern u8 func_020871a4[];
extern u8 func_02087390[];
extern u8 func_02087564[];
extern u8 func_02087574[];
extern u8 func_02088000[];
extern u8 func_020897f0[];
extern u8 func_02089860[];
extern u8 func_020898d0[];
extern u8 func_020898d8[];
extern u8 func_020898e0[];
extern u8 func_020898e4[];

u32 data_020e6964[4]  = {(u32) &func_020898e4, (u32) &func_020898e0, (u32) &func_020898d8, (u32) &func_020898d0};
u32 data_020e6974[10] = {(u32) &data_020e7b44, (u32) &data_020e6934, 0x00000000, 0x00000002, (u32) &data_020d51b4,
                         0x00000002,           (u32) &data_020e679c, 0x00000402, 0x00000000, (u32) &data_020e6974};
u32 data_020e699c[11] = {(u32) &func_02089860, (u32) &func_020897f0, (u32) &func_02088000, (u32) &func_02003ef4,
                         (u32) &func_02003ef0, (u32) &func_02087390, (u32) &func_02087564, (u32) &func_02087574,
                         (u32) &func_020871a4, 0xFFFFFFFC,           (u32) &data_020e6974};
