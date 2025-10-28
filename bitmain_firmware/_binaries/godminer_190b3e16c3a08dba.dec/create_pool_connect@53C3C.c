int create_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v6; // r3
  _DWORD *v7; // r9
  int v8; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r8
  int v15; // r5
  const char *v16; // r6
  bool v17; // zf
  bool v18; // r0
  int v19; // r3
  int v20; // r1
  char *all_created_runtime; // r0
  int v22; // r3
  char *v23; // r4
  int v24; // t1
  int v25; // r3
  int v26; // r1
  const char *v27; // r1
  int v28; // [sp+14h] [bp-1010h]
  _DWORD v29[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    LOWORD(v2) = 3904;
    HIWORD(v2) = (unsigned int)"eed_hash_ptr in parse_notify" >> 16;
    logfmt_raw((char *)v29, 0x1000u, 0, v2);
    V_UNLOCK();
    LOWORD(v3) = -12376;
    HIWORD(v3) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v4) = -5712;
    HIWORD(v4) = (unsigned int)&unk_1498F4 >> 16;
    zlog(*v3, v4, 151, "create_pool_connect", 19, 153, 100, v29);
    return 1;
  }
  else
  {
    v1 = 60;
    do
    {
      sleep(1u);
      if ( pools_active )
        return 0;
      --v1;
    }
    while ( v1 );
    V_LOCK();
    LOWORD(v6) = -5352;
    HIWORD(v6) = (unsigned int)&unk_149A5C >> 16;
    LOWORD(v7) = -12376;
    logfmt_raw((char *)v29, 0x1000u, 0, v6);
    HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
    V_UNLOCK();
    LOWORD(v8) = -5712;
    HIWORD(v8) = (unsigned int)&unk_1498F4 >> 16;
    zlog(*v7, v8, 151, "create_pool_connect", 19, 165, 100, v29);
    V_LOCK();
    LOWORD(v9) = -5292;
    HIWORD(v9) = (unsigned int)&unk_149A98 >> 16;
    logfmt_raw((char *)v29, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v10) = -5712;
    HIWORD(v10) = (unsigned int)&unk_1498F4 >> 16;
    zlog(*v7, v10, 151, "create_pool_connect", 19, 166, 100, v29);
    V_LOCK();
    LOWORD(v11) = -5216;
    HIWORD(v11) = (unsigned int)&unk_149AE4 >> 16;
    logfmt_raw((char *)v29, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v12) = -5712;
    HIWORD(v12) = (unsigned int)&unk_1498F4 >> 16;
    zlog(*v7, v12, 151, "create_pool_connect", 19, 167, 100, v29);
    if ( total_pools > 0 )
    {
      LOWORD(v13) = -5476;
      HIWORD(v13) = (unsigned int)&unk_1499E0 >> 16;
      v28 = v13;
      LOWORD(v13) = -5712;
      HIWORD(v13) = (unsigned int)&unk_1498F4 >> 16;
      v14 = v13;
      do
      {
        v15 = *(_DWORD *)(pools + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v29,
          0x1000u,
          0,
          v28,
          *(_DWORD *)v15,
          *(_DWORD *)(v15 + 12),
          *(_DWORD *)(v15 + 16),
          *(_DWORD *)(v15 + 20));
        V_UNLOCK();
        zlog(*v7, v14, 151, "create_pool_connect", 19, 173, 80, v29);
        if ( *(_DWORD *)(v15 + 20) )
        {
          v16 = *(const char **)(v15 + 16);
          if ( v16 )
          {
            v17 = strstr(*(const char **)(v15 + 20), "stats") == 0;
            v18 = 1;
            if ( v17 )
            {
              LOWORD(v27) = -5432;
              HIWORD(v27) = (unsigned int)&unk_149A0C >> 16;
              v18 = strcmp(v16, v27) == 0;
            }
            *(_BYTE *)(v15 + 1648) = v18;
          }
        }
        ++v1;
      }
      while ( total_pools > v1 );
      pool_stratum_threads = 0;
    }
    V_LOCK();
    LOWORD(v19) = -5420;
    HIWORD(v19) = (unsigned int)&unk_149A18 >> 16;
    logfmt_raw((char *)v29, 0x1000u, 0, v19);
    V_UNLOCK();
    LOWORD(v20) = -5712;
    HIWORD(v20) = (unsigned int)&unk_1498F4 >> 16;
    zlog(*v7, v20, 151, "create_pool_connect", 19, 179, 100, v29);
    v29[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v29);
    v22 = v29[0];
    if ( v29[0] > 0 )
    {
      v23 = all_created_runtime - 4;
      do
      {
        v24 = *((_DWORD *)v23 + 1);
        v23 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v24 + 20))();
        (*(void (**)(void))(*(_DWORD *)v23 + 28))();
        v22 = v29[0];
      }
      while ( pool_stratum_threads < v29[0] );
    }
    if ( v22 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !pools_active )
      sleep(1u);
    V_LOCK();
    LOWORD(v25) = -5392;
    HIWORD(v25) = (unsigned int)&unk_149A34 >> 16;
    logfmt_raw((char *)v29, 0x1000u, 0, v25);
    V_UNLOCK();
    LOWORD(v26) = -5712;
    HIWORD(v26) = (unsigned int)&unk_1498F4 >> 16;
    zlog(*v7, v26, 151, "create_pool_connect", 19, 181, 80, v29);
    return 0;
  }
}
