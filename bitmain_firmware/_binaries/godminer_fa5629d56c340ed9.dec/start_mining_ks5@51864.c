int __fastcall start_mining_ks5(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r9
  int v6; // t1
  int v7; // r0
  int started; // r10
  _DWORD *v9; // r4
  int (**v10)(void); // t1
  int v11; // r0
  int v12; // r9
  int v13; // r0
  int v14; // r11
  int *v15; // r8
  unsigned int v16; // r0
  int *v17; // r9
  int i; // r4
  int v19; // t1
  int v20; // r9
  _DWORD *v21; // r6
  int *v22; // r10
  int v23; // r4
  int v24; // r3
  int v25; // t1
  int v26; // t1
  int *v27; // r8
  int j; // r4
  int v29; // t1
  int v31; // [sp+1Ch] [bp-1008h] BYREF
  char v32[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v31 = 0;
  all_created_runtime = get_all_created_runtime(&v31);
  v4 = all_created_runtime;
  if ( v31 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_32:
      printf(aInvalidPointer, "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v31 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_32;
    }
  }
  V_LOCK();
  logfmt_raw(v32, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    179,
    "start_mining_ks5",
    16,
    145,
    60,
    v32);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      153,
      60,
      v32);
  }
  if ( power_init(0, v31) )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      156,
      100,
      v32);
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      157,
      100,
      v32);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "start_mining_ks5",
      16,
      160,
      40,
      v32);
    started = start_heartbeat_thread();
    if ( started )
      return start_heartbeat_thread();
    (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    if ( v31 > 0 )
    {
      v9 = v4 - 1;
      do
      {
        v10 = (int (**)(void))v9[1];
        ++v9;
        v11 = (*v10)();
        if ( !v11 )
        {
          v12 = 3;
          do
          {
            v13 = dev_ctrl(v11);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 28))(
              *(_DWORD *)(*v9 + 252),
              *(_DWORD *)(*v9 + 1008),
              *(_DWORD *)(*v9 + 1032));
            v14 = (*(int (**)(void))(*v9 + 208))();
            v11 = (*(int (**)(void))(*v9 + 220))();
            if ( !v14 )
              break;
            --v12;
          }
          while ( v12 );
        }
        ++started;
      }
      while ( v31 > started );
    }
    check_and_destroy_abnormal_runtime();
    v15 = (int *)get_all_created_runtime(&v31);
    if ( v31 <= 0 )
    {
      V_LOCK();
      v20 = 12;
      logfmt_raw(v32, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        179,
        "start_mining_ks5",
        16,
        188,
        100,
        v32);
    }
    else
    {
      (*(void (__fastcall **)(int))(a1 + 64))(a1);
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
        179,
        "start_mining_ks5",
        16,
        194,
        60,
        v32);
      check_if_bringup_temp_too_low(a1);
      v16 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
      fan_pwm_set(v16);
      if ( v31 > 0 )
      {
        v17 = v15 - 1;
        for ( i = 0; i < v31; ++i )
        {
          v19 = v17[1];
          ++v17;
          redirect_nonce_output(*v15, v19);
          (*(void (**)(void))(*v17 + 228))();
        }
      }
      v20 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
      if ( v31 > 0 )
      {
        v21 = v4 - 1;
        v22 = v15 - 1;
        v23 = 0;
        do
        {
          v25 = v21[1];
          ++v21;
          v24 = v25;
          ++v23;
          v26 = v22[1];
          ++v22;
          (*(void (__fastcall **)(int))(v24 + 60))(v26);
        }
        while ( v31 > v23 );
      }
      if ( !v20 )
      {
        v20 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
        if ( !v20 && v31 > 0 )
        {
          v27 = v15 - 1;
          for ( j = 0; j < v31; ++j )
          {
            v29 = v27[1];
            ++v27;
            (*(void (**)(void))(v29 + 124))();
            (*(void (**)(void))(*v27 + 16))();
          }
        }
      }
    }
    return v20;
  }
}
