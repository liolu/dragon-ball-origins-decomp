/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020d8a64[];
extern u8 func_0200aa0c[];
extern u8 func_0200aa9c[];
extern u8 func_0200ab2c[];
extern u8 func_0200ab38[];
extern u8 func_0200c4ec[];
extern u8 func_0200c5d0[];
extern u8 func_0200c5d4[];
extern u8 func_0200c5dc[];
extern u8 func_0200d120[];
extern u8 func_0200e4d4[];
extern u8 func_0201237c[];
extern u8 func_02012384[];
extern u8 func_02012388[];
extern u8 func_0201239c[];
extern u8 func_020123ec[];
extern u8 func_0201719c[];
extern u8 func_020171a4[];
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
extern u8 func_02019768[];
extern u8 func_02019890[];
extern u8 func_02019d44[];
extern u8 func_02019eb0[];
extern u8 func_02019fbc[];
extern u8 func_0201a040[];
extern u8 func_0201a048[];
extern u8 func_0201a054[];
extern u8 func_0201a068[];
extern u8 func_0201a074[];
extern u8 func_0201a080[];
extern u8 func_0201a09c[];
extern u8 func_0201a1ac[];
extern u8 func_0201a208[];
extern u8 func_0201a210[];
extern u8 func_0201a530[];
extern u8 func_0201a538[];
extern u8 func_0201a64c[];
extern u8 func_0201a898[];
extern u8 func_0201b9f8[];
extern u8 func_0201bc30[];
extern u8 func_0201bd28[];
extern u8 func_0201c010[];
extern u8 func_0201c0c4[];
extern u8 func_0201c0f4[];
extern u8 func_0201c1f4[];
extern u8 func_0201c210[];
extern u8 func_0201c228[];
extern u8 func_0201c240[];
extern u8 func_0201c258[];
extern u8 func_0201c27c[];
extern u8 func_0201c538[];
extern u8 func_0201c648[];
extern u8 func_0201c748[];
extern u8 func_0201c868[];
extern u8 func_0201c968[];
extern u8 func_0201ca6c[];
extern u8 func_0201ca84[];
extern u8 func_0201ca94[];
extern u8 func_0201cba4[];
extern u8 func_0201cf9c[];
extern u8 func_0201cfa4[];
extern u8 func_0201de58[];
extern u8 func_0201df08[];
extern u8 func_0201df24[];
extern u8 func_0201df40[];
extern u8 func_0201df5c[];
extern u8 func_0201df90[];
extern u8 func_0201e1d0[];
extern u8 func_0201e39c[];
extern u8 func_0201e878[];
extern u8 func_02020220[];
extern u8 func_02020244[];
extern u8 func_020202c8[];
extern u8 func_020202ec[];
extern u8 func_02020364[];
extern u8 func_020203ec[];
extern u8 func_02020400[];
extern u8 func_02020434[];
extern u8 func_02020480[];
extern u8 func_020204ac[];
extern u8 func_020204b4[];
extern u8 func_020204bc[];
extern u8 func_020204ec[];
extern u8 func_02020510[];
extern u8 func_02020530[];
extern u8 func_02020fb4[];
extern u8 func_02020fd4[];

u32 data_020d8a70[10]  = {0x43433632, 0x61726168, 0x72657463, 0x79616C50, 0x6F477265,
                          0x7554756B, 0x656C7472, 0x00000000, 0x00000000, (u32) &data_020d8a64};
u32 data_020d8a98[108] = {
    (u32) &func_02020fd4, (u32) &func_02020fb4, (u32) &func_0200aa0c, (u32) &func_0200aa9c, (u32) &func_0200ab2c,
    (u32) &func_0200ab38, (u32) &func_0200d120, (u32) &func_0201a64c, (u32) &func_02019fbc, (u32) &func_020123ec,
    (u32) &func_0200c4ec, (u32) &func_02019768, (u32) &func_020174ec, (u32) &func_020203ec, (u32) &func_0200c5d0,
    (u32) &func_0200c5dc, (u32) &func_0200c5d4, (u32) &func_0201a09c, (u32) &func_0201a080, (u32) &func_0201a074,
    (u32) &func_0201a068, (u32) &func_0201a054, (u32) &func_0201b9f8, (u32) &func_020204ac, (u32) &func_02017520,
    (u32) &func_0200e4d4, (u32) &func_02017474, (u32) &func_0201bc30, (u32) &func_020202c8, (u32) &func_020204ec,
    (u32) &func_0201cf9c, (u32) &func_02020510, (u32) &func_020171a4, (u32) &func_0201719c, (u32) &func_0201a040,
    (u32) &func_02017d38, (u32) &func_02017a88, (u32) &func_0201a048, (u32) &func_0201239c, (u32) &func_02017270,
    (u32) &func_020172c8, (u32) &func_02017320, (u32) &func_0201733c, (u32) &func_0201739c, (u32) &func_0201c210,
    (u32) &func_0201c228, (u32) &func_0201c240, (u32) &func_0201c258, (u32) &func_02017578, (u32) &func_02017ad0,
    (u32) &func_02017b68, (u32) &func_02017d44, (u32) &func_02017ec8, (u32) &func_02017ee8, (u32) &func_02017ef8,
    (u32) &func_0201c27c, (u32) &func_0201c538, (u32) &func_0201c648, (u32) &func_0201c748, (u32) &func_0201c868,
    (u32) &func_0201c968, (u32) &func_0201ca6c, (u32) &func_02017f08, (u32) &func_02017f1c, (u32) &func_02017f30,
    (u32) &func_0201ca84, (u32) &func_0201ca94, (u32) &func_0201cba4, (u32) &func_0201de58, (u32) &func_0201df08,
    (u32) &func_0201df24, (u32) &func_0201df40, (u32) &func_0201df5c, (u32) &func_02017308, (u32) &func_02017f5c,
    (u32) &func_02012388, (u32) &func_02012384, (u32) &func_0201237c, (u32) &func_0201df90, (u32) &func_020173b4,
    (u32) &func_0201a1ac, (u32) &func_02020220, (u32) &func_02020244, (u32) &func_020202ec, (u32) &func_02020364,
    (u32) &func_02020400, (u32) &func_02020434, (u32) &func_02019890, (u32) &func_02019d44, (u32) &func_02019eb0,
    (u32) &func_0201cfa4, (u32) &func_0201e1d0, (u32) &func_02020480, (u32) &func_0201a210, (u32) &func_0201a538,
    (u32) &func_0201c1f4, (u32) &func_0201a898, (u32) &func_020204b4, (u32) &func_0201a530, (u32) &func_020204bc,
    (u32) &func_0201e878, (u32) &func_0201a208, (u32) &func_0201e39c, (u32) &func_0201bd28, (u32) &func_0201c010,
    (u32) &func_0201c0c4, (u32) &func_0201c0f4, (u32) &func_02020530};
