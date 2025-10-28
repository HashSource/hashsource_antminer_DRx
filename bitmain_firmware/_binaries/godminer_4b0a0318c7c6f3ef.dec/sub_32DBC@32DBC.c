int sub_32DBC()
{
  pthread_t v0; // r0
  int v1; // r7
  _DWORD *v2; // r8
  char *v3; // r7
  int v4; // r8
  int v5; // r0
  char *v6; // r0
  int v7; // r7
  _DWORD *v8; // r8
  pthread_mutex_t **v9; // r7
  char *v10; // r10
  pthread_t v11; // r0
  pthread_mutex_t *v12; // r6
  char *v13; // r0
  int v14; // r11
  int v15; // lr
  int *v16; // r2
  int v17; // r12
  int v18; // r1
  int v19; // t1
  signed int v20; // r3
  int lock; // r3
  _DWORD *v22; // r2
  _DWORD *v23; // r1
  int *all_created_runtime; // r0
  int *v25; // r12
  int v26; // t1
  int v27; // r3
  int v28; // r2
  int v29; // r7
  _DWORD *v30; // r8
  int v31; // r9
  int v32; // r7
  int v33; // r3
  int v34; // r7
  int *v35; // r7
  int *v36; // r6
  int v37; // r5
  int v38; // t1
  int v39; // t1
  int v41; // r7
  _DWORD *v42; // r8
  int v43; // [sp+10h] [bp-1094h]
  int v44; // [sp+14h] [bp-1090h]
  _DWORD v45[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v46[1025]; // [sp+A0h] [bp-1004h] BYREF

  v43 = total_pools;
  V_LOCK();
  logfmt_raw((char *)v46, 0x1000u, 0, "pool_change_function");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "pool_change_function",
    20,
    796,
    20,
    v46);
  v0 = pthread_self();
  pthread_detach(v0);
  if ( dword_1B5124 )
  {
    v44 = 1;
    pthread_cancel(dword_1B5124);
    dword_1B5124 = 0;
    usleep((__useconds_t)&stru_186A0);
  }
  else
  {
    v44 = 0;
  }
  if ( v43 > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD **)(pools + 4 * v1++);
      V_LOCK();
      logfmt_raw((char *)v46, 0x1000u, 0, "before add pool, pool->pool_no = %d, pool->rpc_url = %s", *v2, v2[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        812,
        20,
        v46);
    }
    while ( v43 != v1 );
  }
  if ( dword_195B94 > 0 )
  {
    v3 = (char *)&unk_195B98;
    v4 = 0;
    do
    {
      v5 = sub_3202C();
      ++v4;
      sub_319F0((void **)(v5 + 12), (_BYTE *)(v5 + 28), v3);
      set_user(v3 + 256);
      v6 = v3 + 512;
      v3 += 768;
      set_pass(v6);
    }
    while ( dword_195B94 > v4 );
  }
  if ( total_pools == v43 )
  {
    V_LOCK();
    logfmt_raw((char *)v46, 0x1000u, 0, "Input pool error, try again");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      822,
      100,
      v46);
    if ( !v44 )
      goto LABEL_47;
    goto LABEL_57;
  }
  V_LOCK();
  logfmt_raw((char *)v46, 0x1000u, 0, "total_pools = %d, need to remove %d pools", total_pools, v43);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "pool_change_function",
    20,
    826,
    20,
    v46);
  if ( total_pools > 0 )
  {
    v7 = 0;
    do
    {
      v8 = *(_DWORD **)(pools + 4 * v7++);
      V_LOCK();
      logfmt_raw((char *)v46, 0x1000u, 0, "after add pool, pool->pool_no = %d, pool->rpc_url = %s", *v8, v8[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        829,
        20,
        v46);
    }
    while ( total_pools > v7 );
  }
  if ( v43 > 0 )
  {
    v9 = (pthread_mutex_t **)v45;
    v10 = (char *)&stratum_thr_info;
    do
    {
      v11 = *((_DWORD *)v10 + 1);
      v12 = *(pthread_mutex_t **)pools;
      if ( v11 )
      {
        pthread_cancel(v11);
        *((_DWORD *)v10 + 1) = 0;
      }
      v13 = (char *)*((_DWORD *)v10 + 11);
      if ( v13 )
      {
        tq_free(v13);
        *((_DWORD *)v10 + 11) = 0;
      }
      pthread_mutex_lock(v12 + 76);
      v12[79].__size[20] = 0;
      pthread_mutex_unlock(v12 + 76);
      pthread_mutex_lock(v12 + 76);
      v12[79].__size[8] = 1;
      pthread_mutex_unlock(v12 + 76);
      v14 = total_pools;
      v15 = total_pools - 1;
      --dword_195A70;
      --dword_195A6C;
      --dword_195A68;
      if ( total_pools > 0 )
      {
        v16 = (int *)pools;
        v17 = pools + 4 * total_pools;
        do
        {
          v19 = *v16++;
          v18 = v19;
          v20 = *(_DWORD *)(v19 + 4);
          if ( v20 > (signed int)v12->__count )
            *(_DWORD *)(v18 + 4) = v20 - 1;
        }
        while ( (int *)v17 != v16 );
      }
      lock = v12->__lock;
      if ( v15 > v12->__lock )
      {
        v22 = (_DWORD *)(pools + 4 * lock);
        do
        {
          v23 = (_DWORD *)v22[1];
          *v22++ = v23;
          *v23 = lock++;
        }
        while ( v15 != lock );
      }
      *v9++ = v12;
      v12->__lock = v14;
      v10 += 48;
      total_pools = v14 - 1;
    }
    while ( v9 != &v45[v43] );
  }
  v46[0] = 0;
  all_created_runtime = (int *)get_all_created_runtime(v46);
  if ( v46[0] > 0 )
  {
    v25 = &all_created_runtime[v46[0]];
    do
    {
      v26 = *all_created_runtime++;
      v27 = v26 + 551;
      v28 = v26 + 583;
      do
        *(_BYTE *)++v27 = 1;
      while ( v28 != v27 );
    }
    while ( v25 != all_created_runtime );
  }
  V_LOCK();
  logfmt_raw((char *)v46, 0x1000u, 0, "total_pools after removed = %d", total_pools);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "pool_change_function",
    20,
    854,
    20,
    v46);
  if ( total_pools > 0 )
  {
    v29 = 0;
    do
    {
      v30 = *(_DWORD **)(pools + 4 * v29++);
      V_LOCK();
      logfmt_raw((char *)v46, 0x1000u, 0, "after reload pool, pool->pool_no = %d, pool->rpc_url = %s", *v30, v30[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        857,
        20,
        v46);
    }
    while ( total_pools > v29 );
  }
  V_LOCK();
  logfmt_raw((char *)v46, 0x1000u, 0, "reload new pool configuration, check pool connect");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "pool_change_function",
    20,
    860,
    40,
    v46);
  sleep(5u);
  v31 = (unsigned __int8)byte_195B90;
  if ( byte_195B90 )
  {
    create_pool_stratum_threads();
  }
  else if ( check_pools_valid() <= 0 )
  {
    V_LOCK();
    logfmt_raw((char *)v46, 0x1000u, v31, "no new pools could be valid");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      871,
      40,
      v46);
  }
  v32 = 0;
  do
  {
    ++v32;
    sleep(1u);
    if ( v32 == 8 )
      v33 = 0;
    else
      v33 = ((unsigned __int8)pools_active ^ 1) & 1;
  }
  while ( v33 );
  set_miner_start_time();
  api_flush();
  v34 = (unsigned __int8)pools_active;
  if ( !pools_active )
  {
    V_LOCK();
    logfmt_raw((char *)v46, 0x1000u, v34, "error pool input");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      885,
      100,
      v46);
    if ( total_pools > 0 )
    {
      do
      {
        v42 = *(_DWORD **)(pools + 4 * v34++);
        V_LOCK();
        logfmt_raw((char *)v46, 0x1000u, 0, "pool%d, url = %s, user = %s, pass = %s", *v42, v42[3], v42[4], v42[5]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "pool_change_function",
          20,
          888,
          100,
          v46);
      }
      while ( total_pools > v34 );
    }
  }
  if ( v44 )
  {
LABEL_57:
    dword_1B5120 = 2;
    pthread_attr_init(&attr);
    v41 = pthread_create((pthread_t *)&dword_1B5124, &attr, (void *(*)(void *))watchpool_thread, &dword_1B5120);
    pthread_attr_destroy(&attr);
    if ( v41 )
    {
      V_LOCK();
      logfmt_raw((char *)v46, 0x1000u, 0, "watchpool thread create failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        898,
        100,
        v46);
      exit(1);
    }
  }
LABEL_47:
  if ( v43 <= 0 )
  {
    sleep(0xAu);
  }
  else
  {
    v35 = v45;
    v36 = v45;
    do
    {
      v38 = *v36++;
      v37 = v38;
      if ( v38 )
      {
        pthread_mutex_lock((pthread_mutex_t *)(v37 + 1824));
        *(_BYTE *)(v37 + 1904) = 1;
        pthread_cond_broadcast((pthread_cond_t *)(v37 + 1856));
        pthread_mutex_unlock((pthread_mutex_t *)(v37 + 1824));
      }
    }
    while ( &v45[v43] != v36 );
    sleep(0xAu);
    do
    {
      v39 = *v35++;
      pthread_mutex_lock((pthread_mutex_t *)(v39 + 1824));
      *(_BYTE *)(v39 + 1904) = 1;
      pthread_cond_broadcast((pthread_cond_t *)(v39 + 1856));
      pthread_mutex_unlock((pthread_mutex_t *)(v39 + 1824));
      free((void *)v39);
    }
    while ( v35 != v36 );
  }
  newthread = 0;
  return 0;
}
