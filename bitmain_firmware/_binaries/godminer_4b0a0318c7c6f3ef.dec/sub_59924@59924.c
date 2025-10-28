int sub_59924()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "nonce retired");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/rvn/rvn_2044/rvn_2044_content.c",
    173,
    "nonce_pop_handler_rvn_2044",
    26,
    115,
    80,
    v1);
  return 1;
}
