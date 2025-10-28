int __fastcall start_mining_ks5(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  _DWORD *v8; // r12
  int v9; // r3
  _DWORD *v10; // r4
  int v11; // r3
  int started; // r10
  _DWORD *v13; // r4
  int (**v14)(void); // t1
  int v15; // r0
  int v16; // r9
  int v17; // r0
  int v18; // r11
  int *v19; // r8
  unsigned int v20; // r0
  int *v21; // r9
  int i; // r4
  int v23; // t1
  int v24; // r9
  _DWORD *v25; // r6
  int *v26; // r10
  int v27; // r4
  int v28; // r3
  int v29; // t1
  int v30; // t1
  int *v31; // r8
  int j; // r4
  int v33; // t1
  int v35; // r1
  const char *v36; // r0
  int v37; // r3
  int v38; // r2
  int v39; // r3
  int v40; // r1
  int v41; // r3
  int v42; // r3
  _DWORD *v43; // [sp+14h] [bp-1010h]
  int v44; // [sp+1Ch] [bp-1008h] BYREF
  char v45[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v44 = 0;
  all_created_runtime = get_all_created_runtime(&v44);
  v4 = all_created_runtime;
  if ( v44 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_32:
      LOWORD(v35) = -13804;
      LOWORD(v36) = 32240;
      HIWORD(v35) = (unsigned int)"hine_runtime_ks5_2382.c" >> 16;
      HIWORD(v36) = (unsigned int)"n%d_voladded=%d;" >> 16;
      printf(v36, v35);
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v44 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_32;
    }
  }
  V_LOCK();
  LOWORD(v8) = 20532;
  LOWORD(v9) = -13848;
  HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v9) = (unsigned int)"in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c" >> 16;
  v10 = v8;
  v43 = v8;
  logfmt_raw(v45, 0x1000u, 0, v9);
  V_UNLOCK();
  zlog(
    *v10,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    179,
    "start_mining_ks5",
    16,
    145,
    60,
    v45);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    LOWORD(v41) = -13788;
    HIWORD(v41) = (unsigned int)"_2382.c" >> 16;
    logfmt_raw(v45, 0x1000u, 0, v41);
    V_UNLOCK();
    zlog(
      *v43,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      153,
      60,
      v45);
  }
  if ( power_init(0, v44) )
  {
    V_LOCK();
    LOWORD(v37) = -13776;
    HIWORD(v37) = (unsigned int)"_voltage_bias_ltc_1489" >> 16;
    logfmt_raw(v45, 0x1000u, 0, v37);
    V_UNLOCK();
    zlog(
      *v43,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      156,
      100,
      v45);
    V_LOCK();
    LOWORD(v38) = 31900;
    LOWORD(v39) = 31232;
    HIWORD(v38) = (unsigned int)"ocol" >> 16;
    HIWORD(v39) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v45, 0x1000u, 0, v39, v38);
    V_UNLOCK();
    LOWORD(v40) = -13004;
    HIWORD(v40) = (unsigned int)"set_voltage_and_freq_by_eeprom_chip_ft" >> 16;
    zlog(*v43, v40, 179, "start_mining_ks5", 16, 157, 100, v45);
    return 30;
  }
  else
  {
    V_LOCK();
    LOWORD(v11) = -13732;
    HIWORD(v11) = (unsigned int)"_ltc_1489" >> 16;
    logfmt_raw(v45, 0x1000u, 0, v11);
    V_UNLOCK();
    zlog(
      *v43,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      160,
      40,
      v45);
    started = start_heartbeat_thread();
    if ( started )
      return start_heartbeat_thread();
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    if ( v44 > 0 )
    {
      v13 = v4 - 1;
      do
      {
        v14 = (int (**)(void))v13[1];
        ++v13;
        v15 = (*v14)();
        if ( !v15 )
        {
          v16 = 3;
          do
          {
            v17 = dev_ctrl(v15);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v17 + 28))(
              *(_DWORD *)(*v13 + 248),
              *(_DWORD *)(*v13 + 1000),
              *(_DWORD *)(*v13 + 1024));
            v18 = (*(int (**)(void))(*v13 + 208))();
            v15 = (*(int (**)(void))(*v13 + 220))();
            if ( !v18 )
              break;
            --v16;
          }
          while ( v16 );
        }
        ++started;
      }
      while ( v44 > started );
    }
    check_and_destroy_abnormal_runtime();
    v19 = (int *)get_all_created_runtime(&v44);
    if ( v44 <= 0 )
    {
      V_LOCK();
      LOWORD(v42) = -13672;
      HIWORD(v42) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/machine_runtime/ltc_1489/machine_runtime_ltc_1498.c" >> 16;
      v24 = 12;
      logfmt_raw(v45, 0x1000u, 0, v42);
      V_UNLOCK();
      zlog(
        *v43,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        179,
        "start_mining_ks5",
        16,
        188,
        100,
        v45);
    }
    else
    {
      (*(void (__fastcall **)(int))(a1 + 64))(a1);
      V_LOCK();
      logfmt_raw(v45, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
      V_UNLOCK();
      zlog(
        *v43,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        179,
        "start_mining_ks5",
        16,
        194,
        60,
        v45);
      check_if_bringup_temp_too_low(a1);
      v20 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
      fan_pwm_set(v20);
      if ( v44 > 0 )
      {
        v21 = v19 - 1;
        for ( i = 0; i < v44; ++i )
        {
          v23 = v21[1];
          ++v21;
          redirect_nonce_output(*v19, v23);
          (*(void (**)(void))(*v21 + 228))();
        }
      }
      v24 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v44 > 0 )
      {
        v25 = v4 - 1;
        v26 = v19 - 1;
        v27 = 0;
        do
        {
          v29 = v25[1];
          ++v25;
          v28 = v29;
          ++v27;
          v30 = v26[1];
          ++v26;
          (*(void (__fastcall **)(int))(v28 + 60))(v30);
        }
        while ( v44 > v27 );
      }
      if ( !v24 )
      {
        v24 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v24 && v44 > 0 )
        {
          v31 = v19 - 1;
          for ( j = 0; j < v44; ++j )
          {
            v33 = v31[1];
            ++v31;
            (*(void (**)(void))(v33 + 124))();
            (*(void (**)(void))(*v31 + 16))();
          }
        }
      }
    }
    return v24;
  }
}
