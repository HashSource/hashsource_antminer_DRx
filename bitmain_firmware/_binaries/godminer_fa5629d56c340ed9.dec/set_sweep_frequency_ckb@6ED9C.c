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
  float v14; // s23
  float *v15; // r9
  int v16; // r7
  float *v17; // r6
  float v18; // s15
  bool v19; // fzf
  bool v20; // fnf
  float v21; // s16
  int v22; // r3
  char v23; // r3
  float *v24; // r6
  int v25; // r5
  float v26; // s14
  int v27; // r2
  int v29; // [sp+4h] [bp-12D8h]
  int v30; // [sp+20h] [bp-12BCh]
  int v31; // [sp+24h] [bp-12B8h]
  char v32; // [sp+3Ch] [bp-12A0h]
  int v33; // [sp+40h] [bp-129Ch]
  int chain_domain_num; // [sp+44h] [bp-1298h]
  float *v35; // [sp+50h] [bp-128Ch]
  int i; // [sp+54h] [bp-1288h]
  int v37; // [sp+60h] [bp-127Ch]
  int v38; // [sp+64h] [bp-1278h]
  int v39; // [sp+68h] [bp-1274h]
  unsigned int v41; // [sp+74h] [bp-1268h] BYREF
  _DWORD v42[7]; // [sp+78h] [bp-1264h] BYREF
  int v43; // [sp+94h] [bp-1248h]
  _DWORD v44[16]; // [sp+98h] [bp-1244h] BYREF
  _DWORD v45[128]; // [sp+D8h] [bp-1204h] BYREF
  char s[4100]; // [sp+2D8h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 1004);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 356);
  v37 = domain_asic_num;
  v8 = 0.0;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = a2;
    v11 = (float *)v45;
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
    v39 = v13 + 1;
    v33 = 4 * domain_asic_num;
    v38 = 1;
    do
    {
      if ( v37 <= 0 )
      {
        v14 = (float)v38;
      }
      else
      {
        v14 = (float)v38;
        v35 = a2;
        for ( i = 0; i != v37; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v15 = v35;
            v16 = 0;
            v17 = (float *)&v45[i];
            v32 = i;
            do
            {
              v18 = *v15;
              ++v16;
              v19 = *v15 == *v17;
              v20 = *v15 < *v17;
              v15 = (float *)((char *)v15 + v33);
              if ( !v20 && !v19 )
              {
                v21 = v5 + (float)(v14 * v2);
                v22 = *(_DWORD *)(a1 + 452);
                v44[2] = 0x80000;
                v44[0] = 0;
                v23 = v22 * v32;
                v44[1] = 0;
                v44[3] = 0;
                if ( v18 < v21 )
                  v21 = v18;
                BYTE1(v44[2]) = v23;
                v41 = 0;
                sub_6AF5C(&v41);
                v44[0] = v41;
                V_LOCK();
                V_INT((int)v42, "chain", *(int *)(a1 + 260));
                logfmt_raw(
                  s,
                  0x1000u,
                  0,
                  v43,
                  v42[0],
                  v42[1],
                  v42[2],
                  v42[3],
                  v42[4],
                  v42[5],
                  v42[6],
                  v43,
                  "set freq: %.2f, expected freq: %.2f",
                  v31,
                  v21,
                  v21);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/chip_setting.c",
                  150,
                  "ChipSetting_one_asic_freq_CKB_2042",
                  34,
                  836,
                  20,
                  s);
                (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v44);
                usleep(0x2710u);
                *v17 = v21;
              }
              v32 += v37;
              v17 = (float *)((char *)v17 + v33);
            }
            while ( chain_domain_num != v16 );
          }
          ++v35;
        }
      }
      V_LOCK();
      v30 = v38++;
      logfmt_raw(
        s,
        0x1000u,
        0,
        "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ",
        *(_DWORD *)(a1 + 252),
        v29,
        (float)(v5 + (float)(v14 * v2)),
        v5,
        v2,
        v30);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        171,
        "set_sweep_frequency_ckb",
        23,
        437,
        20,
        s);
    }
    while ( v38 != v39 );
  }
  memset(s, 0, 0x1000u);
  memset(v44, 0, sizeof(v44));
  if ( v37 * chain_domain_num > 0 )
  {
    v24 = (float *)v45;
    v25 = 0;
    do
    {
      v26 = *v24++;
      v27 = v25++;
      sprintf((char *)v44, "ASIC-%03d [%.2f] ", v27, v26);
      strcat(s, (const char *)v44);
    }
    while ( v25 != v37 * chain_domain_num );
  }
  puts(s);
  usleep(0x7A120u);
  return 0;
}
