char *add_pool()
{
  char *v0; // r4
  int v1; // r2
  void *v2; // r0
  _DWORD *v3; // r0
  int v4; // lr
  int v6; // r3
  _DWORD *v7; // r6
  int v8; // r1
  int v9; // r3
  int v10; // r1
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x7D0u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    LOWORD(v6) = 3936;
    HIWORD(v6) = (unsigned int)"pool %d extranonce_line1: %s" >> 16;
    LOWORD(v7) = -12376;
    logfmt_raw(v11, 0x1000u, 0, v6);
    HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
    V_UNLOCK();
    zlog(
      *v7,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "add_pool",
      8,
      123,
      100,
      v11);
    V_LOCK();
    LOWORD(v8) = 3972;
    LOWORD(v9) = 944;
    HIWORD(v8) = (unsigned int)"->work.private" >> 16;
    HIWORD(v9) = (unsigned int)"cribe send failed" >> 16;
    logfmt_raw(v11, 0x1000u, 0, v9, v8);
    V_UNLOCK();
    LOWORD(v10) = 3632;
    HIWORD(v10) = (unsigned int)"getdiff:%d" >> 16;
    zlog(*v7, v10, 134, "add_pool", 8, 124, 100, v11);
    exit(1);
  }
  v1 = total_pools;
  v2 = (void *)pools;
  *((_DWORD *)v0 + 1) = total_pools;
  *(_DWORD *)v0 = v1;
  v3 = realloc(v2, 4 * (v1 + 2));
  v4 = total_pools;
  pools = (int)v3;
  ++total_pools;
  v3[v4] = v0;
  *((_DWORD *)v0 + 9) = -1;
  *((_DWORD *)v0 + 11) = 0;
  v0[1648] = 0;
  v0[1656] = 0;
  *((_DWORD *)v0 + 437) = 0;
  *((_DWORD *)v0 + 439) = 0;
  v0[28] = 1;
  *((_QWORD *)v0 + 221) = 0;
  *((_DWORD *)v0 + 444) = 0;
  memset(v0 + 1684, 0, 0x40u);
  *((_QWORD *)v0 + 226) = 0;
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)v0 + 76, 0);
  pthread_condattr_init((pthread_condattr_t *)v0 + 462);
  pthread_condattr_setclock((pthread_condattr_t *)v0 + 462, 1);
  pthread_cond_init((pthread_cond_t *)(v0 + 1856), (const pthread_condattr_t *)v0 + 462);
  pthread_mutex_init((pthread_mutex_t *)v0 + 2, 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1592), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1780), 0);
  pthread_mutex_init((pthread_mutex_t *)(v0 + 1660), 0);
  v0[1904] = 1;
  v0[1916] = 0;
  *((_DWORD *)v0 + 477) = -1;
  return v0;
}
