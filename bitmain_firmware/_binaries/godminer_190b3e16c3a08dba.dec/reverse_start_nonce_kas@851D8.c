int __fastcall reverse_start_nonce_kas(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "reverse_start_nonce_kas");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "reverse_start_nonce_kas",
    23,
    267,
    20,
    v5);
  sub_828BC(a1, 31, a2);
  usleep(0x2710u);
  return 0;
}
