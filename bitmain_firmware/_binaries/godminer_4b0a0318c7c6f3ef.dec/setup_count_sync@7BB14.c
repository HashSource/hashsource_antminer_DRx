int __fastcall setup_count_sync(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = -17656;
  HIWORD(v2) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v5) = -14172;
  HIWORD(v5) = (unsigned int)": %d" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 1008);
  V_UNLOCK();
  LOWORD(v6) = 20532;
  HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v7) = -14448;
  HIWORD(v7) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v6, v7, 171, v2 + 1028, 16, 237, 20, v9);
  sub_78F08(a1, a2, 202, 0);
  sub_78F08(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_78F08(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  get_count_sync(a1, a2);
  return 0;
}
