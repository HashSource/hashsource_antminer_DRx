char *add_pool()
{
  char *v0; // r4
  int v1; // r6
  int v2; // r2
  void *v3; // r0
  _DWORD *v4; // r0
  int v5; // lr
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  v0 = (char *)calloc(0x7D0u, 1u);
  if ( !v0 )
  {
    V_LOCK();
    LOWORD(v7) = -30664;
    HIWORD(v7) = (unsigned int)"%s" >> 16;
    logfmt_raw(v10, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = 20532;
    HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v9) = -30968;
    HIWORD(v9) = (unsigned int)"d = %d" >> 16;
    zlog(*v8, v9, 134, "add_pool", 8, 127, 100, v10);
    set_miner_6060info_malloc_failed_err(1);
    exit(1);
  }
  LOWORD(v1) = 23056;
  HIWORD(v1) = (unsigned int)&mutex.__count >> 16;
  v2 = *(_DWORD *)(v1 + 0x50);
  v3 = *(void **)(v1 + 0x54);
  *((_DWORD *)v0 + 1) = v2;
  *(_DWORD *)v0 = v2;
  v4 = realloc(v3, 4 * (v2 + 2));
  v5 = *(_DWORD *)(v1 + 0x50);
  *(_DWORD *)(v1 + 0x54) = v4;
  *(_DWORD *)(v1 + 0x50) = v5 + 1;
  v4[v5] = v0;
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
