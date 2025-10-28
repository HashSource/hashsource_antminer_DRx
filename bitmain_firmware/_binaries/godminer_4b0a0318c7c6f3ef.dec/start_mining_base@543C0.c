int __fastcall start_mining_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  _DWORD *v5; // r6
  int v6; // t1
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // r8
  int v10; // r6
  int (**v11)(void); // t1
  int v12; // r5
  int v13; // r0
  int *v14; // r6
  int v15; // r4
  unsigned int v16; // r0
  int *v17; // r5
  int i; // r4
  int v19; // t1
  int *v20; // r5
  int v21; // r6
  int v22; // t1
  int (__fastcall *v24)(int, int); // r4
  int v25; // r0
  int v26; // [sp+14h] [bp-1008h] BYREF
  char v27[4100]; // [sp+18h] [bp-1004h] BYREF

  v1 = 0;
  v26 = 0;
  all_created_runtime = get_all_created_runtime(&v26);
  v4 = all_created_runtime;
  if ( v26 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_36:
      v15 = 3;
      printf(aInvalidPointer, "be_runtimes[c]");
      return v15;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 32))(v1++);
      if ( v26 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_36;
    }
  }
  V_LOCK();
  logfmt_raw(v27, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "start_mining_base",
    17,
    764,
    60,
    v27);
  if ( *(_DWORD *)(a1 + 72) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_19684C = 1;
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "sleep on!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      770,
      60,
      v27);
  }
  if ( power_init((unsigned __int8)byte_19684C, v26) )
  {
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, ">> power init error, check PSU please <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      773,
      100,
      v27);
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, "Sweep error string = %s.", "V:1");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      774,
      100,
      v27);
    return 30;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v27, 0x1000u, 0, ">> power init success <<");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "start_mining_base",
      17,
      777,
      40,
      v27);
    if ( !start_heartbeat_thread() )
    {
      if ( opt_algo != 9
        || (v24 = *(int (__fastcall **)(int, int))(a1 + 28),
            v25 = platfrom_get_check_asic_voltage(),
            (v15 = v24(a1, v25)) == 0) )
      {
        (*(void (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
        if ( v26 > 0 )
        {
          v8 = v4 - 1;
          v9 = 0;
          v10 = 3;
          do
          {
            v11 = (int (**)(void))v8[1];
            ++v8;
            v12 = (*v11)();
            if ( !v12 )
            {
              if ( opt_algo == 7 )
                v10 = 1;
              do
              {
                v13 = dev_ctrl(0);
                ++v12;
                (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 28))(
                  *(_DWORD *)(*v8 + 248),
                  *(_DWORD *)(*v8 + 1000),
                  *(_DWORD *)(*v8 + 1024));
                (*(void (**)(void))(*v8 + 220))();
              }
              while ( !(*(int (**)(void))(*v8 + 208))() && v10 != v12 );
            }
            ++v9;
          }
          while ( v26 > v9 );
        }
        check_and_destroy_abnormal_runtime();
        v14 = (int *)get_all_created_runtime(&v26);
        if ( v26 <= 0 )
        {
          V_LOCK();
          v15 = 12;
          logfmt_raw(v27, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "start_mining_base",
            17,
            808,
            100,
            v27);
        }
        else if ( *(_DWORD *)(a1 + 72) == 7
               || (v15 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 84))) == 0 )
        {
          (*(void (__fastcall **)(int))(a1 + 64))(a1);
          if ( *(_DWORD *)(a1 + 72) != 9 )
          {
            V_LOCK();
            logfmt_raw(v27, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "start_mining_base",
              17,
              826,
              60,
              v27);
          }
          v16 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 92));
          fan_pwm_set(v16);
          if ( v26 > 0 )
          {
            v17 = v14 - 1;
            for ( i = 0; i < v26; ++i )
            {
              v19 = v17[1];
              ++v17;
              redirect_nonce_output(*v14, v19);
              (*(void (**)(void))(*v17 + 228))();
            }
          }
          if ( *(_DWORD *)(a1 + 72) == 9 )
          {
            (*(void (__fastcall **)(int))(a1 + 64))(a1);
            V_LOCK();
            logfmt_raw(v27, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 92));
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "start_mining_base",
              17,
              842,
              60,
              v27);
          }
          v15 = (*(int (__fastcall **)(int))(a1 + 44))(a1);
          if ( !v15 && v26 > 0 )
          {
            v20 = v14 - 1;
            v21 = 0;
            do
            {
              v22 = v20[1];
              ++v20;
              ++v21;
              (*(void (**)(void))(v22 + 4))();
              (*(void (**)(void))(*v20 + 124))();
              (*(void (**)(void))(*v20 + 16))();
            }
            while ( v26 > v21 );
          }
        }
      }
      return v15;
    }
    return start_heartbeat_thread();
  }
}
