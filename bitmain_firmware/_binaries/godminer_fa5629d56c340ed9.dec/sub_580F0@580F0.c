int sub_580F0()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(v1, 0x1000u, 0, "nonce retired");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/eth_2282/eth_2282/eth_2282_content.c",
    178,
    "nonce_pop_handler_eth_2282",
    26,
    105,
    20,
    v1);
  return 1;
}
