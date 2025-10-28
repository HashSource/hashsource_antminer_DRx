int __fastcall set_reset_rvn(int a1)
{
  void (__fastcall *v2)(int, int *); // r3
  void (__fastcall *v3)(int, int *); // r3
  int v5; // [sp+10h] [bp-1000h] BYREF
  int v6; // [sp+14h] [bp-FFCh]
  int v7; // [sp+18h] [bp-FF8h]
  int v8; // [sp+1Ch] [bp-FF4h]

  V_LOCK();
  logfmt_raw((char *)&v5, 0x1000u, 0, "%s...", "set_reset_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
    171,
    "set_reset_rvn",
    13,
    190,
    40,
    &v5);
  v7 = 0;
  v5 = -1414856447;
  v8 = 0;
  v2 = *(void (__fastcall **)(int, int *))(a1 + 240);
  v6 = 0;
  LOBYTE(v7) = 1;
  HIWORD(v7) = 252;
  v2(a1, &v5);
  usleep(0x2710u);
  v7 = 1;
  v8 = 0;
  v6 = 0;
  v5 = 29;
  v3 = *(void (__fastcall **)(int, int *))(a1 + 240);
  HIWORD(v7) = 68;
  v3(a1, &v5);
  usleep(0x2710u);
  v7 = 4456449;
  v8 = 0;
  v6 = 0;
  v5 = 31;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v5);
  usleep(0x2710u);
  v7 = 16515073;
  v8 = 0;
  v6 = 0;
  v5 = -1414856704;
  (*(void (__fastcall **)(int, int *))(a1 + 240))(a1, &v5);
  usleep(0x2710u);
  return 0;
}
