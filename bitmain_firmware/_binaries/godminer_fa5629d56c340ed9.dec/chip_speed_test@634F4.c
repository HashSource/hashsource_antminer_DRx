int __fastcall chip_speed_test(_DWORD *a1)
{
  float *v1; // r7
  void (__fastcall *v2)(_DWORD *, int *); // r3
  int v4; // r3
  float v5; // s15
  int v6; // r2
  int v7; // r12
  int v8; // r7
  int v9; // r8
  unsigned int v10; // s15
  _DWORD *v11; // r1
  unsigned int v12; // r10
  unsigned int v13; // t1
  int v14; // lr
  bool v15; // zf
  char *v16; // r10
  int v17; // r3
  int v18; // r5
  int v19; // r2
  char *v20; // r1
  int v21; // t1
  char *v23; // r7
  int v24; // r8
  int v25; // r9
  int v26; // t1
  int v27; // [sp+10h] [bp+0h] BYREF
  int v28; // [sp+14h] [bp+4h] BYREF
  unsigned __int8 v29; // [sp+1Ah] [bp+Ah]
  char v30[64]; // [sp+20h] [bp+10h] BYREF
  char v31[1024]; // [sp+60h] [bp+50h] BYREF
  char v32[4100]; // [sp+460h] [bp+450h] BYREF

  v2 = (void (__fastcall *)(_DWORD *, int *))a1[37];
  *v1 = 0.0;
  v2(a1, &v27);
  *v1 = *v1 * 120.0;
  V_LOCK();
  logfmt_raw(v32, 0x1000u, 0, "qualify nonce count %f", *v1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
    193,
    "chip_speed_test",
    15,
    35,
    20,
    v32);
  get_miner_working_status((int)&v28);
  v4 = v29;
  if ( v29 )
  {
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "check lost connection to pool, keep the state of all chips!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "chip_speed_test",
      15,
      43,
      20,
      v32);
    return 0;
  }
  else
  {
    if ( (int)a1[89] <= 0 )
    {
      if ( (int)a1[137] >= 0 )
        return 0;
      strcpy(v31, "bad asic id:");
    }
    else
    {
      v5 = *v1;
      v6 = v29;
      v7 = v29;
      v8 = a1[138];
      v9 = v29;
      v10 = (unsigned int)v5;
      v11 = (_DWORD *)(a1[126] - 4);
      do
      {
        v13 = v11[1];
        ++v11;
        v12 = v13;
        v14 = v8 + v4;
        if ( v13 < v10 )
        {
          v15 = v12 == 0;
          v16 = &v32[4 * (v7++ & 0xF)];
          if ( v15 )
          {
            *((_DWORD *)v16 - 272) = v6;
            *(_DWORD *)(v14 + 16) = 2;
          }
          else
          {
            *(_DWORD *)(v14 + 16) = 3;
            *((_DWORD *)v16 - 272) = v6;
          }
        }
        else
        {
          *(_DWORD *)(v14 + 16) = v9;
        }
        *v11 = v9;
        ++v6;
        v4 += 44;
      }
      while ( a1[89] > v6 );
      v17 = a1[137];
      if ( v7 >= 16 )
        v18 = 16;
      else
        v18 = v7;
      if ( v17 >= v7 )
      {
        if ( v7 > 0 )
        {
          v19 = 0;
          v20 = v30;
          do
          {
            v21 = *(_DWORD *)v20;
            v20 += 4;
            ++v19;
            *(_DWORD *)(v8 + 44 * v21 + 16) = 0;
          }
          while ( v19 < v18 );
        }
        return 0;
      }
      strcpy(v31, "bad asic id:");
      if ( v7 > 0 )
      {
        v23 = v30;
        v24 = 12;
        v25 = 0;
        do
        {
          ++v25;
          v26 = *(_DWORD *)v23;
          v23 += 4;
          v24 += snprintf(&v31[v24], 1024 - v24, "%03d ", v26);
        }
        while ( v25 < v18 );
      }
    }
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, "%s", v31);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/miner_monitor/update_miner_status/update_chip_status.c",
      193,
      "chip_speed_test",
      15,
      113,
      40,
      v32);
    return 0;
  }
}
