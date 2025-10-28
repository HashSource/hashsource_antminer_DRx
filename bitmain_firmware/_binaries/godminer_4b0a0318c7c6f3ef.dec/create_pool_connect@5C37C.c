int create_pool_connect()
{
  int pool_stratum_threads; // r8
  int v1; // r4
  _BYTE *v2; // r5
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v7; // r3
  _DWORD *v8; // r9
  int v9; // r1
  int *v10; // r10
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r1
  int v15; // r3
  _DWORD *v16; // r11
  int v17; // r8
  int v18; // r5
  const char *v19; // r6
  bool v20; // zf
  bool v21; // r0
  int v22; // r3
  int v23; // r1
  char *all_created_runtime; // r0
  int v25; // r3
  char *v26; // r4
  int v27; // t1
  int v28; // r3
  int v29; // r1
  const char *v30; // r1
  int v31; // [sp+14h] [bp-1010h]
  _BYTE *v32; // [sp+1Ch] [bp-1008h]
  _DWORD v33[1025]; // [sp+20h] [bp-1004h] BYREF

  pool_stratum_threads = create_pool_stratum_threads();
  if ( pool_stratum_threads )
  {
    V_LOCK();
    LOWORD(v3) = -30696;
    HIWORD(v3) = (unsigned int)"JSON decode of file '%s' failed %s" >> 16;
    logfmt_raw((char *)v33, 0x1000u, 0, v3);
    V_UNLOCK();
    LOWORD(v4) = 20532;
    HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v5) = 28340;
    HIWORD(v5) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
    zlog(*v4, v5, 151, "create_pool_connect", 19, 153, 100, v33);
    return 1;
  }
  else
  {
    LOWORD(v2) = 23441;
    v1 = 60;
    HIWORD(v2) = (unsigned int)&unk_195B99 >> 16;
    do
    {
      sleep(1u);
      if ( *v2 )
        return 0;
      --v1;
    }
    while ( v1 );
    V_LOCK();
    LOWORD(v7) = 28700;
    HIWORD(v7) = (unsigned int)"it" >> 16;
    LOWORD(v8) = 20532;
    logfmt_raw((char *)v33, 0x1000u, 0, v7);
    HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v9) = 28340;
    HIWORD(v9) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
    LOWORD(v10) = 23136;
    HIWORD(v10) = (unsigned int)&dword_195A68 >> 16;
    zlog(*v8, v9, 151, "create_pool_connect", 19, 165, 100, v33);
    V_LOCK();
    LOWORD(v11) = 28760;
    HIWORD(v11) = (unsigned int)"_voltage" >> 16;
    logfmt_raw((char *)v33, 0x1000u, 0, v11);
    V_UNLOCK();
    LOWORD(v12) = 28340;
    HIWORD(v12) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
    zlog(*v8, v12, 151, "create_pool_connect", 19, 166, 100, v33);
    V_LOCK();
    LOWORD(v13) = 28836;
    HIWORD(v13) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/power_api.c" >> 16;
    logfmt_raw((char *)v33, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v14) = 28340;
    HIWORD(v14) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
    zlog(*v8, v14, 151, "create_pool_connect", 19, 167, 100, v33);
    if ( *v10 > 0 )
    {
      LOWORD(v15) = 28576;
      HIWORD(v15) = (unsigned int)"_feedback_voltage" >> 16;
      LOWORD(v16) = 23140;
      v31 = v15;
      LOWORD(v15) = 28340;
      HIWORD(v15) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
      v17 = v15;
      v32 = v2;
      do
      {
        HIWORD(v16) = (unsigned int)&dword_195A6C >> 16;
        v18 = *(_DWORD *)(*v16 + 4 * v1);
        V_LOCK();
        logfmt_raw(
          (char *)v33,
          0x1000u,
          0,
          v31,
          *(_DWORD *)v18,
          *(_DWORD *)(v18 + 12),
          *(_DWORD *)(v18 + 16),
          *(_DWORD *)(v18 + 20));
        V_UNLOCK();
        zlog(*v8, v17, 151, "create_pool_connect", 19, 173, 80, v33);
        if ( *(_DWORD *)(v18 + 20) )
        {
          v19 = *(const char **)(v18 + 16);
          if ( v19 )
          {
            v20 = strstr(*(const char **)(v18 + 20), "stats") == 0;
            v21 = 1;
            if ( v20 )
            {
              LOWORD(v30) = 28620;
              HIWORD(v30) = (unsigned int)"by_steps" >> 16;
              v21 = strcmp(v19, v30) == 0;
            }
            *(_BYTE *)(v18 + 1648) = v21;
          }
        }
        ++v1;
      }
      while ( *v10 > v1 );
      pool_stratum_threads = 0;
      v2 = v32;
    }
    V_LOCK();
    LOWORD(v22) = 28632;
    HIWORD(v22) = (unsigned int)"get_working_voltage" >> 16;
    logfmt_raw((char *)v33, 0x1000u, 0, v22);
    V_UNLOCK();
    LOWORD(v23) = 28340;
    HIWORD(v23) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
    zlog(*v8, v23, 151, "create_pool_connect", 19, 179, 100, v33);
    v33[0] = 0;
    all_created_runtime = (char *)get_all_created_runtime(v33);
    v25 = v33[0];
    if ( v33[0] > 0 )
    {
      v26 = all_created_runtime - 4;
      do
      {
        v27 = *((_DWORD *)v26 + 1);
        v26 += 4;
        ++pool_stratum_threads;
        (*(void (**)(void))(v27 + 24))();
        (*(void (**)(void))(*(_DWORD *)v26 + 32))();
        v25 = v33[0];
      }
      while ( pool_stratum_threads < v33[0] );
    }
    if ( v25 )
      fan_pwm_set(0x14u);
    green_led_on();
    red_led_on();
    while ( !*v2 )
      sleep(1u);
    V_LOCK();
    LOWORD(v28) = 28660;
    HIWORD(v28) = (unsigned int)"voltage" >> 16;
    logfmt_raw((char *)v33, 0x1000u, 0, v28);
    V_UNLOCK();
    LOWORD(v29) = 28340;
    HIWORD(v29) = (unsigned int)"kspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/fan_speed_moderator.c" >> 16;
    zlog(*v8, v29, 151, "create_pool_connect", 19, 181, 80, v33);
    return 0;
  }
}
