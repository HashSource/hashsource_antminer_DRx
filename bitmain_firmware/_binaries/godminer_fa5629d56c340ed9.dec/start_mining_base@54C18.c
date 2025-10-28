int __fastcall start_mining_base(int a1)
{
  int v1; // r5
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r6
  int v6; // t1
  int v7; // r0
  int v8; // r6
  _DWORD *v9; // r4
  int v10; // r9
  int v11; // r7
  int (**v12)(void); // t1
  int v13; // r5
  int v14; // r0
  int *v15; // r7
  unsigned int v16; // r0
  int *v17; // r5
  int i; // r4
  int v19; // t1
  int v20; // r3
  int *v21; // r7
  int v22; // r5
  int v23; // t1
  int (__fastcall *v25)(int, int); // r5
  int v26; // r0
  int v27; // [sp+1Ch] [bp-1008h] BYREF
  char v28[4100]; // [sp+20h] [bp-1004h] BYREF

  v1 = 0;
  v27 = 0;
  all_created_runtime = get_all_created_runtime(&v27);
  v4 = all_created_runtime;
  if ( v27 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_38:
      v8 = 3;
      printf(aInvalidPointer, "be_runtimes[c]");
      return v8;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v27 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_38;
    }
  }
  V_LOCK();
  logfmt_raw(v28, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "start_mining_base",
    17,
    807,
    60,
    v28);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_197860 = 1;
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      813,
      60,
      v28);
  }
  if ( power_init((unsigned __int8)byte_197860, v27) )
  {
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      816,
      100,
      v28);
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      817,
      100,
      v28);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      820,
      40,
      v28);
    if ( !start_heartbeat_thread() )
    {
      if ( opt_algo != 9
        || (v25 = *(int (__fastcall **)(int, int))(a1 + 28),
            v26 = platfrom_get_check_asic_voltage(),
            (v8 = v25(a1, v26)) == 0) )
      {
        (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
        if ( v27 > 0 )
        {
          v9 = v4 - 1;
          v10 = 0;
          v11 = 3;
          do
          {
            v12 = (int (**)(void))v9[1];
            ++v9;
            v8 = (*v12)();
            if ( !v8 )
            {
              v13 = 0;
              if ( opt_algo == 7 )
                v11 = 1;
              do
              {
                v14 = dev_ctrl(0);
                ++v13;
                (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v14 + 28))(
                  *(_DWORD *)(*v9 + 252),
                  *(_DWORD *)(*v9 + 1008),
                  *(_DWORD *)(*v9 + 1032));
                (*(void (**)(void))(*v9 + 220))();
                v8 = (*(int (**)(void))(*v9 + 208))();
              }
              while ( !v8 && v11 != v13 );
            }
            ++v10;
          }
          while ( v27 > v10 );
        }
        else
        {
          v8 = 0;
        }
        check_and_destroy_abnormal_runtime();
        v15 = (int *)get_all_created_runtime(&v27);
        if ( v27 <= 0 )
        {
          V_LOCK();
          v8 = 12;
          logfmt_raw(v28, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "start_mining_base",
            17,
            856,
            100,
            v28);
        }
        else if ( *(_DWORD *)(a1 + 72) == 7
               || (v8 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84))) == 0 )
        {
          (*(void (__fastcall **)(int))(a1 + 64))(a1);
          if ( *(_DWORD *)(a1 + 72) != 9 )
          {
            V_LOCK();
            logfmt_raw(v28, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "start_mining_base",
              17,
              874,
              60,
              v28);
          }
          v16 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
          fan_pwm_set(v16);
          if ( v27 > 0 )
          {
            v17 = v15 - 1;
            for ( i = 0; i < v27; ++i )
            {
              v19 = v17[1];
              ++v17;
              redirect_nonce_output(*v15, v19);
              (*(void (**)(void))(*v17 + 228))();
            }
          }
          v20 = *(_DWORD *)(a1 + 72);
          if ( v20 == 9 )
          {
            (*(void (__fastcall **)(int))(a1 + 64))(a1);
            V_LOCK();
            logfmt_raw(v28, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "start_mining_base",
              17,
              890,
              60,
              v28);
            v20 = *(_DWORD *)(a1 + 72);
          }
          if ( (v20 == 7 || (v8 = (*(int (__fastcall **)(int))(a1 + 44))(a1)) == 0) && v27 > 0 )
          {
            v21 = v15 - 1;
            v22 = 0;
            do
            {
              v23 = v21[1];
              ++v21;
              ++v22;
              (*(void (**)(void))(v23 + 4))();
              (*(void (**)(void))(*v21 + 124))();
              (*(void (**)(void))(*v21 + 16))();
            }
            while ( v27 > v22 );
          }
        }
      }
      return v8;
    }
    return start_heartbeat_thread();
  }
}
