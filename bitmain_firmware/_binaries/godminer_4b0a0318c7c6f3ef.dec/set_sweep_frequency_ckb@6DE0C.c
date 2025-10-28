int __fastcall set_sweep_frequency_ckb(int a1, float *a2)
{
  float v2; // s0
  float v5; // s22
  int domain_asic_num; // r0
  int v7; // r1
  float v8; // s15
  float *v9; // r1
  float *v10; // r3
  float *v11; // r2
  float v12; // s14
  int v13; // r3
  _DWORD *v14; // r2
  char *v15; // r1
  int v16; // r0
  float v17; // s23
  float *v18; // r9
  int v19; // r7
  float *v20; // r6
  float v21; // s15
  bool v22; // fzf
  bool v23; // fnf
  float v24; // s16
  int v25; // r3
  char v26; // r3
  int v27; // r3
  int v28; // r3
  const char *v29; // r7
  float *v30; // r6
  int v31; // r5
  float v32; // s14
  int v33; // r2
  int v35; // [sp+4h] [bp-12D8h]
  int v36; // [sp+20h] [bp-12BCh]
  int v37; // [sp+24h] [bp-12B8h]
  char v38; // [sp+3Ch] [bp-12A0h]
  int v39; // [sp+40h] [bp-129Ch]
  int chain_domain_num; // [sp+44h] [bp-1298h]
  _DWORD *v41; // [sp+4Ch] [bp-1290h]
  float *v42; // [sp+50h] [bp-128Ch]
  int i; // [sp+54h] [bp-1288h]
  char *v44; // [sp+58h] [bp-1284h]
  int v45; // [sp+5Ch] [bp-1280h]
  int v46; // [sp+60h] [bp-127Ch]
  int v47; // [sp+64h] [bp-1278h]
  int v48; // [sp+68h] [bp-1274h]
  unsigned int v50; // [sp+74h] [bp-1268h] BYREF
  _DWORD v51[7]; // [sp+78h] [bp-1264h] BYREF
  int v52; // [sp+94h] [bp-1248h]
  _DWORD v53[16]; // [sp+98h] [bp-1244h] BYREF
  _DWORD v54[128]; // [sp+D8h] [bp-1204h] BYREF
  char s[4100]; // [sp+2D8h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 996);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 352);
  v46 = domain_asic_num;
  v8 = 0.0;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = a2;
    v11 = (float *)v54;
    do
    {
      v12 = *v10++;
      *v11++ = v5;
      if ( v12 > v8 )
        v8 = v12;
    }
    while ( v10 != v9 );
  }
  v13 = (int)(((float)((float)(v8 - v5) + v2) - 0.001) / v2);
  if ( v13 > 0 )
  {
    v48 = v13 + 1;
    LOWORD(v14) = 20532;
    LOWORD(v15) = 27372;
    LOWORD(v16) = -21648;
    HIWORD(v14) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v15) = (unsigned int)":" >> 16;
    HIWORD(v16) = (unsigned int)"rlboard_DASH_1766" >> 16;
    v41 = v14;
    v44 = v15;
    v39 = 4 * v46;
    v47 = 1;
    v45 = v16;
    do
    {
      if ( v46 <= 0 )
      {
        v17 = (float)v47;
      }
      else
      {
        v17 = (float)v47;
        v42 = a2;
        for ( i = 0; i != v46; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v18 = v42;
            v19 = 0;
            v20 = (float *)&v54[i];
            v38 = i;
            do
            {
              v21 = *v18;
              ++v19;
              v22 = *v18 == *v20;
              v23 = *v18 < *v20;
              v18 = (float *)((char *)v18 + v39);
              if ( !v23 && !v22 )
              {
                v24 = v5 + (float)(v17 * v2);
                v25 = *(_DWORD *)(a1 + 444);
                v53[2] = 0x80000;
                v53[0] = 0;
                v26 = v25 * v38;
                v53[1] = 0;
                v53[3] = 0;
                if ( v21 < v24 )
                  v24 = v21;
                BYTE1(v53[2]) = v26;
                v50 = 0;
                sub_69FCC(&v50);
                v53[0] = v50;
                V_LOCK();
                V_INT((int)v51, v44, *(int *)(a1 + 256));
                logfmt_raw(
                  s,
                  0x1000u,
                  0,
                  v52,
                  v51[0],
                  v51[1],
                  v51[2],
                  v51[3],
                  v51[4],
                  v51[5],
                  v51[6],
                  v52,
                  v45,
                  v37,
                  v24,
                  v24);
                V_UNLOCK();
                zlog(
                  *v41,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/chip_setting.c",
                  150,
                  "ChipSetting_one_asic_freq_CKB_2042",
                  34,
                  835,
                  20,
                  s);
                (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v53);
                usleep(0x2710u);
                *v20 = v24;
              }
              v38 += v46;
              v20 = (float *)((char *)v20 + v39);
            }
            while ( chain_domain_num != v19 );
          }
          ++v42;
        }
      }
      V_LOCK();
      LOWORD(v27) = -21612;
      HIWORD(v27) = (unsigned int)"_sensor_temp_local_on_ctrlboard_DASH_1766" >> 16;
      v36 = v47++;
      logfmt_raw(s, 0x1000u, 0, v27, *(_DWORD *)(a1 + 248), v35, (float)(v5 + (float)(v17 * v2)), v5, v2, v36);
      V_UNLOCK();
      zlog(
        *v41,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        171,
        "set_sweep_frequency_ckb",
        23,
        437,
        20,
        s);
    }
    while ( v47 != v48 );
  }
  memset(s, 0, 0x1000u);
  memset(v53, 0, sizeof(v53));
  if ( v46 * chain_domain_num > 0 )
  {
    LOWORD(v29) = -11080;
    v30 = (float *)v54;
    v31 = 0;
    do
    {
      v32 = *v30++;
      v33 = v31;
      HIWORD(v29) = (unsigned int)"1B3C1 BIN4" >> 16;
      ++v31;
      sprintf((char *)v53, v29, v33, v28, v32);
      strcat(s, (const char *)v53);
    }
    while ( v31 != v46 * chain_domain_num );
  }
  puts(s);
  usleep(0x7A120u);
  return 0;
}
