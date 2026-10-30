/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* CARDi_IdentifyBackupCore from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/card/calls/CARDi_IdentifyBackupCore.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef signed long s32;
typedef s32 CARDiOwner;
typedef int CARDResult;
typedef int CARDBackupType;
typedef int CARDRequest;
typedef int CARDRequestMode;
typedef int CARDTargetMode;
typedef void (*MIDmaCallback)(void *);
typedef struct OSThreadQueue {
    struct OSThread *head;
    struct OSThread *tail;
} OSThreadQueue;
enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
};
enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_READ_STATUS,
    CARD_REQ_WRITE_STATUS,
    CARD_REQ_ERASE_SUBSECTOR_BACKUP,
    CARD_REQ_MAX
};
typedef struct CARDiCommandArg {
    CARDResult result;
    CARDBackupType type;
    u32 id;
    u32 src;
    u32 dst;
    u32 len;
    struct {
        u32 total_size;
        u32 sect_size;
        u32 subsect_size;
        u32 page_size;
        u32 addr_width;
        u32 program_page;
        u32 write_page;
        u32 write_page_total;
        u32 erase_chip;
        u32 erase_chip_total;
        u32 erase_sector;
        u32 erase_sector_total;
        u32 erase_subsector;
        u32 erase_subsector_total;
        u32 erase_page;
        u8 initial_status;
        u8 padding1[3];
        u32 caps;
        u8 padding2[4];
    } spec;
} CARDiCommandArg;
typedef struct CARDiCommon {
    CARDiCommandArg *cmd;
    int command;
    volatile CARDiOwner lock_owner;
    volatile int lock_ref;
    OSThreadQueue lock_queue[1];
    CARDTargetMode lock_target;
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    CARDRequest req_type;
    int req_retry;
    CARDRequestMode req_mode;
    MIDmaCallback callback;
    void *callback_arg;
    void (*task_func)(struct CARDiCommon *);
    u8 thread[0xc0];
    struct OSThread *cur_th;
    u32 priority;
    OSThreadQueue busy_q[1];
    volatile u32 flag;
    u32 flush_threshold_ic;
    u32 flush_threshold_dc;
    u8 backup_cache_page_buf[256] __attribute__((aligned(32)));
} CARDiCommon;
extern void func_020ba820(void *dst, u8 data, u32 size);
extern CARDiCommon data_0216f020;
void func_020bfae4(CARDBackupType type) {
    {
        CARDiCommandArg *const p = data_0216f020.cmd;

        func_020ba820(&p->spec, 0, sizeof(p->spec));
        p->type      = type;
        p->spec.caps = ((u32) ((u32) (1 << CARD_REQ_READ_BACKUP) - 1) | (u32) (1 << CARD_REQ_READ_STATUS));
        if (type != 0) {
            const u32 size   = (u32) (1 << ((type >> 8) & 0xFF));
            const int device = ((type >> 0) & 0xFF);
            const int vender = ((type >> 16) & 0xFF);

            p->spec.total_size = size;

            p->spec.initial_status = 0xFF;
            if (device == 1) {
                switch (size) {
                    default:
                        goto invalid_type;
                    case 0x000200:
                        p->spec.page_size      = 0x10;
                        p->spec.addr_width     = 1;
                        p->spec.program_page   = 5;
                        p->spec.initial_status = 0xF0;
                        break;
                    case 0x002000:
                        p->spec.page_size      = 0x0020;
                        p->spec.addr_width     = 2;
                        p->spec.program_page   = 5;
                        p->spec.initial_status = 0x00;
                        break;
                    case 0x010000:
                        p->spec.page_size      = 0x0080;
                        p->spec.addr_width     = 2;
                        p->spec.program_page   = 10;
                        p->spec.initial_status = 0x00;
                        break;
                }
                p->spec.sect_size = p->spec.page_size;
                p->spec.caps |= (u32) (1 << CARD_REQ_READ_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_PROGRAM_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_VERIFY_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_STATUS);
            } else if (device == 2) {
                switch (size) {
                    default:
                        goto invalid_type;
                    case 0x040000:
                    case 0x080000:
                    case 0x100000:
                        p->spec.write_page       = 25;
                        p->spec.write_page_total = 300;
                        p->spec.erase_page       = 300;
                        p->spec.erase_sector     = 5000;
                        p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_BACKUP);
                        p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_PAGE_BACKUP);
                        break;
                    case 0x200000:
                        p->spec.write_page         = 23;
                        p->spec.write_page_total   = 300;
                        p->spec.erase_sector       = 500;
                        p->spec.erase_sector_total = 5000;
                        p->spec.erase_chip         = 10000;
                        p->spec.erase_chip_total   = 60000;
                        p->spec.initial_status     = 0x00;
                        p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_BACKUP);
                        p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_PAGE_BACKUP);
                        p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_CHIP_BACKUP);
                        p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_STATUS);
                        break;
                    case 0x400000:
                        p->spec.erase_sector          = 600;
                        p->spec.erase_sector_total    = 3000;
                        p->spec.erase_subsector       = 70;
                        p->spec.erase_subsector_total = 150;
                        p->spec.erase_chip            = 23000;
                        p->spec.erase_chip_total      = 800000;
                        p->spec.initial_status        = 0x00;
                        p->spec.subsect_size          = 0x1000;
                        p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_SUBSECTOR_BACKUP);
                        p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_CHIP_BACKUP);
                        p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_STATUS);
                        break;
                    case 0x800000:
                        if (vender == 0) {
                            p->spec.erase_sector       = 1000;
                            p->spec.erase_sector_total = 3000;
                            p->spec.erase_chip         = 68000;
                            p->spec.erase_chip_total   = 160000;
                            p->spec.initial_status     = 0x00;
                            p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_CHIP_BACKUP);
                            p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_STATUS);
                        } else if (vender == 1) {
                            p->spec.erase_sector       = 1000;
                            p->spec.erase_sector_total = 3000;
                            p->spec.erase_chip         = 68000;
                            p->spec.erase_chip_total   = 160000;
                            p->spec.initial_status     = 0x84;
                            p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_CHIP_BACKUP);
                            p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_STATUS);
                        }
                        break;
                }
                p->spec.sect_size    = 0x010000;
                p->spec.page_size    = 0x0100;
                p->spec.addr_width   = 3;
                p->spec.program_page = 5;
                p->spec.caps |= (u32) (1 << CARD_REQ_READ_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_PROGRAM_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_VERIFY_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_ERASE_SECTOR_BACKUP);
            } else if (device == 3) {
                switch (size) {
                    default:
                        goto invalid_type;
                    case 0x002000:
                    case 0x008000:
                        break;
                }
                p->spec.page_size      = size;
                p->spec.sect_size      = size;
                p->spec.addr_width     = 2;
                p->spec.initial_status = 0x00;
                p->spec.caps |= (u32) (1 << CARD_REQ_READ_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_PROGRAM_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_VERIFY_BACKUP);
                p->spec.caps |= (u32) (1 << CARD_REQ_WRITE_STATUS);
            } else {
            invalid_type:
                p->type                   = 0;
                p->spec.total_size        = 0;
                data_0216f020.cmd->result = CARD_RESULT_UNSUPPORTED;
                return;
            }
        }
    }
}
