int __fastcall init_chip_freq(int a1, _DWORD *a2)
{
  int result; // r0
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v4, 0x1000u, 0, "init chip freq, freq_select %d", (unsigned __int16)freq_select);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "init_chip_freq",
    14,
    233,
    40,
    v4);
  result = get_chip_freq((int)v4);
  *a2 = 1;
  return result;
}
