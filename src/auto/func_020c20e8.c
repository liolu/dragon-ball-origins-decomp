/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Ov105_WMi_StartMP from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/wm/calls/Ov105_WMi_StartMP.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
enum {
    WM_ERRCODE_SUCCESS                    = 0,
    WM_ERRCODE_FAILED                     = 1,
    WM_ERRCODE_OPERATING                  = 2,
    WM_ERRCODE_ILLEGAL_STATE              = 3,
    WM_ERRCODE_WM_DISABLE                 = 4,
    WM_ERRCODE_NO_KEYSET                  = 5,
    WM_ERRCODE_INVALID_PARAM              = 6,
    WM_ERRCODE_NO_CHILD                   = 7,
    WM_ERRCODE_FIFO_ERROR                 = 8,
    WM_ERRCODE_TIMEOUT                    = 9,
    WM_ERRCODE_SEND_QUEUE_FULL            = 10,
    WM_ERRCODE_NO_ENTRY                   = 11,
    WM_ERRCODE_OVER_MAX_ENTRY             = 12,
    WM_ERRCODE_INVALID_POLLBITMAP         = 13,
    WM_ERRCODE_NO_DATA                    = 14,
    WM_ERRCODE_SEND_FAILED                = 15,
    WM_STATECODE_PARENT_START             = 0,
    WM_STATECODE_BEACON_SENT              = 2,
    WM_STATECODE_SCAN_START               = 3,
    WM_STATECODE_PARENT_NOT_FOUND         = 4,
    WM_STATECODE_PARENT_FOUND             = 5,
    WM_STATECODE_CONNECT_START            = 6,
    WM_STATECODE_CONNECTED                = 7,
    WM_STATECODE_BEACON_LOST              = 8,
    WM_STATECODE_DISCONNECTED             = 9,
    WM_STATECODE_MP_START                 = 10,
    WM_STATECODE_MPEND_IND                = 11,
    WM_STATECODE_MP_IND                   = 12,
    WM_STATECODE_MPACK_IND                = 13,
    WM_STATECODE_PORT_SEND                = 20,
    WM_STATECODE_PORT_RECV                = 21,
    WM_STATECODE_DISCONNECTED_FROM_MYSELF = 26
};
typedef void (*WMCallbackFunc)(void *arg);
typedef int WMErrCode;
enum {
    WM_STATE_READY = 0,
    WM_STATE_STOP,
    WM_STATE_IDLE,
    WM_STATE_CLASS1,
    WM_STATE_TESTMODE,
    WM_STATE_SCAN,
    WM_STATE_CONNECT,
    WM_STATE_PARENT,
    WM_STATE_CHILD,
    WM_STATE_MP_PARENT,
    WM_STATE_MP_CHILD,
    WM_STATE_DCF_CHILD,
    WM_STATE_TESTMODE_RX
};
enum {
    WM_APIID_INITIALIZE = 0,
    WM_APIID_RESET,
    WM_APIID_END,
    WM_APIID_ENABLE,
    WM_APIID_DISABLE,
    WM_APIID_POWER_ON,
    WM_APIID_POWER_OFF,
    WM_APIID_SET_P_PARAM,
    WM_APIID_START_PARENT,
    WM_APIID_END_PARENT,
    WM_APIID_START_SCAN,
    WM_APIID_END_SCAN,
    WM_APIID_START_CONNECT,
    WM_APIID_DISCONNECT,
    WM_APIID_START_MP,
    WM_APIID_SET_MP_DATA,
    WM_APIID_END_MP,
    WM_APIID_START_DCF,
    WM_APIID_SET_DCF_DATA,
    WM_APIID_END_DCF,
    WM_APIID_SET_WEPKEY,
    WM_APIID_START_KS,
    WM_APIID_END_KS,
    WM_APIID_GET_KEYSET,
    WM_APIID_SET_GAMEINFO,
    WM_APIID_SET_BEACON_IND,
    WM_APIID_START_TESTMODE,
    WM_APIID_STOP_TESTMODE,
    WM_APIID_VALARM_MP,
    WM_APIID_SET_LIFETIME,
    WM_APIID_MEASURE_CHANNEL,
    WM_APIID_INIT_W_COUNTER,
    WM_APIID_GET_W_COUNTER,
    WM_APIID_SET_ENTRY,
    WM_APIID_AUTO_DEAUTH,
    WM_APIID_SET_MP_PARAMETER,
    WM_APIID_SET_BEACON_PERIOD,
    WM_APIID_AUTO_DISCONNECT,
    WM_APIID_START_SCAN_EX,
    WM_APIID_SET_WEPKEY_EX,
    WM_APIID_SET_PS_MODE,
    WM_APIID_START_TESTRXMODE,
    WM_APIID_STOP_TESTRXMODE,
    WM_APIID_KICK_MP_PARENT,
    WM_APIID_KICK_MP_CHILD,
    WM_APIID_ASYNC_KIND_MAX,
    WM_APIID_INDICATION = 128,
    WM_APIID_PORT_SEND,
    WM_APIID_PORT_RECV,
    WM_APIID_READ_STATUS
};
typedef int WMApiid;
typedef struct WMParentParam {
    u16 *userGameInfo;
    u16 userGameInfoLength;
    u16 padding;
    u32 ggid;
    u16 tgid;
    u16 entryFlag;
    u16 maxEntry;
    u16 multiBootFlag;
    u16 KS_Flag;
    u16 CS_Flag;
    u16 beaconPeriod;
    u16 rsv1[8];
    u16 rsv2[4];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u16 rsv[4];
} WMParentParam;
typedef struct WMStatus {
    u16 state;
    u16 BusyApiid;
    BOOL apiBusy;
    BOOL scan_continue;
    BOOL mp_flag;
    BOOL dcf_flag;
    BOOL ks_flag;
    BOOL dcf_sendFlag;
    BOOL VSyncFlag;
    u8 wlVersion[8];
    u16 macVersion;
    u16 rfVersion;
    u16 bbpVersion[2];
    u16 mp_parentSize;
    u16 mp_childSize;
    u16 mp_parentMaxSize;
    u16 mp_childMaxSize;
    u16 mp_sendSize;
    u16 mp_recvSize;
    u16 mp_maxSendSize;
    u16 mp_maxRecvSize;
    u8 reserved40[0x72 - 0x40];
    u16 mp_recvBufSize;
    void *mp_recvBuf[2];
    u32 *mp_sendBuf;
    u16 mp_sendBufSize;
    u16 mp_ackTime;
    u16 mp_waitAckFlag;
    u16 mp_readyBitmap;
    u8 reserved88[0x9c - 0x88];
    u16 mp_ignoreSizePrecheckMode;
    u8 reserved9e[0xbc - 0x9e];
    u16 linkLevel;
    u16 minRssi;
    u16 rssiCounter;
    u16 beaconIndicateFlag;
    u16 wepKeyId;
    u16 pwrMgtMode;
    u8 reservedc8[0xe0 - 0xc8];
    u8 MacAddress[6];
    u16 mode;
    WMParentParam pparam;
    u8 childMacAddress[15][6];
    u16 child_bitmap;
    void *pInfoBuf;
    u16 aid;
    u8 parentMacAddress[6];
    u16 scan_channel;
    u8 reserved192[0x800 - 0x192];
} WMStatus;
typedef struct WMArm7Buf {
    WMStatus *status;
    u8 reserved_a[4];
    u32 *fifo7to9;
    u8 reserved_b[0x2f4];
} WMArm7Buf;
typedef struct WMArm9Buf {
    WMArm7Buf *WM7;
    WMStatus *status;
    u32 *indbuf;
    u32 *fifo9to7;
    u32 *fifo7to9;
    u16 dmaNo;
    u16 scanOnlyFlag;
    WMCallbackFunc CallbackTable[44];
    WMCallbackFunc indCallback;
    WMCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} WMArm9Buf;
