int __fastcall set_sweep_frequency_dash(int a1, float *a2)
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
  int v16; // r8
  float *v17; // r7
  char v18; // r5
  float v19; // s15
  bool v20; // fzf
  bool v21; // fnf
  int v22; // r3
  float v23; // s16
  int v25; // [sp+4h] [bp-12A0h]
  int v26; // [sp+20h] [bp-1284h]
  int v27; // [sp+24h] [bp-1280h]
  int v28; // [sp+38h] [bp-126Ch]
  int chain_domain_num; // [sp+3Ch] [bp-1268h]
  float *v30; // [sp+48h] [bp-125Ch]
  int i; // [sp+4Ch] [bp-1258h]
  int v32; // [sp+58h] [bp-124Ch]
  int v33; // [sp+5Ch] [bp-1248h]
  int v34; // [sp+60h] [bp-1244h]
  unsigned int v36; // [sp+6Ch] [bp-1238h] BYREF
  _DWORD v37[2]; // [sp+70h] [bp-1234h] BYREF
  int v38; // [sp+78h] [bp-122Ch]
  int v39; // [sp+7Ch] [bp-1228h]
  _DWORD v40[7]; // [sp+80h] [bp-1224h] BYREF
  int v41; // [sp+9Ch] [bp-1208h]
  _DWORD v42[128]; // [sp+A0h] [bp-1204h] BYREF
  char v43[4100]; // [sp+2A0h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 1004);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 356);
  v32 = domain_asic_num;
  v8 = 0.0;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = a2;
    v11 = (float *)v42;
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
    v34 = v13 + 1;
    v28 = 4 * domain_asic_num;
    v33 = 1;
    do
    {
      if ( v32 <= 0 )
      {
        v14 = (float)v33;
      }
      else
      {
        v14 = (float)v33;
        v30 = a2;
        for ( i = 0; i != v32; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v15 = v30;
            v16 = 0;
            v17 = (float *)&v42[i];
            v18 = i;
            do
            {
              v19 = *v15;
              ++v16;
              v20 = *v15 == *v17;
              v21 = *v15 < *v17;
              v15 = (float *)((char *)v15 + v28);
              if ( !v21 && !v20 )
              {
                v22 = *(_DWORD *)(a1 + 452);
                v23 = v5 + (float)(v14 * v2);
                v38 = 0x80000;
                v37[0] = 0;
                v37[1] = 0;
                v36 = 0;
                BYTE1(v38) = v22 * v18;
                if ( v19 < v23 )
                  v23 = v19;
                v39 = 0;
                sub_6FE20(&v36);
                v37[0] = v36;
                V_LOCK();
                V_INT((int)v40, "chain", *(int *)(a1 + 260));
                logfmt_raw(
                  v43,
                  0x1000u,
                  0,
                  v41,
                  v40[0],
                  v40[1],
                  v40[2],
                  v40[3],
                  v40[4],
                  v40[5],
                  v40[6],
                  v41,
                  "set freq: %.2f, expected freq: %.2f",
                  v27,
                  v23,
                  v23);
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/chip_setting.c",
                  150,
                  "ChipSetting_one_asic_freq_DASH_1766",
                  35,
                  836,
                  20,
                  v43);
                (*(void (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v37);
                usleep(0x2710u);
                *v17 = v23;
              }
              v18 += v32;
              v17 = (float *)((char *)v17 + v28);
            }
            while ( chain_domain_num != v16 );
          }
          ++v30;
        }
      }
      V_LOCK();
      v26 = v33++;
      logfmt_raw(
        v43,
        0x1000u,
        0,
        "Chain [%d] set sweep %f, start_freq = %f, sweep_step %f, step_id %d ",
        *(_DWORD *)(a1 + 252),
        v25,
        (float)(v5 + (float)(v14 * v2)),
        v5,
        v2,
        v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
        173,
        "set_sweep_frequency_dash",
        24,
        513,
        20,
        v43);
    }
    while ( v33 != v34 );
  }
  usleep(0x7A120u);
  return 0;
}
