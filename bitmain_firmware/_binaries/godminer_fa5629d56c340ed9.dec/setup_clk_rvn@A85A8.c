int __fastcall setup_clk_rvn(int a1)
{
  _DWORD v3[7]; // [sp+28h] [bp-1024h] BYREF
  int v4; // [sp+44h] [bp-1008h]
  int v5; // [sp+48h] [bp-1004h] BYREF
  int v6; // [sp+4Ch] [bp-1000h]
  int v7; // [sp+50h] [bp-FFCh]
  int v8; // [sp+54h] [bp-FF8h]

  V_LOCK();
  V_INT((int)v3, "chain", *(int *)(a1 + 260));
  logfmt_raw((char *)&v5, 0x1000u, 0, v4, v3[0], v3[1], v3[2], v3[3], v3[4], v3[5], v3[6], v4, "%s...", "setup_clk_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
    171,
    "setup_clk_rvn",
    13,
    333,
    60,
    &v5);
  v7 = 524289;
  v8 = 0;
  v6 = 0;
  v5 = 1076363553;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v5);
  usleep(0x2710u);
  v7 = 786433;
  v8 = 0;
  v6 = 0;
  v5 = 1076363537;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v5);
  usleep(0x2710u);
  v7 = 14155777;
  v8 = 0;
  v6 = 0;
  v5 = 1077936417;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v5);
  usleep(0x2710u);
  return 0;
}
