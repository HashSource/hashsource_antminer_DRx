int __fastcall set_data_preemptive(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = -17656;
  HIWORD(v2) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v5) = -14172;
  HIWORD(v5) = (unsigned int)": %d" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 2824);
  V_UNLOCK();
  LOWORD(v6) = 20532;
  HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v7) = -14448;
  HIWORD(v7) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v6, v7, 171, v2 + 2844, 19, 936, 20, v9);
  sub_78DDC(a1, 204, a2);
  usleep(0x2710u);
  return 0;
}
