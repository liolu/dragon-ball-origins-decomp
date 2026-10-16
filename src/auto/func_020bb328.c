/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bb328 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/func_020bb328.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr data_0216d260;
extern SNDCommand *data_0216d284[8];
extern SNDCommand data_0216d540[0x100];
extern int func_020ba034(void);
extern void func_020ba048(int state);
extern void func_020b963c(void *address, unsigned int size);
extern SNDCommand *func_020bb158(int block);
extern int func_020bbf08(int channel, unsigned int data, int err);
extern void func_020bb6e4(void);
int func_020bb328(unsigned int flags) {
    int state = func_020ba034();

    if (data_0216d260.reservedHead == 0) {
        func_020ba048(state);
        return 1;
    }

    if (data_0216d260.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            func_020ba048(state);
            return 0;
        }
        do {
            func_020bb158(1);
        } while (data_0216d260.sentBlockCount >= 8);
        if (data_0216d260.reservedHead == 0) {
            func_020ba048(state);
            return 1;
        }
    }

    func_020b963c(data_0216d540, sizeof(data_0216d540));

    if (func_020bbf08(7, (unsigned int) data_0216d260.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            func_020ba048(state);
            return 0;
        }
        while (data_0216d260.sentBlockCount >= 8 || func_020bbf08(7, (unsigned int) data_0216d260.reservedHead, 0) < 0) {
            func_020ba048(state);
            func_020bb158(0);
            state = func_020ba034();
            func_020b963c(data_0216d540, sizeof(data_0216d540));
            if (data_0216d260.reservedHead == 0) {
                func_020ba048(state);
                return 1;
            }
        }
    }

    data_0216d284[data_0216d260.sentRingIndex] = data_0216d260.reservedHead;
    data_0216d260.sentRingIndex++;
    if (data_0216d260.sentRingIndex > 8) {
        data_0216d260.sentRingIndex = 0;
    }
    data_0216d260.reservedHead = 0;
    data_0216d260.reservedTail = 0;
    data_0216d260.sentBlockCount++;
    data_0216d260.nextTag++;
    func_020ba048(state);

    if ((flags & 2) != 0) {
        func_020bb6e4();
    }
    return 1;
}
