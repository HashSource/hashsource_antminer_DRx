int start_watchpool_thread()
{
  int v0; // r5
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_1B5120 = 2;
  pthread_attr_init(&attr);
  v0 = pthread_create((pthread_t *)&dword_1B5124, &attr, (void *(*)(void *))watchpool_thread, &dword_1B5120);
  pthread_attr_destroy(&attr);
  if ( !v0 )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, 1470308);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_pool.c",
    151,
    "start_watchpool_thread",
    22,
    127,
    100,
    v2);
  return 5;
}
