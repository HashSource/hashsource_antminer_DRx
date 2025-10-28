int __fastcall set_baud_base(int a1, int a2)
{
  char *all_created_runtime; // r0
  char *v4; // r8
  char *v5; // r8
  int i; // r4
  int v7; // t1
  int v8; // r0
  int chain_domain_num; // r0
  int v11; // r3
  _DWORD *v12; // r5
  int v13; // r1
  int domain_asic_num; // r0
  int v15; // r3
  int v16; // r1
  int v17; // r0
  int v18; // r7
  int v19; // r10
  char *v20; // r6
  int v21; // r4
  int v22; // r0
  int v23; // t1
  int v24; // [sp+14h] [bp-1008h] BYREF
  char v25[4100]; // [sp+18h] [bp-1004h] BYREF

  v24 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v24);
  v4 = all_created_runtime;
  if ( a2 > 3000000 )
  {
    V_LOCK();
    chain_domain_num = platform_get_chain_domain_num();
    LOWORD(v11) = -11540;
    HIWORD(v11) = (unsigned int)"_data is not ready, chain = %d" >> 16;
    LOWORD(v12) = 20532;
    logfmt_raw(v25, 0x1000u, 0, v11, chain_domain_num);
    HIWORD(v12) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v13) = -11848;
    HIWORD(v13) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v12, v13, 166, "set_baud_base", 13, 149, 20, v25);
    V_LOCK();
    domain_asic_num = platform_get_domain_asic_num();
    LOWORD(v15) = -11520;
    HIWORD(v15) = (unsigned int)"chain = %d" >> 16;
    logfmt_raw(v25, 0x1000u, 0, v15, domain_asic_num);
    V_UNLOCK();
    LOWORD(v16) = -11848;
    HIWORD(v16) = (unsigned int)" num test, loop:%d done, total failed times:%d" >> 16;
    zlog(*v12, v16, 166, "set_baud_base", 13, 150, 20, v25);
    v17 = platform_get_chain_domain_num();
    if ( v17 > 2 )
    {
      v18 = 18;
      v19 = v17 + 15;
      do
      {
        platform_get_domain_asic_num();
        if ( v24 > 0 )
        {
          v20 = v4 - 4;
          v21 = 0;
          do
          {
            v22 = v21++;
            platform_get_asic_addr_interval(v22);
            v23 = *((_DWORD *)v20 + 1);
            v20 += 4;
            (*(void (**)(void))(v23 + 104))();
          }
          while ( v24 > v21 );
        }
        v18 += 3;
      }
      while ( v19 - v18 >= 0 );
    }
    all_created_runtime = (char *)usleep((__useconds_t)&stru_186A0);
  }
  if ( v24 > 0 )
  {
    v5 = v4 - 4;
    for ( i = 0; i < v24; ++i )
    {
      v7 = *((_DWORD *)v5 + 1);
      v5 += 4;
      (*(void (**)(void))(v7 + 88))();
      all_created_runtime = (char *)usleep(0x2710u);
    }
  }
  v8 = dev_ctrl(all_created_runtime);
  (*(void (__fastcall **)(int))(v8 + 20))(a2);
  usleep(0x2710u);
  return 0;
}
