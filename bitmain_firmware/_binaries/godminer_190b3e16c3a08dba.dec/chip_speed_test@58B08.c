int __fastcall chip_speed_test(_DWORD *a1, int a2)
{
  int *v2; // r4
  void (__fastcall *v4)(_DWORD *, float *); // r2
  int v6; // r3
  int v7; // r1
  int v8; // r12
  _DWORD *v9; // r2
  unsigned int v10; // r7
  unsigned int v11; // r0
  unsigned int v12; // t1
  int v13; // lr
  int v14; // r3
  int v15; // t1
  float v17; // [sp+10h] [bp-1014h] BYREF
  int v18; // [sp+14h] [bp-1010h] BYREF
  unsigned __int8 v19; // [sp+1Ah] [bp-100Ah]
  _DWORD v20[1025]; // [sp+20h] [bp-1004h] BYREF

  v2 = v20;
  v4 = (void (__fastcall *)(_DWORD *, float *))a1[36];
  v17 = 0.0;
  v4(a1, &v17);
  v17 = v17 * 120.0;
  V_LOCK();
  logfmt_raw((char *)v20, 0x1000u, 0, "qualify nonce count %f", v17);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "chip_speed_test",
    15,
    34,
    20,
    v20);
  get_miner_working_status((int)&v18);
  v6 = v19;
  if ( v19 )
  {
    V_LOCK();
    logfmt_raw((char *)v20, 0x1000u, 0, "check lost connection to pool, keep the state of all chips!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "chip_speed_test",
      15,
      42,
      20,
      v20);
    return 0;
  }
  else
  {
    if ( (int)a1[76] > 0 )
    {
      v7 = v19;
      v8 = v19;
      v9 = (_DWORD *)(a1[112] - 4);
      v10 = (unsigned int)v17;
      do
      {
        v12 = v9[1];
        ++v9;
        v11 = v12;
        v13 = v7 & 0xF;
        if ( v12 < v10 )
        {
          ++v7;
          v20[v13] = v6;
          if ( v11 )
            *(_DWORD *)(a2 + 4 * v6) = 3;
          else
            *(_DWORD *)(a2 + 4 * v6) = 2;
        }
        else
        {
          *(_DWORD *)(a2 + 4 * v6) = v8;
        }
        *v9 = v8;
        ++v6;
      }
      while ( a1[76] > v6 );
      if ( v7 && v7 <= a1[123] )
      {
        v14 = 0;
        if ( v7 >= 16 )
          v7 = 16;
        do
        {
          ++v14;
          v15 = *v2++;
          *(_DWORD *)(a2 + 4 * v15) = 0;
        }
        while ( v14 < v7 );
      }
    }
    return 0;
  }
}
