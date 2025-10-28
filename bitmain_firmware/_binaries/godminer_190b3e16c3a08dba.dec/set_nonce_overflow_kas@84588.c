int __fastcall set_nonce_overflow_kas(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s %u...", "set_nonce_overflow_kas", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_nonce_overflow_kas",
    22,
    135,
    40,
    v5);
  sub_828BC(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
