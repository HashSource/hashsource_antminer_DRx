int __fastcall set_misc_control_kas(int a1)
{
  _DWORD v3[1024]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw((char *)v3, 0x1000u, 0, "%s...", "set_misc_control_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_misc_control_kas",
    20,
    163,
    40,
    v3);
  v3[2] = 1835009;
  v3[3] = 0;
  v3[1] = 0;
  v3[0] = -1068359920;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v3);
  usleep(0x2710u);
  return 0;
}
