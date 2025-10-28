int sub_61280()
{
  char v1[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  logfmt_raw(
    v1,
    0x1000u,
    0,
    "%s, %d bad json format",
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/miner_6060info.c",
    173);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/miner_6060info.c",
    169,
    "miner_6060info_errorcode_init",
    29,
    173,
    100,
    v1);
  pthread_mutex_unlock(&stru_197BC4);
  return 0;
}
