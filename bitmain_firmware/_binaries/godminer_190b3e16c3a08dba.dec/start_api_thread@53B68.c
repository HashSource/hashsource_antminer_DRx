int start_api_thread()
{
  int v0; // r5
  char v2[4100]; // [sp+10h] [bp-1004h] BYREF

  dword_18D6D8 = 3;
  pthread_attr_init((pthread_attr_t *)&dword_18D6DC[1]);
  v0 = pthread_create(
         dword_18D6DC,
         (const pthread_attr_t *)&dword_18D6DC[1],
         (void *(*)(void *))sub_53A64,
         &dword_18D6D8);
  pthread_attr_destroy((pthread_attr_t *)&dword_18D6DC[1]);
  if ( !v0 )
    return 0;
  V_LOCK();
  logfmt_raw(v2, 0x1000u, 0, 1370752);
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
