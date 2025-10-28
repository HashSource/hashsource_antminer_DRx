int __fastcall dag_gen_rvn(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 4600;
  HIWORD(v1) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 + 3944);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v1 + 3956, 11, 2786, 40, v7);
  sub_A4520(a1, 180, 83886046);
  usleep(0x2710u);
  sub_A4520(a1, 164, 62);
  sleep(0xAu);
  cache_dag_done_check_rvn(a1, 160, 2);
  sleep(1u);
  return 0;
}
