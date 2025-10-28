int __fastcall setup_count_sync_kas(int a1, unsigned __int8 a2)
{
  char v5[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "setup_count_sync_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "setup_count_sync_kas",
    20,
    303,
    20,
    v5);
  sub_82900(a1, a2, 202, 0);
  sub_82900(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_82900(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
