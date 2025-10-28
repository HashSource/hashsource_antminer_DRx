int __fastcall open_core_dram_clk(int a1)
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
  HIWORD(v2) = (unsigned int)":" >> 16;
  V_INT((int)v7, v2, *(int *)(a1 + 256));
  LOWORD(v3) = 9620;
  HIWORD(v3) = (unsigned int)"08x" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, v3);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, "open_core_dram_clk", 18, 1431, 60, v9);
  sub_A4520(a1, 15, 3);
  usleep(0x2710u);
  sub_A4520(a1, 9, 7);
  usleep(0x2710u);
  return 0;
}
