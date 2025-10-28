int __fastcall disable_cores_kas(int a1)
{
  char v3[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v3, 0x1000u, 0, "%s...", "disable_cores_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "disable_cores_kas",
    17,
    761,
    20,
    v3);
  sub_828BC(a1, 160, 0);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
