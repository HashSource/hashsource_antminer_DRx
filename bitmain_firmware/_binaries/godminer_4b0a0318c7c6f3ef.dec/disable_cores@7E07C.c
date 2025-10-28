int __fastcall disable_cores(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -17656;
  HIWORD(v1) = (unsigned int)"get_count_sync" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 + 2600);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -14448;
  HIWORD(v5) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v4, v5, 171, v1 + 2616, 13, 856, 20, v7);
  sub_78DDC(a1, 13, 0);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
