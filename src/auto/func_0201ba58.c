#include "m2c.h"

extern u16 data_0213b354;
extern u16 data_0213b356;
extern u16 data_0213b358;
extern u16 data_0213b35e;

s32 func_0201ba58(void) {
    return data_0213b354 | (data_0213b35e | (data_0213b356 | data_0213b358));
}
