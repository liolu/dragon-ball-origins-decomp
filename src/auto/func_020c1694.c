/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207cdb8 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_system.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern u32 func_020ba034(void);
extern u32 func_020ba048(u32 state);
extern void func_020ba820(void *dest, u8 value, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
typedef struct UnkWmStatus {
    u16 state;
    u8 unk_002[0xa];
    u32 unk_00c;
    u8 unk_010[0x2c];
    u16 unk_03c;
    u16 unk_03e;
    u8 unk_040[0x32];
    u16 unk_072;
    u8 unk_074[0x8];
    u32 unk_07c;
    u8 unk_080[0x6];
    u16 unk_086;
    u8 unk_088[0x14];
    u16 unk_09c;
    u8 unk_09e[0x1e];
    u16 unk_0bc;
    u8 unk_0be[0x8];
    u16 unk_0c6;
    u8 unk_0c8[0x30];
    u16 unk_0f8;
    u8 unk_0fa[0x88];
    u16 unk_182;
    u8 unk_184[0x4];
    u16 unk_188;
} UnkWmStatus;
typedef struct UnkWmArm9Buf {
    void *unk_000;
    UnkWmStatus *status;
    void *unk_008;
    void *unk_00c;
    void *unk_010;
    u16 dmaNo;
    u16 unk_016;
    UnkWmCallbackFunc callbackTable[0x2c];
    UnkWmCallbackFunc indCallback;
    UnkWmCallbackFunc portCallbackTable[16];
    void *portCallbackArgument[16];
    u32 connectedAidBitmap;
    u16 myAid;
} UnkWmArm9Buf;
typedef struct UnkWmPortRecvCallback {
    u16 apiid;
    u16 errcode;
    u16 state;
    u16 port;
    u16 *recvBuf;
    u16 *data;
    u16 length;
    u16 aid;
    u8 macAddress[6];
    u16 seqNo;
    void *arg;
    u16 myAid;
    u16 connectedAidBitmap;
    u8 ssid[24];
    u16 reason;
    u16 rssi;
    u16 maxSendDataSize;
    u16 maxRecvDataSize;
} UnkWmPortRecvCallback;
extern UnkWmArm9Buf *func_020c1120(void);
extern u32 func_020c1130(void);
extern u16 func_020c15f0(void);
extern u16 func_020c1620(void);
extern u32 func_020c1694(u16 port, UnkWmCallbackFunc callback, void *arg);
UnkWmArm9Buf *func_020c1120(void);
u32 func_020c1130(void);
u16 func_020c15f0(void);
u16 func_020c1620(void);
u32 func_020c1694(u16 port, UnkWmCallbackFunc callback, void *arg) {
    u32 enabled;
    u32 result;
    UnkWmArm9Buf *p;
    UnkWmPortRecvCallback cbParam;

    if (callback) {
        func_020ba820(&cbParam, 0, sizeof(UnkWmPortRecvCallback));
        cbParam.apiid   = 0x82;
        cbParam.errcode = 0;
        cbParam.state   = 0x19;
        cbParam.port    = port;
        cbParam.recvBuf = 0;
        cbParam.data    = 0;
        cbParam.length  = 0;
        cbParam.seqNo   = 0xffff;
        cbParam.arg     = arg;
        cbParam.aid     = 0;
        func_020ba154(cbParam.macAddress);
    }

    enabled = func_020ba034();
    result  = func_020c1130();
    if (result != 0) {
        func_020ba048(enabled);
        return result;
    }
    p                             = func_020c1120();
    p->portCallbackTable[port]    = callback;
    p->portCallbackArgument[port] = arg;
    if (callback) {
        cbParam.connectedAidBitmap = func_020c1620();
        cbParam.myAid              = func_020c15f0();
        callback(&cbParam);
    }
    func_020ba048(enabled);
    return 0;
}
