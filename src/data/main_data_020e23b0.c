/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020e165c[];
extern u8 data_020e166c[];
extern u8 data_020e167c[];
extern u8 data_020e168c[];
extern u8 data_020e169c[];
extern u8 data_020e16ac[];
extern u8 data_020e16bc[];
extern u8 data_020e16cc[];
extern u8 data_020e16dc[];
extern u8 data_020e16ec[];
extern u8 data_020e16fc[];
extern u8 data_020e1710[];
extern u8 data_020e1724[];
extern u8 data_020e1738[];
extern u8 data_020e174c[];
extern u8 data_020e1760[];
extern u8 data_020e1774[];
extern u8 data_020e1788[];
extern u8 data_020e179c[];
extern u8 data_020e17b0[];
extern u8 data_020e17c4[];
extern u8 data_020e17d8[];
extern u8 data_020e17ec[];
extern u8 data_020e1800[];
extern u8 data_020e1814[];
extern u8 data_020e1828[];
extern u8 data_020e183c[];
extern u8 data_020e1850[];
extern u8 data_020e1868[];
extern u8 data_020e1880[];
extern u8 data_020e1898[];
extern u8 data_020e18b0[];
extern u8 data_020e18c8[];
extern u8 data_020e18e0[];
extern u8 data_020e18f8[];
extern u8 data_020e1910[];
extern u8 data_020e1928[];
extern u8 data_020e1940[];
extern u8 data_020e1958[];
extern u8 data_020e1970[];
extern u8 data_020e1988[];
extern u8 data_020e19a0[];
extern u8 data_020e19b8[];
extern u8 data_020e19d0[];
extern u8 data_020e19e8[];
extern u8 data_020e1a00[];
extern u8 data_020e1a18[];
extern u8 data_020e1a30[];
extern u8 data_020e1a4c[];
extern u8 data_020e1a68[];
extern u8 data_020e1a84[];
extern u8 data_020e1aa0[];
extern u8 data_020e1abc[];
extern u8 data_020e1ad8[];
extern u8 data_020e1af4[];
extern u8 data_020e1b10[];
extern u8 data_020e1b2c[];
extern u8 data_020e1b48[];
extern u8 data_020e1b64[];
extern u8 data_020e1b84[];
extern u8 data_020e1ba4[];
extern u8 data_020e1bc4[];
extern u8 data_020e1be4[];
extern u8 data_020e1c04[];
extern u8 data_020e1c24[];
extern u8 data_020e1c44[];
extern u8 data_020e1c64[];
extern u8 data_020e1c84[];
extern u8 data_020e1ca4[];
extern u8 data_020e1cc4[];
extern u8 data_020e1ce4[];
extern u8 data_020e1d04[];
extern u8 data_020e1d24[];
extern u8 data_020e1d44[];
extern u8 data_020e1d68[];
extern u8 data_020e1d8c[];
extern u8 data_020e1db0[];
extern u8 data_020e1dd4[];
extern u8 data_020e1df8[];
extern u8 data_020e1e1c[];
extern u8 data_020e1e40[];
extern u8 data_020e1e64[];
extern u8 data_020e1e88[];
extern u8 data_020e1eac[];
extern u8 data_020e1ed0[];
extern u8 data_020e1ef4[];
extern u8 data_020e1f18[];
extern u8 data_020e1f3c[];
extern u8 data_020e1f60[];
extern u8 data_020e1f88[];
extern u8 data_020e1fb0[];
extern u8 data_020e1fd8[];
extern u8 data_020e2000[];
extern u8 data_020e2028[];
extern u8 data_020e2050[];
extern u8 data_020e2078[];
extern u8 data_020e20a0[];
extern u8 data_020e20cc[];
extern u8 data_020e20f8[];
extern u8 data_020e2124[];
extern u8 data_020e2150[];
extern u8 data_020e217c[];
extern u8 data_020e21a8[];
extern u8 data_020e21d4[];
extern u8 data_020e2200[];
extern u8 data_020e222c[];
extern u8 data_020e2258[];
extern u8 data_020e2284[];
extern u8 data_020e22b0[];
extern u8 data_020e22e0[];
extern u8 data_020e2310[];
extern u8 data_020e2340[];
extern u8 data_020e2378[];

