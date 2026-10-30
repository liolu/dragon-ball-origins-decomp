/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d8300[];
extern u8 func_0200aa0c[];
extern u8 func_0200aa9c[];
extern u8 func_0200ab2c[];
extern u8 func_0200ac64[];
extern u8 func_0200c4ec[];
extern u8 func_0200c588[];
extern u8 func_0200c590[];
extern u8 func_0200d120[];
extern u8 func_0200d190[];
extern u8 func_0200d9d8[];
extern u8 func_0200df40[];
extern u8 func_0200e4cc[];
extern u8 func_0200e72c[];
extern u8 func_0200f0f0[];
extern u8 func_0200f850[];
extern u8 func_02010c14[];
extern u8 func_02010c78[];
extern u8 func_02011400[];
extern u8 func_0201140c[];
extern u8 func_02011410[];
extern u8 func_02011418[];
extern u8 func_0201141c[];
extern u8 func_0201145c[];
extern u8 func_020114ac[];
extern u8 func_020114cc[];
extern u8 func_02011910[];
extern u8 func_02011918[];
extern u8 func_02011920[];
extern u8 func_02011928[];
extern u8 func_02011930[];
extern u8 func_02011938[];
extern u8 func_02011940[];
extern u8 func_02011948[];
extern u8 func_02011950[];
extern u8 func_02011af4[];
extern u8 func_02011afc[];
extern u8 func_02011b04[];
extern u8 func_02011b0c[];
extern u8 func_02011f98[];
extern u8 func_02011fa0[];
extern u8 func_02011fa8[];
extern u8 func_02012148[];
extern u8 func_02012150[];
extern u8 func_02012158[];
extern u8 func_02012160[];
extern u8 func_02012168[];
extern u8 func_02012170[];
extern u8 func_02012178[];
extern u8 func_02012180[];
extern u8 func_02012188[];
extern u8 func_02012190[];
extern u8 func_02012198[];
extern u8 func_020121a0[];
extern u8 func_020121a8[];
extern u8 func_020121b8[];
extern u8 func_020121c0[];
extern u8 func_020121c8[];
extern u8 func_020121d0[];
extern u8 func_020121d8[];
extern u8 func_0201237c[];
extern u8 func_02012384[];
extern u8 func_02012388[];
extern u8 func_0201238c[];
extern u8 func_02012394[];
extern u8 func_0201239c[];
extern u8 func_020123a0[];
extern u8 func_020123a4[];
extern u8 func_020123ac[];
extern u8 func_020123b0[];
extern u8 func_020123b4[];
extern u8 func_020123b8[];
extern u8 func_020123c4[];
extern u8 func_020123d0[];
extern u8 func_020123d4[];
extern u8 func_020123d8[];
extern u8 func_020123e0[];
extern u8 func_020123e4[];
extern u8 func_020123e8[];
extern u8 func_020123f4[];
extern u8 func_02012440[];
extern u8 func_02012484[];
extern u8 func_0201298c[];
extern u8 func_02012cd4[];
extern u8 func_02012d08[];
extern u8 func_02013048[];
extern u8 func_020132b0[];
extern u8 func_02014068[];
extern u8 func_02014248[];
extern u8 func_02014268[];
extern u8 func_020142ac[];
extern u8 func_02014334[];
extern u8 func_0201433c[];
extern u8 func_02014354[];

u32 data_020d830c[7]  = {0x43433531, 0x61726168, 0x72657463, 0x6D656E45, 0x00000079, 0x00000000, (u32) &data_020d8300};
u32 data_020d8328[93] = {
    (u32) &func_02014354, (u32) &func_02014248, (u32) &func_0200aa0c, (u32) &func_0200aa9c, (u32) &func_0200ab2c,
    (u32) &func_0201298c, (u32) &func_0200d120, (u32) &func_02012cd4, (u32) &func_0200ac64, (u32) &func_02014334,
    (u32) &func_0200c4ec, (u32) &func_0200c590, (u32) &func_020123e8, (u32) &func_0200d9d8, (u32) &func_020142ac,
    (u32) &func_0201433c, (u32) &func_02014268, (u32) &func_020123e4, (u32) &func_020123e0, (u32) &func_020123d8,
    (u32) &func_020123d4, (u32) &func_020123d0, (u32) &func_02011400, (u32) &func_0200c588, (u32) &func_0200df40,
    (u32) &func_02012484, (u32) &func_0200e72c, (u32) &func_0200d190, (u32) &func_020123c4, (u32) &func_020123b8,
    (u32) &func_020123b4, (u32) &func_020123b0, (u32) &func_02011418, (u32) &func_02011410, (u32) &func_020123ac,
    (u32) &func_020123a4, (u32) &func_020123a0, (u32) &func_0201140c, (u32) &func_0201239c, (u32) &func_02011928,
    (u32) &func_02011930, (u32) &func_02011910, (u32) &func_02011918, (u32) &func_02011920, (u32) &func_02011938,
    (u32) &func_02011940, (u32) &func_02011948, (u32) &func_02011950, (u32) &func_02011af4, (u32) &func_02011b04,
    (u32) &func_02011afc, (u32) &func_02011b0c, (u32) &func_02011fa8, (u32) &func_02011f98, (u32) &func_02011fa0,
    (u32) &func_02012160, (u32) &func_02012168, (u32) &func_02012170, (u32) &func_02012178, (u32) &func_02012180,
    (u32) &func_02012188, (u32) &func_02012190, (u32) &func_02012150, (u32) &func_02012158, (u32) &func_02012148,
    (u32) &func_02012198, (u32) &func_020121a0, (u32) &func_020121a8, (u32) &func_020121b8, (u32) &func_020121c0,
    (u32) &func_020121c8, (u32) &func_020121d0, (u32) &func_020121d8, (u32) &func_0201238c, (u32) &func_02012394,
    (u32) &func_02012388, (u32) &func_02012384, (u32) &func_0201237c, (u32) &func_0200f0f0, (u32) &func_0200f850,
    (u32) &func_02012440, (u32) &func_02010c14, (u32) &func_02010c78, (u32) &func_0201141c, (u32) &func_0201145c,
    (u32) &func_020114ac, (u32) &func_020114cc, (u32) &func_02012d08, (u32) &func_02013048, (u32) &func_020123f4,
    (u32) &func_020132b0, (u32) &func_02014068, (u32) &func_0200e4cc};
