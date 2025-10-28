int __fastcall setup_clk(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  _DWORD v4[7]; // [sp+28h] [bp-1020h] BYREF
  int v5; // [sp+44h] [bp-1004h]
  int v6; // [sp+48h] [bp-1000h] BYREF
  int v7; // [sp+4Ch] [bp-FFCh]
  int v8; // [sp+50h] [bp-FF8h]
  int v9; // [sp+54h] [bp-FF4h]

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 260));
  logfmt_raw((char *)&v6, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "%s...", "setup_clk");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "setup_clk",
    9,
    280,
    60,
    &v6);
  v8 = 2097153;
  v9 = 0;
  v7 = 0;
  v6 = 11;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = 1179649;
  v9 = 0;
  v7 = 0;
  v6 = 276305409;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = 1310721;
  v9 = 0;
  v7 = 0;
  v6 = 272381185;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  sub_79D84(a1, 240, 0x80000000);
  usleep(0x2710u);
  v8 = 1441793;
  v9 = 0;
  v7 = 0;
  v6 = -2147483641;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  v8 = 3211265;
  v9 = 0;
  v7 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 280);
  v6 = 0;
  v2(a1, &v6);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