u32 data_020e23b0[160] = {
    (u32) &data_020e1760, (u32) &data_020e1ce4, (u32) &data_020e1c64, (u32) &data_020e17b0, (u32) &data_020e1a4c,
    (u32) &data_020e1b48, (u32) &data_020e1910, (u32) &data_020e1ba4, (u32) &data_020e1ba4, (u32) &data_020e1ba4,
    (u32) &data_020e16bc, (u32) &data_020e16bc, (u32) &data_020e16bc, (u32) &data_020e1a68, (u32) &data_020e1a68,
    (u32) &data_020e1a68, (u32) &data_020e16ec, (u32) &data_020e16ec, (u32) &data_020e1a84, (u32) &data_020e1a84,
    (u32) &data_020e18e0, (u32) &data_020e1b2c, (u32) &data_020e1b2c, (u32) &data_020e18f8, (u32) &data_020e16ac,
    (u32) &data_020e16ac, (u32) &data_020e1738, (u32) &data_020e1800, (u32) &data_020e1724, (u32) &data_020e17c4,
    (u32) &data_020e17d8, (u32) &data_020e1774, (u32) &data_020e1774, (u32) &data_020e1774, (u32) &data_020e1880,
    (u32) &data_020e1880, (u32) &data_020e179c, (u32) &data_020e17ec, (u32) &data_020e1aa0, (u32) &data_020e1aa0,
    (u32) &data_020e1ca4, (u32) &data_020e1958, (u32) &data_020e1958, (u32) &data_020e1bc4, (u32) &data_020e1cc4,
    (u32) &data_020e1abc, (u32) &data_020e1abc, (u32) &data_020e1868, (u32) &data_020e1868, (u32) &data_020e1868,
    (u32) &data_020e1fb0, (u32) &data_020e1db0, (u32) &data_020e166c, (u32) &data_020e1dd4, (u32) &data_020e1ef4,
    (u32) &data_020e16dc, (u32) &data_020e1d04, (u32) &data_020e1d04, (u32) &data_020e167c, (u32) &data_020e167c,
    (u32) &data_020e167c, (u32) &data_020e1f18, (u32) &data_020e2124, (u32) &data_020e2150, (u32) &data_020e2150,
    (u32) &data_020e2150, (u32) &data_020e2150, (u32) &data_020e2150, (u32) &data_020e2378, (u32) &data_020e2378,
    (u32) &data_020e1be4, (u32) &data_020e1be4, (u32) &data_020e1be4, (u32) &data_020e18b0, (u32) &data_020e16cc,
    (u32) &data_020e1a00, (u32) &data_020e1a00, (u32) &data_020e1a00, (u32) &data_020e1a18, (u32) &data_020e1a18,
    (u32) &data_020e1a18, (u32) &data_020e1a18, (u32) &data_020e1d24, (u32) &data_020e1d24, (u32) &data_020e1814,
    (u32) &data_020e16fc, (u32) &data_020e1a30, (u32) &data_020e1a30, (u32) &data_020e183c, (u32) &data_020e1b64,
    (u32) &data_020e1c04, (u32) &data_020e16fc, (u32) &data_020e1c24, (u32) &data_020e1b10, (u32) &data_020e1d68,
    (u32) &data_020e1c24, (u32) &data_020e19a0, (u32) &data_020e1f88, (u32) &data_020e1b84, (u32) &data_020e1828,
    (u32) &data_020e169c, (u32) &data_020e165c, (u32) &data_020e1710, (u32) &data_020e20cc, (u32) &data_020e1c84,
    (u32) &data_020e20f8, (u32) &data_020e1928, (u32) &data_020e1940, (u32) &data_020e19e8, (u32) &data_020e1ed0,
    (u32) &data_020e1ed0, (u32) &data_020e22b0, (u32) &data_020e22e0, (u32) &data_020e16bc, (u32) &data_020e1ad8,
    (u32) &data_020e1988, (u32) &data_020e18c8, (u32) &data_020e2284, (u32) &data_020e1f3c, (u32) &data_020e1e1c,
    (u32) &data_020e1fd8, (u32) &data_020e1e64, (u32) &data_020e1e88, (u32) &data_020e1d44, (u32) &data_020e1f60,
    (u32) &data_020e1d8c, (u32) &data_020e1eac, (u32) &data_020e2028, (u32) &data_020e217c, (u32) &data_020e21a8,
    (u32) &data_020e21d4, (u32) &data_020e2200, (u32) &data_020e222c, (u32) &data_020e1970, (u32) &data_020e1850,
    (u32) &data_020e1788, (u32) &data_020e19d0, (u32) &data_020e2078, (u32) &data_020e20a0, (u32) &data_020e2310,
    (u32) &data_020e1c44, (u32) &data_020e2050, (u32) &data_020e2340, (u32) &data_020e2258, (u32) &data_020e1df8,
    (u32) &data_020e2078, (u32) &data_020e174c, (u32) &data_020e1760, (u32) &data_020e1760, (u32) &data_020e1760,
    (u32) &data_020e17b0, (u32) &data_020e1850, (u32) &data_020e1850, (u32) &data_020e1958, (u32) &data_020e1af4,
    (u32) &data_020e168c, (u32) &data_020e19b8, (u32) &data_020e1e40, (u32) &data_020e2000, (u32) &data_020e1898};
