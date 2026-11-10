#include "m2c.h"

/* NitroSDK crt0 module parameters (_start_ModuleParams): data the original build places in .text
   (fakematch exception for BuildInfo). */
#pragma define_section TEXTDATA ".text" \
                                ".text"

extern char data_020ef300[]; /* SDK_AUTOLOAD_LIST */
extern char data_020ef318[]; /* SDK_AUTOLOAD_LIST_END */
extern char data_020e7c00[]; /* SDK_AUTOLOAD_START, SDK_STATIC_BSS_START */

__declspec(TEXTDATA) void *BuildInfo[] = {
    (void *) data_020ef300,
    (void *) data_020ef318,
    (void *) data_020e7c00,
    (void *) data_020e7c00,
    (void *) 0x02170ea0, /* SDK_STATIC_BSS_END */
    (void *) 0, /* CompressedStaticEnd */
    (void *) 0x04027531, /* SDK version 4.2.30001 */
    (void *) 0xdec00621, /* SDK_NITROCODE_BE */
    (void *) 0x2106c0de, /* SDK_NITROCODE_LE */
};
