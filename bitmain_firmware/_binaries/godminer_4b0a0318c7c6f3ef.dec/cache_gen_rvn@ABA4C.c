int __fastcall cache_gen_rvn(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 4600;
  HIWORD(v1) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 + 3912);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v1 + 3928, 13, 2717, 40, v7);
  sub_A4520(a1, 15, 3);
  usleep(0x2710u);
  sub_A4520(a1, 0, 2);
  usleep(0x2710u);
  sub_A4520(a1, 28, 1);
  usleep(0x2710u);
  sub_A4520(a1, 207, 1);
  usleep(0x2710u);
  sub_A4520(a1, 167, 0);
  usleep(0x2710u);
  sub_A4520(a1, 168, 2099200);
  usleep(0x2710u);
  sub_A4520(a1, 169, 4198400);
  usleep(0x2710u);
  sub_A4520(a1, 170, 6297600);
  usleep(0x2710u);
  sub_A4520(a1, 171, 58720256);
  usleep(0x2710u);
  sub_A4520(a1, 163, (int)&loc_13FFFC + 3);
  usleep(0x2710u);
  sub_A4520(a1, 16, -797724831);
  usleep(0x2710u);
  sub_A4520(a1, 17, 19609895);
  usleep(0x2710u);
  sub_A4520(a1, 18, -227465223);
  usleep(0x2710u);
  sub_A4520(a1, 19, 1512262728);
  usleep(0x2710u);
  sub_A4520(a1, 20, 1604516950);
  usleep(0x2710u);
  sub_A4520(a1, 21, -1358223715);
  usleep(0x2710u);
  sub_A4520(a1, 22, -1806736547);
  usleep(0x2710u);
  sub_A4520(a1, 23, 836938960);
  usleep(0x2710u);
  sub_A4520(a1, 192, 66);
  usleep(0x2710u);
  sub_A4520(a1, 179, 0);
  usleep(0x2710u);
  sub_A4520(a1, 178, 3000);
  sleep(0xAu);
  sub_A4520(a1, 164, 61);
  sleep(0xAu);
  cache_dag_done_check_rvn(a1, 160, 1);
  sleep(1u);
  return 0;
}
