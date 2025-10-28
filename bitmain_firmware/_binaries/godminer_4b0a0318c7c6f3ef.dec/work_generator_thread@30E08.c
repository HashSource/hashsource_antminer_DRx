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
  time_t *v9; // r12
  int v10; // r3
  time_t *v11; // r8
  struct timespec *v12; // r11
  int v13; // r1
  time_t v14; // r0
  _DWORD *v15; // r10
  char *v16; // r1
  int v17; // r3
  pthread_mutex_t *current_pool; // r0
  pthread_mutex_t *v19; // r7
  int v20; // r0
  int v21; // r3
  int v22; // r2
  int v23; // r1
  int v24; // r6
  char *v25; // r8
  int v26; // r2
  time_t v27; // r0
  int v28; // r3
  int v29; // t1
  int v30; // r2
  int v31; // r1
  int v32; // r12
  unsigned __int64 *v33; // r2
  int v34; // r3
  unsigned __int64 v35; // r6
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r0
  unsigned __int64 v38; // t1
  bool v39; // cf
  struct timespec *v40; // r1
  int v41; // r3
  int v42; // r3
  int v43; // r2
  time_t v44; // r0
  int v45; // r1
  int v46; // r3
  int v47; // r3
  void *v48; // r0
  int lock; // r2
  const char *spins; // r0
  time_t *v51; // [sp+18h] [bp-14B4h]
  int v52; // [sp+1Ch] [bp-14B0h]
  int v53; // [sp+20h] [bp-14ACh]
  char *v54; // [sp+38h] [bp-1494h]
  time_t *v55; // [sp+3Ch] [bp-1490h]
  int v56; // [sp+40h] [bp-148Ch]
  char *v57; // [sp+44h] [bp-1488h]
  int v58; // [sp+4Ch] [bp-1480h] BYREF
  struct timespec v59; // [sp+50h] [bp-147Ch] BYREF
  _DWORD s[284]; // [sp+58h] [bp-1474h] BYREF
  struct timespec v61[512]; // [sp+4C8h] [bp-1004h] BYREF

  v58 = 0;
  v0 = frontend_runtime_instance();
  all_created_runtime = (int *)get_all_created_runtime(&v58);
  memset(s, 0, sizeof(s));
  if ( v58 <= 0 )
  {
    v53 = 0;
    v52 = -1000;
  }
  else
  {
    v2 = all_created_runtime;
    v3 = -1;
    do
    {
      v4 = *v2++;
      v5 = *(_QWORD *)(v4 + 1016);
      if ( v3 > v5 )
        v3 = v5;
    }
    while ( &all_created_runtime[v58] != v2 );
    v53 = (int)v3 / 1000000;
    v52 = 1000 * ((int)v3 % 1000000);
  }
  v6 = 0;
  v7 = (char *)calloc(1u, 0x40u);
  snprintf(v7, 0x40u, "%.10s_%d", "work_generator_thread", 0);
  V_LOCK();
  LOWORD(v12) = 21216;
  v8 = syscall(224);
  LOWORD(v9) = 20532;
  LOWORD(v10) = -31520;
  HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v10) = (unsigned int)"URL -- '%s'" >> 16;
  v11 = v9;
  v51 = v9;
  HIWORD(v12) = (unsigned int)&tp >> 16;
  logfmt_raw((char *)v61, 0x1000u, 0, v10, v7, v8);
  V_UNLOCK();
  LOWORD(v13) = -31728;
  v14 = *v11;
  HIWORD(v13) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
  LOWORD(v11) = 20612;
  LOWORD(v15) = 20652;
  zlog(v14, v13, 135, "work_generator_thread", 21, 112, 40, v61);
  v16 = v7;
  v54 = (char *)(all_created_runtime - 1);
  LOWORD(v7) = 20632;
  prctl(15, v16);
  LOWORD(v17) = 22968;
  HIWORD(v17) = (unsigned int)&unk_1959C0 >> 16;
  v56 = v17;
  HIWORD(v7) = (unsigned int)&total_diff_stale >> 16;
  v57 = v7;
  HIWORD(v11) = (unsigned int)algn_1B508C >> 16;
  v55 = v11;
  clock_gettime(1, v12);
  while ( 1 )
  {
LABEL_9:
    while ( 1 )
    {
      current_pool = (pthread_mutex_t *)get_current_pool();
      v19 = current_pool;
      if ( current_pool )
        break;
LABEL_34:
      V_LOCK();
      LOWORD(v41) = -31504;
      HIWORD(v41) = (unsigned int)"tum+tcp://%s" >> 16;
      logfmt_raw((char *)v61, 0x1000u, (int)v19, v41);
      V_UNLOCK();
      zlog(
        *v51,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner.c",
        135,
        "work_generator_thread",
        21,
        133,
        20,
        v61);
    }
    while ( 1 )
    {
      if ( pool_tget(current_pool, (unsigned __int8 *)&v19[79].__size[8]) )
        goto LABEL_37;
      clock_gettime(1, v61);
      v59.tv_nsec = (v52 + v61[0].tv_nsec) % 1000000000;
      v59.tv_sec = (v52 + v61[0].tv_nsec) / 1000000000 + v61[0].tv_sec + v53;
      v20 = pool_twait_to_be_expected_and_set((int)v19, &v19[79].__size[20], 1, 0, &v59);
      if ( v20 == 1 )
        break;
      if ( v20 == 110 )
      {
        V_LOCK();
        LOWORD(v47) = -31440;
        HIWORD(v47) = (unsigned int)"o malloc pool in add_pool" >> 16;
        logfmt_raw((char *)v61, 0x1000u, 0, v47);
        V_UNLOCK();
        v22 = 153;
      }
      else
      {
        V_LOCK();
        LOWORD(v21) = -31412;
        HIWORD(v21) = (unsigned int)"Switching pool %d to pool %d" >> 16;
        logfmt_raw((char *)v61, 0x1000u, 0, v21);
        V_UNLOCK();
        v22 = 157;
      }
      LOWORD(v23) = -31728;
      HIWORD(v23) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
      zlog(*v51, v23, 135, "work_generator_thread", 21, v22, 20, v61);
      pthread_mutex_lock((pthread_mutex_t *)((char *)v19 + 1592));
      if ( pool_tget(v19, (unsigned __int8 *)&v19[66]) )
      {
        pthread_mutex_unlock((pthread_mutex_t *)((char *)v19 + 1592));
        V_LOCK();
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          "work generator: jobid %p cancel %d",
          v19[65].__spins,
          (unsigned __int8)v19[66].__size[0]);
        V_UNLOCK();
        v43 = 164;
        v44 = *v51;
        goto LABEL_36;
      }
      if ( (*(int (__fastcall **)(_DWORD *, pthread_mutex_t *))(v0 + 36))(s, v19) == 2 )
      {
        V_LOCK();
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          "poolno=%d work generator switched to new job %s",
          v19->__lock,
          v19[65].__spins);
        V_UNLOCK();
        zlog(
          *v51,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/miner.c",
          135,
          "work_generator_thread",
          21,
          172,
          20,
          v61);
        v48 = (void *)s[281];
        lock = v19[68].__lock;
        ++*(_QWORD *)v57;
        v19[68].__lock = lock + 1;
        if ( v48 )
        {
          free(v48);
          s[281] = 0;
        }
        v6 = 1;
        memcpy(s, &v19[19], sizeof(s));
        spins = (const char *)v19[65].__spins;
        if ( spins )
          s[281] = _strdup(spins);
      }
      pthread_mutex_unlock((pthread_mutex_t *)((char *)v19 + 1592));
      if ( !s[281] )
        goto LABEL_9;
      s[274] = v19[3].__owner;
      if ( v58 > 0 )
      {
        v24 = 0;
        v25 = v54;
        do
        {
          if ( v24 )
            v26 = 0;
          else
            v26 = v6;
          ++v24;
          (**(void (__fastcall ***)(_DWORD *, pthread_mutex_t *, int))(v0 + 72))(s, v19, v26);
          HIWORD(v15) = (unsigned int)&dword_1B50B4 >> 16;
          ++*v15;
          v27 = time(0);
          v28 = *(_DWORD *)(v0 + 72);
          *v55 = v27;
          v29 = *((_DWORD *)v25 + 1);
          v25 += 4;
          (*(void (__fastcall **)(int, _DWORD *))(v28 + 4))(v29, s);
        }
        while ( v58 > v24 );
      }
      V_LOCK();
      clock_gettime(1, &tp);
      if ( v6 )
      {
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          "New job pushed after %lld ms",
          1000LL * (v12[1].tv_sec - v12->tv_sec) + (v12[1].tv_nsec - v12->tv_nsec) / 1000000);
        V_UNLOCK();
        v30 = 200;
      }
      else
      {
        LOWORD(v46) = -31276;
        HIWORD(v46) = (unsigned int)"rst!" >> 16;
        logfmt_raw(
          (char *)v61,
          0x1000u,
          0,
          v46,
          1000LL * (v12[1].tv_sec - v12->tv_sec) + (v12[1].tv_nsec - v12->tv_nsec) / 1000000);
        V_UNLOCK();
        v30 = 204;
      }
      LOWORD(v31) = -31728;
      HIWORD(v31) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
      zlog(*v51, v31, 135, "work_generator_thread", 21, v30, 20, v61);
      clock_gettime(1, &tp);
      LOWORD(v33) = 22968;
      v32 = 0;
      HIWORD(v33) = (unsigned int)&unk_1959C0 >> 16;
      v34 = 0;
      v35 = -1;
      v36 = (int)&loc_F4240 * (__int64)(v12[1].tv_sec - v12->tv_sec) + (v12[1].tv_nsec - v12->tv_nsec) / 1000;
      do
      {
        v38 = *v33++;
        v37 = v38;
        v39 = v38 >= v35;
        if ( v38 < v35 )
          v32 = v34;
        ++v34;
        if ( !v39 )
          v35 = v37;
      }
      while ( v34 != 10 );
      if ( v36 > v35 )
        *(_QWORD *)(v56 + 8 * v32) = v36;
      LOWORD(v40) = 21216;
      HIWORD(v40) = (unsigned int)&tp >> 16;
      v6 = 0;
      clock_gettime(1, v40);
      current_pool = (pthread_mutex_t *)get_current_pool();
      v19 = current_pool;
      if ( !current_pool )
        goto LABEL_34;
    }
    V_LOCK();
    LOWORD(v42) = -31464;
    HIWORD(v42) = (unsigned int)"reate failed" >> 16;
    logfmt_raw((char *)v61, 0x1000u, 0, v42);
    V_UNLOCK();
    v43 = 147;
    v44 = *v51;
LABEL_36:
    LOWORD(v45) = -31728;
    HIWORD(v45) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/pool.c" >> 16;
    zlog(v44, v45, 135, "work_generator_thread", 21, v43, 20, v61);
LABEL_37:
    sleep(0);
  }
}
