int __fastcall check_if_bringup_temp_too_low(int a1)
{
  char *all_created_runtime; // r0
  char *v3; // r6
  int v4; // r1
  char *v5; // r7
  char *v6; // r3
  int v7; // r5
  int v8; // t1
  int v10; // r3
  char *v11; // r5
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // t1
  int v17; // r3
  _DWORD *v18; // r3
  int v19; // r1
  int v20; // [sp+14h] [bp-1008h] BYREF
  char v21[4100]; // [sp+18h] [bp-1004h] BYREF

  all_created_runtime = (char *)get_all_created_runtime(&v20);
  if ( v20 > 0 )
  {
    v3 = all_created_runtime;
    v4 = *(_DWORD *)(a1 + 92);
    if ( *(_DWORD *)(*(_DWORD *)all_created_runtime + 424) > v4 )
    {
      V_LOCK();
      LOWORD(v17) = -10388;
      HIWORD(v17) = (unsigned int)"_zec_1746.c" >> 16;
      logfmt_raw(v21, 0x1000u, 0, v17);
      V_UNLOCK();
      LOWORD(v18) = 20532;
      HIWORD(v18) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v19) = -11848;
      HIWORD(v19) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
      zlog(*v18, v19, 166, "check_if_bringup_temp_too_low", 29, 1208, 100, v21);
    }
    else
    {
      v5 = all_created_runtime;
      v6 = all_created_runtime;
      v7 = 0;
      do
      {
        if ( ++v7 == v20 )
          return 0;
        v8 = *((_DWORD *)v6 + 1);
        v6 += 4;
      }
      while ( *(_DWORD *)(v8 + 424) <= v4 );
      V_LOCK();
      LOWORD(v10) = -10388;
      HIWORD(v10) = (unsigned int)"_zec_1746.c" >> 16;
      v11 = &v3[4 * v7];
      logfmt_raw(v21, 0x1000u, 0, v10);
      V_UNLOCK();
      LOWORD(v12) = 20532;
      HIWORD(v12) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v13) = -11848;
      HIWORD(v13) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
      zlog(*v12, v13, 166, "check_if_bringup_temp_too_low", 29, 1208, 100, v21);
      do
      {
        v14 = (*(int (**)(void))(*(_DWORD *)v5 + 24))();
        v15 = dev_ctrl(v14);
        v16 = *(_DWORD *)v5;
        v5 += 4;
        (*(void (__fastcall **)(_DWORD))(v15 + 32))(*(_DWORD *)(v16 + 248));
      }
      while ( v11 != v5 );
    }
    power_off();
    while ( 1 )
      sleep(1u);
  }
  return 0;
}
