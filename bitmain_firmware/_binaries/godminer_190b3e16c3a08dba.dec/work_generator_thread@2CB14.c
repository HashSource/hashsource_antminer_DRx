void __noreturn work_generator_thread()
{
  int v0; // r5
  int *all_created_runtime; // r6
  int *v2; // r0
  unsigned __int64 v3; // r2
  int v4; // t1
  unsigned __int64 v5; // r8
  int v6; // r9
  char *v7; // r7
  int v8; // r0
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v10; // r7
  int v11; // r0
  int v12; // r12
  int v13; // r6
  char *v14; // r8
  int v15; // r2
  time_t v16; // r0
  int v17; // r3
  int v18; // t1
  unsigned __int64 *v19; // r2
  int v20; // r12
  int v21; // r3
  unsigned __int64 v22; // r6
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r0
  unsigned __int64 v25; // t1
  bool v26; // cf
  int v27; // r12
  int v28; // r0
  void *v29; // r0
  int lock; // r2
  const char *spins; // r0
  int v32; // [sp+1Ch] [bp-14B0h]
  int v33; // [sp+20h] [bp-14ACh]
  char *v34; // [sp+38h] [bp-1494h]
  int v35; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v36; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v38[512]; // [sp+4C8h] [bp-1004h] BYREF

  v35 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v35);
  memset(s, 0, sizeof(s));
  if ( v35 <= 0 )
  {
    v33 = 0;
    v32 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = -1;
    do
    {
      v4 = *v2++;
      v5 = *(_QWORD *)(v4 + 944);
      if ( v3 > v5 )
        v3 = v5;
    }
    while ( &all_created_runtime[v35] != v2 );
    v33 = (int)v3 / 1000000;
    v32 = 1000 * ((int)v3 % 1000000);
  }
  v6 = 0;
  v7 = (char *)calloc(1u, 0x40u);
  snprintf(v7, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  v8 = syscall(224);
  logfmt_raw((char *)v38, 0x1000u, 0, "%s on pid %ld", v7, v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/god-miner.c",
    139,
    "work_generator_thread",
    21,
    203,
    40,
    v38);
  v34 = (char *)(all_created_runtime - 1);
  prctl(15, v7);
  clock_gettime(1, (struct timespec *)&send_job_timer);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v10 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK();
      logfmt_raw((char *)v38, 0x1000u, (int)v10, "work generator: current pool is NULL");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "work_generator_thread",
        21,
        222,
        20,
        v38);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v10[79].__size[8]) )
        goto LABEL_37;
      clock_gettime(1, v38);
      v36.tv_nsec = (v32 + v38[0].tv_nsec) % 1000000000;
      v36.tv_sec = (v32 + v38[0].tv_nsec) / 1000000000 + v38[0].tv_sec + v33;
      v11 = pool_twait_to_be_expected_and_set((int)v10, &v10[79].__size[20], 1, 0, &v36);
      if ( v11 == 1 )
        break;
      if ( v11 == 110 )
      {
        V_LOCK();
        logfmt_raw((char *)v38, 0x1000u, 0, "Wait for new job timeout");
        V_UNLOCK();
        v12 = 238;
      }
      else
      {
        V_LOCK();
        logfmt_raw((char *)v38, 0x1000u, 0, "New job has come");
        V_UNLOCK();
        v12 = 240;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "work_generator_thread",
        21,
        v12,
        20,
        v38);
      pthread_mutex_lock((pthread_mutex_t *)((char *)v10 + 1592));
      if ( pool_tget(v10, (unsigned __int8 *)&v10[66]) )
      {
        pthread_mutex_unlock((pthread_mutex_t *)((char *)v10 + 1592));
        V_LOCK();
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          v10[65].__spins,
          (unsigned __int8)v10[66].__size[0]);
        V_UNLOCK();
        v27 = 246;
        v28 = g_zc;
        goto LABEL_36;
      }
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 36))(s, v10) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          v10->__lock,
          v10[65].__spins);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "work_generator_thread",
          21,
          253,
          20,
          v38);
        v29 = (void *)s[281];
        lock = v10[68].__lock;
        ++*(_QWORD *)&total_getworks;
        v10[68].__lock = lock + 1;
        if ( v29 )
        {
          free(v29);
          s[281] = 0;
        }
        v6 = 1;
        memcpy(s, &v10[19], sizeof(s));
        spins = (const char *)v10[65].__spins;
        if ( spins )
          s[281] = _strdup(spins);
      }
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v10 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      if ( v35 > 0 )
      {
        v13 = 0;
        v14 = v34;
        do
        {
          if ( v13 )
            v15 = 0;
          else
            v15 = v6;
          ++v13;
          (**(void (__fastcall ***)(_DWORD *, pthread_mutex_t *, int))(v0 + 72))(s, v10, v15);
          ++local_work;
          v16 = time(0);
          v17 = *(_DWORD *)(v0 + 72);
          last_getwork = v16;
          v18 = *((_DWORD *)v14 + 1);
          v14 += 4;
          (*(void (__fastcall **)(int, _DWORD *))(v17 + 4))(v18, s);
        }
        while ( v35 > v13 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v6 )
      {
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18D03C) / 1000000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "work_generator_thread",
          21,
          277,
          20,
          v38);
      }
      else
      {
        logfmt_raw(
          (char *)v38,
          0x1000u,
          0,
          "Updated job pushed after %lld ms",
          1000LL * (tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18D03C) / 1000000);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/god-miner.c",
          139,
          "work_generator_thread",
          21,
          279,
          20,
          v38);
      }
      clock_gettime(1, &tp);
      v19 = max_timeout_value;
      v20 = 0;
      v21 = 0;
      v22 = -1;
      v23 = (int)&loc_F4240 * (__int64)(tp.tv_sec - send_job_timer) + (tp.tv_nsec - dword_18D03C) / 1000;
      do
      {
        v25 = *v19++;
        v24 = v25;
        v26 = v25 >= v22;
        if ( v25 < v22 )
          v20 = v21;
        ++v21;
        if ( !v26 )
          v22 = v24;
      }
      while ( v21 != 10 );
      if ( v23 > v22 )
        max_timeout_value[v20] = v23;
      v6 = 0;
      clock_gettime(1, (struct timespec *)&send_job_timer);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v10 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    V_LOCK();
    logfmt_raw((char *)v38, 0x1000u, 0, "pool has been changed");
    V_UNLOCK();
    v27 = 234;
    v28 = g_zc;
LABEL_36:
    zlog(
      v28,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "work_generator_thread",
      21,
      v27,
      20,
      v38);
LABEL_37:
    sleep(0);
  }
}
