int __fastcall check_asic_num_base(int a1)
{
  int v1; // r4
  _DWORD *all_created_runtime; // r0
  _DWORD *v4; // r5
  int v5; // t1
  int v6; // r0
  int v7; // r8
  int v8; // r0
  int v9; // r1
  int i; // r4
  int v11; // r0
  int v12; // r5
  _DWORD *v13; // r4
  int (**v14)(void); // t1
  int v15; // r6
  int v16; // r0
  int v17; // r6
  _DWORD *v19; // [sp+18h] [bp-90h]
  int v20; // [sp+24h] [bp-84h] BYREF
  _QWORD v21[16]; // [sp+28h] [bp-80h] BYREF
  char v22[4100]; // [sp+A8h] [bp+0h] BYREF

  v1 = 0;
  v20 = 0;
  all_created_runtime = get_all_created_runtime(&v20);
  v19 = all_created_runtime;
  if ( v20 > 0 )
  {
    if ( !*all_created_runtime )
    {
LABEL_25:
      printf(aInvalidPointer, "be_runtimes[c]");
      return 3;
    }
    v4 = all_created_runtime;
    while ( 1 )
    {
      v6 = dev_ctrl(all_created_runtime);
      all_created_runtime = (_DWORD *)(*(int (__fastcall **)(int))(v6 + 32))(v1++);
      if ( v20 <= v1 )
        break;
      v5 = v4[1];
      ++v4;
      if ( !v5 )
        goto LABEL_25;
    }
  }
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "all backend runtimes have been poweroff.");
  V_UNLOCK();
  v7 = 1;
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    618,
    60,
    v22);
  memset(v21, 0, sizeof(v21));
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "start to check asic num test loop");
  V_UNLOCK();
  v8 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
         "gin_godminer-new/machine_runtime/machine_runtime_base.c",
         166,
         "check_asic_num_base",
         19,
         623,
         60,
         v22);
  while ( 1 )
  {
    v9 = v20;
    if ( v20 > 0 )
    {
      for ( i = 0; i < v20; ++i )
      {
        v11 = dev_ctrl(v8);
        v8 = (*(int (__fastcall **)(int))(v11 + 52))(i);
        v9 = v20;
      }
    }
    v12 = power_init((unsigned __int8)byte_19684C, v9);
    if ( v12 )
      break;
    v8 = (*(int (__fastcall **)(int, _DWORD))(a1 + 40))(a1, *(_DWORD *)(a1 + 80));
    if ( v20 > 0 )
    {
      v13 = v19 - 1;
      do
      {
        v14 = (int (**)(void))v13[1];
        ++v13;
        v8 = (*v14)();
        if ( !v8 )
        {
          v15 = 3;
          while ( 1 )
          {
            v16 = dev_ctrl(v8);
            (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v16 + 28))(
              *(_DWORD *)(*v13 + 248),
              *(_DWORD *)(*v13 + 1000),
              *(_DWORD *)(*v13 + 1024));
            (*(void (**)(void))(*v13 + 220))();
            v8 = (*(int (**)(void))(*v13 + 208))();
            if ( !v8 )
              break;
            if ( !--v15 )
            {
              v17 = LODWORD(v21[v12]) + 1;
              LODWORD(v21[v12]) = v17;
              goto LABEL_20;
            }
          }
          v17 = v21[v12];
LABEL_20:
          (*(void (**)(void))(*v13 + 32))();
          V_LOCK();
          logfmt_raw(
            v22,
            0x1000u,
            0,
            "chain[%d] check asic num test, loop:%d done, total failed times:%d",
            v12,
            v7,
            v17);
          V_UNLOCK();
          v8 = zlog(
                 g_zc,
                 "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godm"
                 "iner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                 166,
                 "check_asic_num_base",
                 19,
                 657,
                 60,
                 v22);
        }
        ++v12;
      }
      while ( v20 > v12 );
    }
    if ( ++v7 == 1001 )
      return 0;
  }
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "power init error!");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    631,
    100,
    v22);
  V_LOCK();
  logfmt_raw(v22, 0x1000u, 0, "Sweep error string = %s.", "V:1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "check_asic_num_base",
    19,
    632,
    100,
    v22);
  return 30;
}
