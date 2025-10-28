int __fastcall disable_mac(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -17656;
  HIWORD(v1) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 + 1412);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, v1 + 1424, 11, 566, 20, v7);
  sub_78DDC(a1, 143, 0);
  usleep(0x2710u);
  return 0;
}
