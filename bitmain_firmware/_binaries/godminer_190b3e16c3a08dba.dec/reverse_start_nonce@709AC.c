int __fastcall reverse_start_nonce(int a1, int a2)
{
  char v5[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "%s...", "reverse_start_nonce");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "reverse_start_nonce",
    19,
    194,
    20,
    v5);
  sub_6E63C(a1, 203, a2);
  usleep(0x2710u);
  return 0;
}
