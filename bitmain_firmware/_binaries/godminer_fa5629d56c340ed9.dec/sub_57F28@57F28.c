int __fastcall sub_57F28(_QWORD *a1, int *a2)
{
  struct timeval tv; // [sp+10h] [bp-1014h] BYREF
  __int64 v4; // [sp+18h] [bp-100Ch] BYREF
  char v5[4100]; // [sp+20h] [bp-1004h] BYREF

  *a1 = *a2;
  gettimeofday(&tv, 0);
  v4 = tv.tv_usec + (int)&loc_F4240 * tv.tv_sec;
  dword_1978A8 = rand_r((unsigned int *)&v4) & 0xFFFFF00;
  V_LOCK();
  logfmt_raw(v5, 0x1000u, 0, "start_nonce_eth_high: %08x", dword_1978A8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/eth_2282/eth_2282/eth_2282_content.c",
    178,
    "pre_push_work_eth_2282",
    22,
    40,
    20,
    v5);
  return 0;
}
