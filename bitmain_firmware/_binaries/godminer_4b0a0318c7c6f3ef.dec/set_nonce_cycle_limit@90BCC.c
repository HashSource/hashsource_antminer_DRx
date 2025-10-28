int __fastcall set_nonce_cycle_limit(int a1)
{
  unsigned int v2; // r5
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  _DWORD v8[7]; // [sp+28h] [bp-1024h] BYREF
  int v9; // [sp+44h] [bp-1008h]
  char v10[4100]; // [sp+48h] [bp-1004h] BYREF

  v2 = (unsigned int)(float)((float)(67109000.0 / *(float *)(a1 + 996)) * 12.0);
  sub_8C3A0(a1, 14, HIWORD(v2));
  sub_8C3A0(a1, 15, (unsigned __int16)v2);
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -4392;
  HIWORD(v4) = (unsigned int)"ChipSetting_get_addr_KAS_2380" >> 16;
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = -4920;
  HIWORD(v6) = (unsigned int)"_hns" >> 16;
  zlog(*v5, v6, 171, "set_nonce_cycle_limit", 21, 517, 40, v10);
  return 0;
}
