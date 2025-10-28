int __fastcall serdes_close_ctle(int a1, int a2, unsigned __int8 a3)
{
  char *v5; // r1
  int v6; // r7
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  char v12[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v5) = 27372;
  HIWORD(v5) = (unsigned int)":" >> 16;
  LOWORD(v6) = -12460;
  HIWORD(v6) = (unsigned int)"%04x reg %02x state %08x" >> 16;
  V_INT((int)v10, v5, *(int *)(a1 + 256));
  logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, "%s ...", v6 + 284);
  V_UNLOCK();
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v8) = -11432;
  HIWORD(v8) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
  zlog(*v7, v8, 174, v6 + 304, 17, 218, 60, v12);
  sub_7F86C(a1, a3, 77, 281022656);
  sub_7F86C(a1, a3, 78, -2144264179);
  sub_7F86C(a1, a3, 77, 281022656);
  sub_7F86C(a1, a3, 78, -2144263667);
  sub_7F86C(a1, a3, 77, 281022656);
  sub_7F86C(a1, a3, 78, -2144263155);
  sub_7F86C(a1, a3, 77, 281022656);
  sub_7F86C(a1, a3, 78, -2144262643);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144264178);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144263666);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144263154);
  sub_7F86C(a1, a3, 77, 0);
  sub_7F86C(a1, a3, 78, -2144262642);
  return 0;
}
