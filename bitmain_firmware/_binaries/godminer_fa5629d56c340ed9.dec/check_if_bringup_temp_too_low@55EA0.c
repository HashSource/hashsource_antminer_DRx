int __fastcall check_if_bringup_temp_too_low(int a1)
{
  char *all_created_runtime; // r0
  char *v3; // r6
  int v4; // r1
  char *v5; // r7
  char *v6; // r3
  int v7; // r5
  int v8; // t1
  char *v10; // r5
  int v11; // r0
  int v12; // r0
  int v13; // t1
  int v14; // [sp+14h] [bp-1008h] BYREF
  char v15[4100]; // [sp+18h] [bp-1004h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v14);
  if ( v14 > 0 )
  {
    v3 = all_created_runtime;
    v4 = *(_DWORD *)(a1 + 92);
    if ( *(_DWORD *)(*(_DWORD *)all_created_runtime + 428) > v4 )
    {
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, "bringup temperature too low! refuse to start mining");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_if_bringup_temp_too_low",
        29,
        1259,
        100,
        v15);
    }
    else
    {
      v5 = all_created_runtime;
      v6 = all_created_runtime;
      v7 = 0;
      do
      {
        if ( ++v7 == v14 )
          return 0;
        v8 = *((_DWORD *)v6 + 1);
        v6 += 4;
      }
      while ( *(_DWORD *)(v8 + 428) <= v4 );
      V_LOCK();
      v10 = &v3[4 * v7];
      logfmt_raw(v15, 0x1000u, 0, "bringup temperature too low! refuse to start mining");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_if_bringup_temp_too_low",
        29,
        1259,
        100,
        v15);
      do
      {
        v11 = (*(int (**)(void))(*(_DWORD *)v5 + 24))();
        v12 = dev_ctrl(v11);
        v13 = *(_DWORD *)v5;
        v5 += 4;
        (*(void (__fastcall **)(_DWORD))(v12 + 32))(*(_DWORD *)(v13 + 252));
      }
      while ( v10 != v5 );
    }
    power_off();
    while ( 1 )
      sleep(1u);
  }
  return 0;
}
