void __noreturn nonce_submit_thread()
{
  int v0; // r11
  int *all_created_runtime; // r5
  char *v2; // r4
  int v3; // r0
  pthread_t v4; // r0
  int v5; // r6
  int v6; // r4
  const char *v7; // r0
  double v8; // d7
  double v9; // d5
  int v10; // r2
  bool v11; // cf
  double v12; // d7
  int v13; // r1
  int v14; // [sp+14h] [bp-102Ch]
  int v15; // [sp+2Ch] [bp-1014h] BYREF
  void *dest[284]; // [sp+30h] [bp-1010h] BYREF
  _QWORD v17[375]; // [sp+4A0h] [bp-BA0h] BYREF
  char v18[4100]; // [sp+1058h] [bp+18h] BYREF

  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v15);
  v2 = (char *)calloc(1u, 0x40u);
  snprintf(v2, 0x40u, "%.10s_%d", "nonce_submit_thread", 0);
  V_LOCK();
  v3 = syscall(224);
  logfmt_raw(v18, 0x1000u, 0, "%s on pid %ld", v2, v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner.c",
    135,
    "nonce_submit_thread",
    19,
    232,
    40,
    v18);
  prctl(15, v2);
  v4 = pthread_self();
  pthread_detach(v4);
  v5 = *all_created_runtime;
  while ( 1 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int, _QWORD *))(v5 + 44))(v5, v17);
      if ( v17[0] < (unsigned __int64)total_pools )
      {
        v6 = *(_DWORD *)(pools + 4 * LODWORD(v17[0]));
        if ( v6 )
          break;
      }
      V_LOCK();
      logfmt_raw(v18, 0x1000u, 0, "the pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "nonce_submit_thread",
        19,
        252,
        80,
        v18);
    }
    pthread_mutex_lock((pthread_mutex_t *)(v6 + 1592));
    if ( dest[281] )
    {
      free(dest[281]);
      dest[281] = 0;
    }
    memcpy(dest, (const void *)(v6 + 456), sizeof(dest));
    v7 = *(const char **)(v6 + 1580);
    if ( v7 )
      dest[281] = _strdup(v7);
    v14 = (*(int (__fastcall **)(void **, int, _QWORD *))(*(_DWORD *)(v0 + 72) + 8))(dest, v6, v17);
    pthread_mutex_unlock((pthread_mutex_t *)(v6 + 1592));
    if ( v14 == 1 )
    {
      v8 = *(double *)(v6 + 1808);
      v9 = *(double *)(v6 + 1816) + v8;
      v10 = HIDWORD(total_stale);
      v11 = __CFADD__((_DWORD)total_stale, 1);
      v12 = total_diff_stale + v8;
      v13 = *(_DWORD *)(v6 + 1640) + 1;
      LODWORD(total_stale) = total_stale + 1;
      *(_DWORD *)(v6 + 1640) = v13;
      HIDWORD(total_stale) = v11 + v10;
      *(double *)(v6 + 1816) = v9;
      total_diff_stale = v12;
    }
    else
    {
      workio_submit_work((int)dest, (pthread_mutex_t *)v6);
    }
  }
}
