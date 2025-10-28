int reload_pool()
{
  int result; // r0
  int v1; // r2
  int v2; // r0
  int v3; // r1
  char v4[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( newthread )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "config too fast, pool is changing, please wait");
    V_UNLOCK();
    v1 = 880;
    v2 = g_zc;
    LOWORD(v3) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/pool.c";
LABEL_5:
    HIWORD(v3) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/pool.c" >> 16;
    return zlog(v2, v3, 134, "reload_pool", 11, v1, 100, v4);
  }
  result = pthread_create(&newthread, 0, (void *(*)(void *))sub_30F98, 0);
  if ( result )
  {
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, "Failed to create pool_change_thread");
    V_UNLOCK();
    v1 = 878;
    v2 = g_zc;
    LOWORD(v3) = 3632;
    goto LABEL_5;
  }
  return result;
}
