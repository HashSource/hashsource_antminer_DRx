int start_api_thread()
{
  int v0; // r5
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_1B5150 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_1B5154[1]);
  v0 = pthread_create(
         dword_1B5154,
         (const pthread_attr_t *)&dword_1B5154[1],
         (void *(*)(void *))sub_5C1A4,
         &dword_1B5150);
  pthread_attr_destroy((pthread_attr_t *)&dword_1B5154[1]);
  if ( !v0 )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, 1470340);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/check_pool.c",
    151,
    "start_api_thread",
    16,
    139,
    100,
    v2);
  return 5;
}
