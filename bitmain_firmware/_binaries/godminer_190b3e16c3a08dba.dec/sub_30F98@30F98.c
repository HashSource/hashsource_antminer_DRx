void sub_30F98()
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
  int v35; // r7
  void **v36; // r6
  void *v37; // r0
  void *v38; // t1
  _DWORD *v39; // r8
  int v40; // [sp+10h] [bp-1094h]
  int v41; // [sp+14h] [bp-1090h]
  _DWORD v42[32]; // [sp+20h] [bp-1084h] BYREF
  _DWORD v43[1025]; // [sp+A0h] [bp-1004h] BYREF

  v40 = total_pools;
  V_LOCK();
  logfmt_raw((char *)v43, 0x1000u, 0, "pool_change_function");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/pool.c",
    134,
    "pool_change_function",
    20,
    756,
    20,
    v43);
  v0 = pthread_self();
  pthread_detach(v0);
  if ( dword_18D6AC )
  {
    v41 = 1;
    pthread_cancel(dword_18D6AC);
    dword_18D6AC = 0;
    usleep((__useconds_t)&stru_18698.st_size);
  }
  else
  {
    v41 = 0;
  }
  if ( v40 > 0 )
  {
    v1 = 0;
    do
    {
      v2 = *(_DWORD **)(pools + 4 * v1++);
      V_LOCK();
      logfmt_raw((char *)v43, 0x1000u, 0, "before add pool, pool->pool_no = %d, pool->rpc_url = %s", *v2, v2[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        772,
        20,
        v43);
    }
    while ( v40 != v1 );
  }
  if ( dword_17A1C4 > 0 )
  {
    v3 = (char *)&unk_17A1C8;
    v4 = 0;
    do
    {
      v5 = sub_302F4();
      ++v4;
      sub_2FC68((void **)(v5 + 12), (_BYTE *)(v5 + 28), v3);
      set_user(v3 + 256);
      v6 = v3 + 512;
      v3 += 768;
      set_pass(v6);
    }
    while ( dword_17A1C4 > v4 );
  }
  if ( total_pools == v40 )
  {
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "Input pool error, try again");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      782,
      100,
      v43);
  }
  else
  {
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "total_pools = %d, need to remove %d pools", total_pools, v40);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      786,
      20,
      v43);
    if ( total_pools > 0 )
    {
      v7 = 0;
      do
      {
        v8 = *(_DWORD **)(pools + 4 * v7++);
        V_LOCK();
        logfmt_raw((char *)v43, 0x1000u, 0, "after add pool, pool->pool_no = %d, pool->rpc_url = %s", *v8, v8[3]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "pool_change_function",
          20,
          789,
          20,
          v43);
      }
      while ( total_pools > v7 );
    }
    if ( v40 > 0 )
    {
      v9 = (pthread_mutex_t **)v42;
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
        --dword_17A0A0;
        --dword_17A09C;
        --dword_17A098;
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
          while ( lock != v15 );
        }
        *v9++ = v12;
        v12->__lock = v14;
        v10 += 48;
        total_pools = v14 - 1;
      }
      while ( v9 != &v42[v40] );
    }
    v43[0] = 0;
    all_created_runtime = (int *)get_all_created_runtime(v43);
    if ( v43[0] > 0 )
    {
      v25 = &all_created_runtime[v43[0]];
      do
      {
        v26 = *all_created_runtime++;
        v27 = v26 + 495;
        v28 = v26 + 527;
        do
          *(_BYTE *)++v27 = 1;
        while ( v28 != v27 );
      }
      while ( v25 != all_created_runtime );
    }
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "total_pools after removed = %d", total_pools);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      814,
      20,
      v43);
    if ( total_pools > 0 )
    {
      v29 = 0;
      do
      {
        v30 = *(_DWORD **)(pools + 4 * v29++);
        V_LOCK();
        logfmt_raw((char *)v43, 0x1000u, 0, "after reload pool, pool->pool_no = %d, pool->rpc_url = %s", *v30, v30[3]);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "pool_change_function",
          20,
          817,
          20,
          v43);
      }
      while ( total_pools > v29 );
    }
    V_LOCK();
    logfmt_raw((char *)v43, 0x1000u, 0, "reload new pool configuration, check pool connect");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "pool_change_function",
      20,
      820,
      40,
      v43);
    sleep(5u);
    v31 = (unsigned __int8)byte_17A1C0;
    if ( byte_17A1C0 )
    {
      create_pool_stratum_threads();
    }
    else if ( check_pools_valid() <= 0 )
    {
      V_LOCK();
      logfmt_raw((char *)v43, 0x1000u, v31, "no new pools could be valid");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        831,
        40,
        v43);
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
      logfmt_raw((char *)v43, 0x1000u, v34, "error pool input");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        845,
        100,
        v43);
      if ( total_pools > 0 )
      {
        do
        {
          v39 = *(_DWORD **)(pools + 4 * v34++);
          V_LOCK();
          logfmt_raw((char *)v43, 0x1000u, 0, "pool%d, url = %s, user = %s, pass = %s", *v39, v39[3], v39[4], v39[5]);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/pool.c",
            134,
            "pool_change_function",
            20,
            848,
            100,
            v43);
        }
        while ( total_pools > v34 );
      }
    }
  }
  if ( v41 )
  {
    dword_18D6A8 = 2;
    pthread_attr_init(&attr);
    v35 = pthread_create((pthread_t *)&dword_18D6AC, &attr, (void *(*)(void *))watchpool_thread, &dword_18D6A8);
    pthread_attr_destroy(&attr);
    if ( v35 )
    {
      V_LOCK();
      logfmt_raw((char *)v43, 0x1000u, 0, "watchpool thread create failed!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "pool_change_function",
        20,
        858,
        100,
        v43);
      exit(1);
    }
  }
  sleep(0xAu);
  if ( v40 > 0 )
  {
    v36 = (void **)v42;
    do
    {
      v38 = *v36++;
      v37 = v38;
      if ( v38 )
        free(v37);
    }
    while ( &v42[v40] != v36 );
  }
  newthread = 0;
}
