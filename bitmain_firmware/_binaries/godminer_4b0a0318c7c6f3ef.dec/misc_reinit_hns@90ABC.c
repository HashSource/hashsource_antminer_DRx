int __fastcall misc_reinit_hns(int a1)
{
  char *v2; // r1
  int v3; // r4
  _DWORD *v4; // r3
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1020h] BYREF
  int v8; // [sp+44h] [bp-1004h]
  char v9[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 256));
  LOWORD(v3) = -4408;
  HIWORD(v3) = (unsigned int)"addr_KAS_2380" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -4920;
  HIWORD(v5) = (unsigned int)"_hns" >> 16;
  zlog(*v4, v5, 171, "misc_reinit_hns", 15, 551, 40, v9);
  sub_90880(a1);
  return 0;
}
