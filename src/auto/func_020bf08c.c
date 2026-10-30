/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_020bf08c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/rtc/calls/func_020bf08c.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef int BOOL;
typedef int PXIFifoTag;
typedef int RTCResult;
typedef int RTCPxiResult;
typedef int RTCWeek;
typedef int RTCAlarmStatus;
typedef void (*RTCCallback)(RTCResult result, void *arg);
typedef void (*RTCInterrupt)(void);
enum {
    RTC_RESULT_SUCCESS = 0,
    RTC_RESULT_BUSY,
    RTC_RESULT_ILLEGAL_PARAMETER,
    RTC_RESULT_SEND_ERROR,
    RTC_RESULT_INVALID_COMMAND,
    RTC_RESULT_ILLEGAL_STATUS,
    RTC_RESULT_FATAL_ERROR,
    RTC_RESULT_MAX
};
enum {
    RTC_PXI_RESULT_SUCCESS = 0,
    RTC_PXI_RESULT_INVALID_COMMAND,
    RTC_PXI_RESULT_ILLEGAL_STATUS,
    RTC_PXI_RESULT_BUSY,
    RTC_PXI_RESULT_FATAL_ERROR
};
enum {
    RTC_ALARM_STATUS_OFF = 0,
    RTC_ALARM_STATUS_ON,
    RTC_ALARM_STATUS_MAX
};
enum {
    RTC_LOCK_OFF = 0,
    RTC_LOCK_ON,
    RTC_LOCK_MAX
};
typedef enum RTCSequence {
    RTC_SEQ_GET_DATE = 0,
    RTC_SEQ_GET_TIME,
    RTC_SEQ_GET_DATETIME,
    RTC_SEQ_SET_DATE,
    RTC_SEQ_SET_TIME,
    RTC_SEQ_SET_DATETIME,
    RTC_SEQ_GET_ALARM1_STATUS,
    RTC_SEQ_GET_ALARM2_STATUS,
    RTC_SEQ_GET_ALARM_PARAM,
    RTC_SEQ_SET_ALARM1_STATUS,
    RTC_SEQ_SET_ALARM2_STATUS,
    RTC_SEQ_SET_ALARM1_PARAM,
    RTC_SEQ_SET_ALARM2_PARAM,
    RTC_SEQ_SET_HOUR_FORMAT,
    RTC_SEQ_SET_REG_STATUS2,
    RTC_SEQ_SET_REG_ADJUST,
    RTC_SEQ_MAX
} RTCSequence;
typedef struct RTCDate {
    u32 year;
    u32 month;
    u32 day;
    RTCWeek week;
} RTCDate;
typedef struct RTCTime {
    u32 hour;
    u32 minute;
    u32 second;
} RTCTime;
typedef struct RTCAlarmParam {
    RTCWeek week;
    u32 hour;
    u32 minute;
    u32 enable;
} RTCAlarmParam;
typedef struct RTCRawDate {
    u32 year : 8;
    u32 month : 5;
    u32 dummy0 : 3;
    u32 day : 6;
    u32 dummy1 : 2;
    u32 week : 3;
    u32 dummy2 : 5;
} RTCRawDate;
typedef struct RTCRawTime {
    u32 hour : 6;
    u32 afternoon : 1;
    u32 dummy0 : 1;
    u32 minute : 7;
    u32 dummy1 : 1;
    u32 second : 7;
    u32 dummy2 : 9;
} RTCRawTime;
typedef struct RTCRawStatus1 {
    u16 reset : 1;
    u16 format : 1;
    u16 dummy0 : 2;
    u16 intr1 : 1;
    u16 intr2 : 1;
    u16 bld : 1;
    u16 poc : 1;
    u16 dummy1 : 8;
} RTCRawStatus1;
typedef struct RTCRawStatus2 {
    u16 intr_mode : 4;
    u16 dummy0 : 2;
    u16 intr2_mode : 1;
    u16 test : 1;
    u16 dummy1 : 8;
} RTCRawStatus2;
typedef struct RTCRawAlarm {
    u32 week : 3;
    u32 dummy0 : 4;
    u32 we : 1;
    u32 hour : 6;
    u32 afternoon : 1;
    u32 he : 1;
    u32 minute : 7;
    u32 me : 1;
    u32 dummy2 : 8;
} RTCRawAlarm;
typedef struct RTCRawPulse {
    u32 pulse : 5;
    u32 dummy : 27;
} RTCRawPulse;
typedef struct RTCRawAdjust {
    u32 adjust : 8;
    u32 dummy : 24;
} RTCRawAdjust;
typedef struct RTCRawFree {
    u32 free : 8;
    u32 dummy : 24;
} RTCRawFree;
typedef union RTCRawData {
    struct {
        RTCRawDate date;
        RTCRawTime time;
    } t;
    struct {
        RTCRawStatus1 status1;
        RTCRawStatus2 status2;
        union {
            RTCRawPulse pulse;
            RTCRawAlarm alarm;
            RTCRawAdjust adjust;
            RTCRawFree free;
        };
    } a;
    u32 words[2];
    u16 halfs[4];
    u8 bytes[8];
} RTCRawData;
typedef struct RTCWork {
    u32 lock;
    RTCCallback callback;
    void *buffer[2];
    void *callbackArg;
    u32 sequence;
    u32 index;
    RTCInterrupt interrupt;
    RTCResult commonResult;
} RTCWork;
extern struct {
    u64 initialTotalTicks;
    u16 tickInitialized;
    u16 initialized;
    RTCWork work;
} data_0216ef58;
extern u32 func_020bf5dc(u32 bcd);
extern RTCWeek func_020bf6bc(RTCDate *date);
extern BOOL func_020bf684(void);
void func_020bf08c(PXIFifoTag tag, u32 data, BOOL err) {

    RTCResult result;
    RTCPxiResult pxiresult;
    u8 command;
    RTCCallback cb;

    if (err) {
        if (data_0216ef58.work.index) {
            data_0216ef58.work.index = 0;
        }

        if (data_0216ef58.work.lock != RTC_LOCK_OFF) {
            data_0216ef58.work.lock = RTC_LOCK_OFF;
        }

        if (data_0216ef58.work.callback) {
            cb                          = data_0216ef58.work.callback;
            data_0216ef58.work.callback = ((void *) 0);
            cb(RTC_RESULT_FATAL_ERROR, data_0216ef58.work.callbackArg);
        }

        return;
    }

    command   = (u8) ((data & 0x00007f00) >> 8);
    pxiresult = (RTCPxiResult) ((data & 0x000000ff) >> 0);

    if (command == 0x30) {
        if (data_0216ef58.work.interrupt) {
            data_0216ef58.work.interrupt();
        }
        return;
    }

    if (pxiresult == RTC_PXI_RESULT_SUCCESS) {
        result = RTC_RESULT_SUCCESS;
        switch (data_0216ef58.work.sequence) {

            case RTC_SEQ_GET_DATE: {
                RTCDate *pDst    = (RTCDate *) (data_0216ef58.work.buffer[0]);
                RTCRawDate *pSrc = &(((RTCRawData *) ((u8 *) 0x027ffde8))->t.date);

                pDst->year  = func_020bf5dc(pSrc->year);
                pDst->month = func_020bf5dc(pSrc->month);
                pDst->day   = func_020bf5dc(pSrc->day);
                pDst->week  = func_020bf6bc(pDst);
            } break;
            case RTC_SEQ_GET_TIME: {
                RTCTime *pDst    = (RTCTime *) (data_0216ef58.work.buffer[0]);
                RTCRawTime *pSrc = &(((RTCRawData *) ((u8 *) 0x027ffde8))->t.time);

                pDst->hour   = func_020bf5dc(pSrc->hour);
                pDst->minute = func_020bf5dc(pSrc->minute);
                pDst->second = func_020bf5dc(pSrc->second);
            } break;
            case RTC_SEQ_GET_DATETIME: {
                RTCDate *pDst    = (RTCDate *) (data_0216ef58.work.buffer[0]);
                RTCRawDate *pSrc = &(((RTCRawData *) ((u8 *) 0x027ffde8))->t.date);

                pDst->year  = func_020bf5dc(*(u32 *) pSrc & 0x000000ff);
                pDst->month = func_020bf5dc(pSrc->month);
                pDst->day   = func_020bf5dc(pSrc->day);
                pDst->week  = func_020bf6bc(pDst);
            }
                {
                    RTCTime *pDst    = (RTCTime *) (data_0216ef58.work.buffer[1]);
                    RTCRawTime *pSrc = &(((RTCRawData *) ((u8 *) 0x027ffde8))->t.time);

                    pDst->hour   = func_020bf5dc(pSrc->hour);
                    pDst->minute = func_020bf5dc(pSrc->minute);
                    pDst->second = func_020bf5dc(pSrc->second);
                }
                break;

            case RTC_SEQ_SET_DATE:
            case RTC_SEQ_SET_TIME:
            case RTC_SEQ_SET_DATETIME:
                break;
            case RTC_SEQ_GET_ALARM1_STATUS: {
                RTCAlarmStatus *pDst = (RTCAlarmStatus *) (data_0216ef58.work.buffer[0]);
                RTCRawStatus2 *pSrc  = &(((RTCRawData *) ((u8 *) 0x027ffde8))->a.status2);

                switch (pSrc->intr_mode) {
                    case 0x4:
                        *pDst = RTC_ALARM_STATUS_ON;
                        break;
                    default:
                        *pDst = RTC_ALARM_STATUS_OFF;
                }
            } break;

            case RTC_SEQ_GET_ALARM2_STATUS: {
                RTCAlarmStatus *pDst = (RTCAlarmStatus *) (data_0216ef58.work.buffer[0]);
                RTCRawStatus2 *pSrc  = &(((RTCRawData *) ((u8 *) 0x027ffde8))->a.status2);

                if (pSrc->intr2_mode) {
                    *pDst = RTC_ALARM_STATUS_ON;
                } else {
                    *pDst = RTC_ALARM_STATUS_OFF;
                }
            } break;

            case RTC_SEQ_GET_ALARM_PARAM: {
                RTCAlarmParam *pDst = (RTCAlarmParam *) (data_0216ef58.work.buffer[0]);
                RTCRawAlarm *pSrc   = &(((RTCRawData *) ((u8 *) 0x027ffde8))->a.alarm);

                pDst->week   = (RTCWeek) (pSrc->week);
                pDst->hour   = func_020bf5dc(pSrc->hour);
                pDst->minute = func_020bf5dc(pSrc->minute);
                pDst->enable = 0x0000;
                if (pSrc->we) {
                    pDst->enable += 0x0001;
                }
                if (pSrc->he) {
                    pDst->enable += 0x0002;
                }
                if (pSrc->me) {
                    pDst->enable += 0x0004;
                }
            } break;
            case RTC_SEQ_SET_ALARM1_STATUS:
                if (data_0216ef58.work.index == 0) {
                    RTCRawStatus2 *pSrc = &(((RTCRawData *) ((u8 *) 0x027ffde8))->a.status2);

                    if (*(RTCAlarmStatus *) (data_0216ef58.work.buffer[0]) == RTC_ALARM_STATUS_ON) {
                        if (pSrc->intr_mode != 0x4) {
                            data_0216ef58.work.index++;
                            pSrc->intr_mode = 0x4;
                            if (!func_020bf684()) {
                                data_0216ef58.work.index = 0;
                                result                   = RTC_RESULT_SEND_ERROR;
                            }
                        }
                    } else {
                        if (pSrc->intr_mode != 0x0) {
                            data_0216ef58.work.index++;
                            pSrc->intr_mode = 0x0;
                            if (!func_020bf684()) {
                                data_0216ef58.work.index = 0;
                                result                   = RTC_RESULT_SEND_ERROR;
                            }
                        }
                    }
                } else {
                    data_0216ef58.work.index = 0;
                }
                break;
            case RTC_SEQ_SET_ALARM2_STATUS:
                if (data_0216ef58.work.index == 0) {
                    RTCRawStatus2 *pSrc = &(((RTCRawData *) ((u8 *) 0x027ffde8))->a.status2);

                    if (*(RTCAlarmStatus *) (data_0216ef58.work.buffer[0]) == RTC_ALARM_STATUS_ON) {
                        if (!pSrc->intr2_mode) {
                            data_0216ef58.work.index++;
                            pSrc->intr2_mode = 1;
                            if (!func_020bf684()) {
                                data_0216ef58.work.index = 0;
                                result                   = RTC_RESULT_SEND_ERROR;
                            }
                        }
                    } else {

                        if (pSrc->intr2_mode) {

                            data_0216ef58.work.index++;
                            pSrc->intr2_mode = 0;
                            if (!func_020bf684()) {
                                data_0216ef58.work.index = 0;
                                result                   = RTC_RESULT_SEND_ERROR;
                            }
                        }
                    }
                } else {
                    data_0216ef58.work.index = 0;
                }
                break;
            case RTC_SEQ_SET_ALARM1_PARAM:
            case RTC_SEQ_SET_ALARM2_PARAM:
            case RTC_SEQ_SET_HOUR_FORMAT:
            case RTC_SEQ_SET_REG_STATUS2:
            case RTC_SEQ_SET_REG_ADJUST:
                break;
            default:
                result                   = RTC_RESULT_INVALID_COMMAND;
                data_0216ef58.work.index = 0;
        }
    } else {
        data_0216ef58.work.index = 0;

        switch (pxiresult) {
            case RTC_PXI_RESULT_INVALID_COMMAND:
                result = RTC_RESULT_INVALID_COMMAND;
                break;
            case RTC_PXI_RESULT_ILLEGAL_STATUS:
                result = RTC_RESULT_ILLEGAL_STATUS;
                break;
            case RTC_PXI_RESULT_BUSY:
                result = RTC_RESULT_BUSY;
                break;
            case RTC_PXI_RESULT_FATAL_ERROR:
            default:
                result = RTC_RESULT_FATAL_ERROR;
        }
    }

    if (data_0216ef58.work.index == 0) {
        if (data_0216ef58.work.lock != RTC_LOCK_OFF) {
            data_0216ef58.work.lock = RTC_LOCK_OFF;
        }

        if (data_0216ef58.work.callback) {
            cb                          = data_0216ef58.work.callback;
            data_0216ef58.work.callback = ((void *) 0);
            cb(result, data_0216ef58.work.callbackArg);
        }
    }
}