typedef struct WMMPParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u16 maxFrequency;
    u16 parentSize;
    u16 childSize;
    u16 parentInterval;
    u16 childInterval;
    u16 parentVCount;
    u16 childVCount;
    u16 defaultRetryCount;
    u8 minPollBmpMode;
    u8 singlePacketMode;
    u8 ignoreFatalErrorMode;
    u8 ignoreSizePrecheckMode;
} WMMPParam;
typedef struct WMMPTmpParam {
    u32 mask;
    u16 minFrequency;
    u16 frequency;
    u16 maxFrequency;
    u16 defaultRetryCount;
    u8 minPollBmpMode;
    u8 singlePacketMode;
    u8 ignoreFatalErrorMode;
    u8 reserved[1];
} WMMPTmpParam;
typedef struct WMStartMPReq {
    u16 apiid;
    u16 rsv1;
    u32 *recvBuf;
    u32 recvBufSize;
    u32 *sendBuf;
    u32 sendBufSize;
    WMMPParam param;
    WMMPTmpParam tmpParam;
} WMStartMPReq;
extern WMArm9Buf *func_020c1120(void);
extern WMErrCode func_020c1194(s32 paramNum, ...);
extern WMErrCode func_020c10b0(void *data, u32 length);
extern void func_020c0f94(WMApiid id, WMCallbackFunc callback);
extern int func_020c176c(void);
extern int func_020c17d8(void);
extern void func_020b9604(void *addr, u32 size);
extern void func_020ba6f0(u32 value, void *dst, u32 size);
extern void func_020ba70c(const void *src, void *dst, u32 size);
WMErrCode func_020c20e8(WMCallbackFunc callback, u16 *recvBuf, u16 recvBufSize, u16 *sendBuf, u16 sendBufSize,
                        WMMPTmpParam *tmpParam) {
    WMErrCode result;
    WMArm9Buf *p     = func_020c1120();
    WMStatus *status = p->status;

    result = func_020c1194(2, WM_STATE_PARENT, WM_STATE_CHILD);
    if ((result) != WM_ERRCODE_SUCCESS) {
        return (result);
    };

    func_020b9604(&(status->aid), 2);
    func_020b9604(&(status->pwrMgtMode), 2);

    if (status->aid != 0 && status->pwrMgtMode != 1) {
        return WM_ERRCODE_ILLEGAL_STATE;
    }

    func_020b9604(&(status->mp_flag), 4);

    if (status->mp_flag == 1) {
        return WM_ERRCODE_ILLEGAL_STATE;
    }

    if ((recvBufSize & 0x3f) != 0) {
        return WM_ERRCODE_INVALID_PARAM;
    }

    if ((sendBufSize & 0x1f) != 0) {
        return WM_ERRCODE_INVALID_PARAM;
    }

    func_020b9604(&(status->mp_ignoreSizePrecheckMode), sizeof(status->mp_ignoreSizePrecheckMode));

    if (status->mp_ignoreSizePrecheckMode == 0) {
        if (recvBufSize < func_020c17d8()) {
            return WM_ERRCODE_INVALID_PARAM;
        }

        if (sendBufSize < func_020c176c()) {
            return WM_ERRCODE_INVALID_PARAM;
        }
    }

    func_020c0f94(WM_APIID_START_MP, callback);

    {
        WMStartMPReq Req;

        func_020ba6f0(0, (&Req), (sizeof(Req)));

        Req.apiid       = WM_APIID_START_MP;
        Req.recvBuf     = (u32 *) recvBuf;
        Req.recvBufSize = (u32) (recvBufSize / 2);
        Req.sendBuf     = (u32 *) sendBuf;
        Req.sendBufSize = (u32) sendBufSize;

        func_020ba6f0(0, (&Req.param), (sizeof(Req.param)));
        func_020ba70c((tmpParam), (&Req.tmpParam), (sizeof(Req.tmpParam)));

        result = func_020c10b0(&Req, sizeof(Req));
        if ((result) != WM_ERRCODE_SUCCESS) {
            return (result);
        };
    }

    return WM_ERRCODE_OPERATING;
}
