int __fastcall start_mining_kas(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  int v6; // t1
  int v7; // r0
  int started; // r9
  int *v9; // r5
  int (**v10)(void); // t1
  int v11; // r0
  int v12; // r7
  int v13; // r0
  int v14; // r4
  int v15; // r4
  int *v16; // r6
  unsigned int v17; // r0
  int *v18; // r5
  int i; // r4
  int v20; // t1
  int v21; // r5
  _DWORD *v22; // r7
  int *v23; // r9
  int v24; // r4
  int v25; // r3
  int v26; // t1
  int v27; // t1
  int *v28; // r6
  int j; // r4
  int v30; // t1
  _DWORD *v32; // [sp+14h] [bp-1010h]
  int v33; // [sp+1Ch] [bp-1008h] BYREF
  char v34[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v33 = 0;
  all_created_runtime = get_all_created_runtime(&v33);
  v4 = all_created_runtime;
  if ( v33 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_35:
      v21 = 3;
      printf(aInvalidPointer, "be_runtimes[c]");
      return v21;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v33 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_35;
    }
  }
  V_LOCK();
  logfmt_raw(v34, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "start_mining_kas",
    16,
    145,
    60,
    v34);
  if ( support_of_sleepmode(*(_DWORD *)(a1 + 72)) && opt_custom_power_mode == 1 )
  {
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      179,
      "start_mining_kas",
      16,
      153,
      60,
      v34);
  }
  if ( power_init(0, v33) )
  {
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      179,
      "start_mining_kas",
      16,
      156,
      100,
      v34);
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      179,
      "start_mining_kas",
      16,
      157,
      100,
      v34);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      179,
      "start_mining_kas",
      16,
      160,
      40,
      v34);
    started = start_heartbeat_thread();
    if ( !started )
    {
      puts("send fake work to open cores");
      (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
      if ( v33 > 0 )
      {
        v9 = v4 - 1;
        v32 = v4;
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
              v14 = 10;
              (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 28))(
                *(_DWORD *)(*v9 + 252),
                *(_DWORD *)(*v9 + 1008),
                *(_DWORD *)(*v9 + 1032));
              do
              {
                usleep((__useconds_t)&stru_18698.st_size);
                send_fake_work_kas(*v9);
                --v14;
              }
              while ( v14 );
              v15 = (*(int (**)(void))(*v9 + 208))();
              v11 = (*(int (**)(void))(*v9 + 220))();
              if ( !v15 )
                break;
              --v12;
            }
            while ( v12 );
          }
          ++started;
        }
        while ( v33 > started );
        v4 = v32;
      }
      check_and_destroy_abnormal_runtime();
      v16 = (int *)get_all_created_runtime(&v33);
      if ( v33 <= 0 )
      {
        V_LOCK();
        v21 = 12;
        logfmt_raw(v34, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          179,
          "start_mining_kas",
          16,
          199,
          100,
          v34);
      }
      else
      {
        (*(void (__fastcall **)(int))(a1 + 64))(a1);
        V_LOCK();
        logfmt_raw(v34, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          179,
          "start_mining_kas",
          16,
          205,
          60,
          v34);
        check_if_bringup_temp_too_low(a1);
        v17 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
        fan_pwm_set(v17);
        if ( v33 > 0 )
        {
          v18 = v16 - 1;
          for ( i = 0; i < v33; ++i )
          {
            v20 = v18[1];
            ++v18;
            redirect_nonce_output(*v16, v20);
            (*(void (**)(void))(*v18 + 228))();
          }
        }
        v21 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
        if ( v33 > 0 )
        {
          v22 = v4 - 1;
          v23 = v16 - 1;
          v24 = 0;
          do
          {
            v26 = v22[1];
            ++v22;
            v25 = v26;
            ++v24;
            v27 = v23[1];
            ++v23;
            (*(void (__fastcall **)(int))(v25 + 60))(v27);
          }
          while ( v33 > v24 );
        }
        if ( !v21 )
        {
          v21 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84));
          if ( !v21 && v33 > 0 )
          {
            v28 = v16 - 1;
            for ( j = 0; j < v33; ++j )
            {
              v30 = v28[1];
              ++v28;
              (*(void (**)(void))(v30 + 124))();
              (*(void (**)(void))(*v28 + 16))();
            }
          }
        }
      }
      return v21;
    }
    return start_heartbeat_thread();
  }
}
