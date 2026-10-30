/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d8690[];
extern u8 func_0200a55c[];
extern u8 func_0200aa0c[];
extern u8 func_0200aa9c[];
extern u8 func_0200ab2c[];
extern u8 func_0200ab38[];
extern u8 func_0200c4ec[];
extern u8 func_0200c588[];
extern u8 func_0200c5d0[];
extern u8 func_0200c5d4[];
extern u8 func_0200c5dc[];
extern u8 func_0200d120[];
extern u8 func_0200d190[];
extern u8 func_0200d9d8[];
extern u8 func_0200e4d4[];
extern u8 func_0200f0f0[];
extern u8 func_02011400[];
extern u8 func_020114ac[];
extern u8 func_020114cc[];
extern u8 func_02011938[];
extern u8 func_02011940[];
extern u8 func_02011948[];
extern u8 func_02011950[];
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
extern u8 func_020121b0[];
extern u8 func_020121b8[];
extern u8 func_020121c0[];
extern u8 func_020121c8[];
extern u8 func_020121d0[];
extern u8 func_020121d8[];
extern u8 func_02012374[];
extern u8 func_0201237c[];
extern u8 func_02012384[];
extern u8 func_02012388[];
extern u8 func_0201239c[];
extern u8 func_020123b0[];
extern u8 func_020123b4[];
extern u8 func_020123b8[];
extern u8 func_020123c4[];
extern u8 func_020123ec[];
extern u8 func_020154cc[];
extern u8 func_0201719c[];
extern u8 func_020171a4[];
extern u8 func_02017238[];
extern u8 func_02017270[];
extern u8 func_020172c8[];
extern u8 func_02017308[];
extern u8 func_02017320[];
extern u8 func_0201733c[];
extern u8 func_0201739c[];
extern u8 func_020173b4[];
extern u8 func_02017474[];
extern u8 func_020174ec[];
extern u8 func_02017520[];
extern u8 func_02017578[];
extern u8 func_02017a88[];
extern u8 func_02017ad0[];
extern u8 func_02017b68[];
extern u8 func_02017d38[];
extern u8 func_02017d44[];
extern u8 func_02017ec8[];
extern u8 func_02017ee8[];
extern u8 func_02017ef8[];
extern u8 func_02017f08[];
extern u8 func_02017f1c[];
extern u8 func_02017f30[];
extern u8 func_02017f5c[];
extern u8 func_02018c34[];
extern u8 func_02018c90[];
extern u8 func_02019768[];
extern u8 func_020197bc[];
extern u8 func_02019890[];
extern u8 func_02019bcc[];
extern u8 func_02019c30[];
extern u8 func_02019c34[];
extern u8 func_02019d44[];
extern u8 func_02019eb0[];
extern u8 func_02019fbc[];
extern u8 func_02019fd8[];
extern u8 func_02019fdc[];
extern u8 func_02019fe0[];
extern u8 func_02019fe4[];
extern u8 func_02019fe8[];
extern u8 func_02019fec[];
extern u8 func_02019ff0[];
extern u8 func_02019ff8[];
extern u8 func_02019ffc[];
extern u8 func_0201a004[];
extern u8 func_0201a00c[];
extern u8 func_0201a038[];
extern u8 func_0201a03c[];
extern u8 func_0201a040[];
extern u8 func_0201a048[];
extern u8 func_0201a054[];
extern u8 func_0201a068[];
extern u8 func_0201a074[];
extern u8 func_0201a080[];
extern u8 func_0201a09c[];
extern u8 func_0201a0e4[];
extern u8 func_0201a0fc[];

u32 data_020d869c[7]   = {0x43433631, 0x61726168, 0x72657463, 0x79616C50, 0x00007265, 0x00000000, (u32) &data_020d8690};
u32 data_020d86b8[108] = {
    (u32) &func_0201a0e4, (u32) &func_0201a0fc, (u32) &func_0200aa0c, (u32) &func_0200aa9c, (u32) &func_0200ab2c,
    (u32) &func_0200ab38, (u32) &func_0200d120, (u32) &func_0200a55c, (u32) &func_02019fbc, (u32) &func_020123ec,
    (u32) &func_0200c4ec, (u32) &func_02019768, (u32) &func_020174ec, (u32) &func_0200d9d8, (u32) &func_0200c5d0,
    (u32) &func_0200c5dc, (u32) &func_0200c5d4, (u32) &func_0201a09c, (u32) &func_0201a080, (u32) &func_0201a074,
    (u32) &func_0201a068, (u32) &func_0201a054, (u32) &func_02011400, (u32) &func_0200c588, (u32) &func_02017520,
    (u32) &func_0200e4d4, (u32) &func_02017474, (u32) &func_0200d190, (u32) &func_020123c4, (u32) &func_020123b8,
    (u32) &func_020123b4, (u32) &func_020123b0, (u32) &func_020171a4, (u32) &func_0201719c, (u32) &func_0201a040,
    (u32) &func_02017d38, (u32) &func_02017a88, (u32) &func_0201a048, (u32) &func_0201239c, (u32) &func_02017270,
    (u32) &func_020172c8, (u32) &func_02017320, (u32) &func_0201733c, (u32) &func_0201739c, (u32) &func_02011938,
    (u32) &func_02011940, (u32) &func_02011948, (u32) &func_02011950, (u32) &func_02017578, (u32) &func_02017ad0,
    (u32) &func_02017b68, (u32) &func_02017d44, (u32) &func_02017ec8, (u32) &func_02017ee8, (u32) &func_02017ef8,
    (u32) &func_02012160, (u32) &func_02012168, (u32) &func_02012170, (u32) &func_02012178, (u32) &func_02012180,
    (u32) &func_02012188, (u32) &func_02012190, (u32) &func_02017f08, (u32) &func_02017f1c, (u32) &func_02017f30,
    (u32) &func_02012198, (u32) &func_020121a0, (u32) &func_020121a8, (u32) &func_020121b8, (u32) &func_020121c0,
    (u32) &func_020121c8, (u32) &func_020121d0, (u32) &func_020121d8, (u32) &func_02017308, (u32) &func_02017f5c,
    (u32) &func_02012388, (u32) &func_02012384, (u32) &func_0201237c, (u32) &func_0200f0f0, (u32) &func_020173b4,
    (u32) &func_02017238, (u32) &func_02018c34, (u32) &func_02018c90, (u32) &func_02019bcc, (u32) &func_02019c34,
    (u32) &func_020114ac, (u32) &func_020114cc, (u32) &func_02019890, (u32) &func_02019d44, (u32) &func_02019eb0,
    (u32) &func_020121b0, (u32) &func_02012374, (u32) &func_020154cc, (u32) &func_0201a03c, (u32) &func_0201a038,
    (u32) &func_0201a00c, (u32) &func_020197bc, (u32) &func_0201a004, (u32) &func_02019ffc, (u32) &func_02019ff8,
    (u32) &func_02019ff0, (u32) &func_02019fec, (u32) &func_02019fe8, (u32) &func_02019fe4, (u32) &func_02019fe0,
    (u32) &func_02019c30, (u32) &func_02019fdc, (u32) &func_02019fd8};
