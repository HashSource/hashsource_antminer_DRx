int __fastcall start_mining_base(int a1)
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
  int v12; // r6
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int *v16; // r8
  int v17; // r10
  unsigned int v18; // r0
  int *v19; // r6
  int i; // r4
  int v21; // t1
  int *v22; // r8
  int v23; // r6
  int v24; // t1
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
LABEL_33:
      printf("invalid pointer(%s)!\n", "be_runtimes[c]");
      return 3;
    }
    v5 = all_created_runtime;
    while ( 1 )
    {
      v7 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v7 + 28))(v1++);
      if ( v26 <= v1 )
        break;
      v6 = v5[1];
      ++v5;
      if ( !v6 )
        goto LABEL_33;
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
    561,
    60,
    v27);
  if ( *(_DWORD *)(a1 + 64) <= 5u && opt_custom_power_mode == 1 )
  {
    byte_17ADD4 = 1;
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
      567,
      60,
      v27);
  }
  if ( power_init((unsigned __int8)byte_17ADD4, v26) )
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
      570,
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
      571,
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
      574,
      40,
      v27);
    started = start_heartbeat_thread();
    if ( started )
      return start_heartbeat_thread();
    (*(void (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 72));
    if ( v26 > 0 )
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
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v13 + 24))(
              *(_DWORD *)(*v9 + 220),
              *(_DWORD *)(*v9 + 928),
              *(_DWORD *)(*v9 + 952));
            (*(void (**)(void))(*v9 + 208))();
            v14 = (*(int (**)(void))(*v9 + 196))();
            if ( !v14 )
              break;
            v15 = dev_ctrl(v14);
            v11 = (*(int (__fastcall **)(_DWORD))(v15 + 32))(*(_DWORD *)(*v9 + 220));
            --v12;
          }
          while ( v12 );
        }
        ++started;
      }
      while ( v26 > started );
    }
    check_and_destroy_abnormal_runtime();
    v16 = (int *)get_all_created_runtime(&v26);
    if ( v26 <= 0 )
    {
      V_LOCK();
      v17 = 12;
      logfmt_raw(v27, 0x1000u, 0, "there is no qualified device remain after check abnormal runtime!");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "start_mining_base",
        17,
        601,
        100,
        v27);
    }
    else
    {
      v17 = (*(int (__fastcall **)(int, _DWORD))(a1 + 32))(a1, *(_DWORD *)(a1 + 76));
      if ( !v17 )
      {
        (*(void (__fastcall **)(int))(a1 + 56))(a1);
        if ( *(_DWORD *)(a1 + 64) != 9 )
        {
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 84));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "start_mining_base",
            17,
            615,
            60,
            v27);
        }
        v18 = (*(int (__fastcall **)(_DWORD))(a1 + 24))(*(_DWORD *)(a1 + 84));
        fan_pwm_set(v18);
        if ( v26 > 0 )
        {
          v19 = v16 - 1;
          for ( i = 0; i < v26; ++i )
          {
            v21 = v19[1];
            ++v19;
            redirect_nonce_output(*v16, v21);
            (*(void (**)(void))(*v19 + 216))();
          }
        }
        if ( *(_DWORD *)(a1 + 64) == 9 )
        {
          (*(void (__fastcall **)(int))(a1 + 56))(a1);
          V_LOCK();
          logfmt_raw(v27, 0x1000u, 0, "check bringup temperature %d C", *(_DWORD *)(a1 + 84));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "start_mining_base",
            17,
            631,
            60,
            v27);
        }
        v17 = (*(int (__fastcall **)(int))(a1 + 36))(a1);
        if ( !v17 && v26 > 0 )
        {
          v22 = v16 - 1;
          v23 = 0;
          do
          {
            v24 = v22[1];
            ++v22;
            ++v23;
            (*(void (**)(void))(v24 + 4))();
            (*(void (**)(void))(*v22 + 120))();
            (*(void (**)(void))(*v22 + 16))();
          }
          while ( v26 > v23 );
        }
      }
    }
    return v17;
  }
}
