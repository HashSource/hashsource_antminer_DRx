int __fastcall set_baud_base(int a1, int a2)
{
  char *all_created_runtime; // r0
  char *v4; // r8
  char *v5; // r8
  int i; // r4
  int v7; // t1
  int v8; // r0
  int chain_domain_num; // r0
  int domain_asic_num; // r0
  int v12; // r0
  int v13; // r7
  int v14; // r10
  char *v15; // r6
  int v16; // r4
  int v17; // r0
  int v18; // t1
  int v19; // [sp+14h] [bp-1008h] BYREF
  char v20[4100]; // [sp+18h] [bp-1004h] BYREF

  v19 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v19);
  v4 = all_created_runtime;
  if ( a2 > 3000000 )
  {
    V_LOCK();
    chain_domain_num = platform_get_chain_domain_num();
    logfmt_raw(v20, 0x1000u, 0, "chain_domain_num:%d", chain_domain_num);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_baud_base",
      13,
      193,
      20,
      v20);
    V_LOCK();
    domain_asic_num = platform_get_domain_asic_num();
    logfmt_raw(v20, 0x1000u, 0, "domain_asic_num :%d", domain_asic_num);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_baud_base",
      13,
      194,
      20,
      v20);
    v12 = platform_get_chain_domain_num();
    if ( v12 > 2 )
    {
      v13 = 18;
      v14 = v12 + 15;
      do
      {
        platform_get_domain_asic_num();
        if ( v19 > 0 )
        {
          v15 = v4 - 4;
          v16 = 0;
          do
          {
            v17 = v16++;
            platform_get_asic_addr_interval(v17);
            v18 = *((_DWORD *)v15 + 1);
            v15 += 4;
            (*(void (**)(void))(v18 + 104))();
          }
          while ( v19 > v16 );
        }
        v13 += 3;
      }
      while ( v14 - v13 >= 0 );
    }
    all_created_runtime = (char *)usleep((__useconds_t)&stru_18698.st_size);
  }
  if ( v19 > 0 )
  {
    v5 = v4 - 4;
    for ( i = 0; i < v19; ++i )
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
