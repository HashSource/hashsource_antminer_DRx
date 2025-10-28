int __fastcall set_sweep_frequency_kda_2110(int a1, float *a2)
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
  int v19; // r8
  float *v20; // r7
  char v21; // r5
  float v22; // s15
  int v23; // r3
  float v24; // s16
  int v25; // r3
  int v27; // [sp+4h] [bp-12A0h]
  int v28; // [sp+20h] [bp-1284h]
  int v29; // [sp+24h] [bp-1280h]
  int v30; // [sp+38h] [bp-126Ch]
  int chain_domain_num; // [sp+3Ch] [bp-1268h]
  _DWORD *v32; // [sp+44h] [bp-1260h]
  float *v33; // [sp+48h] [bp-125Ch]
  int i; // [sp+4Ch] [bp-1258h]
  char *s; // [sp+50h] [bp-1254h]
  int v36; // [sp+54h] [bp-1250h]
  int v37; // [sp+58h] [bp-124Ch]
  int v38; // [sp+5Ch] [bp-1248h]
  int v39; // [sp+60h] [bp-1244h]
  unsigned int v41; // [sp+6Ch] [bp-1238h] BYREF
  _DWORD v42[2]; // [sp+70h] [bp-1234h] BYREF
  int v43; // [sp+78h] [bp-122Ch]
  int v44; // [sp+7Ch] [bp-1228h]
  _DWORD v45[7]; // [sp+80h] [bp-1224h] BYREF
  int v46; // [sp+9Ch] [bp-1208h]
  _DWORD v47[128]; // [sp+A0h] [bp-1204h] BYREF
  char v48[4100]; // [sp+2A0h] [bp-1004h] BYREF

  v5 = *(float *)(a1 + 996);
  chain_domain_num = platform_get_chain_domain_num();
  domain_asic_num = platform_get_domain_asic_num();
  v7 = *(_DWORD *)(a1 + 352);
  v37 = domain_asic_num;
  v8 = 0.0;
  if ( v7 )
  {
    v9 = &a2[v7];
    v10 = a2;
    v11 = (float *)v47;
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
    LOWORD(v14) = 20532;
    LOWORD(v15) = 27372;
    LOWORD(v16) = -21648;
    HIWORD(v14) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v15) = (unsigned int)":" >> 16;
    HIWORD(v16) = (unsigned int)"rlboard_DASH_1766" >> 16;
    v32 = v14;
    s = v15;
    v36 = v16;
    v30 = 4 * v37;
    v38 = 1;
    do
    {
      if ( v37 <= 0 )
      {
        v17 = (float)v38;
      }
      else
      {
        v17 = (float)v38;
        v33 = a2;
        for ( i = 0; i != v37; ++i )
        {
          if ( chain_domain_num > 0 )
          {
            v18 = v33;
            v19 = 0;
            v20 = (float *)&v47[i];
            v21 = i;
            do
            {
              v22 = *v18;
              ++v19;
              v18 = (float *)((char *)v18 + v30);
              if ( v22 > *v20 )
              {
                v23 = *(_DWORD *)(a1 + 444);
                v24 = v5 + (float)(v17 * v2);
                v43 = 0x80000;
                v42[0] = 0;
                v42[1] = 0;
                v41 = 0;
                BYTE1(v43) = v23 * v21;
                if ( v22 < v24 )
                  v24 = v22;
                v44 = 0;
                sub_957C4(&v41);
                v42[0] = v41;
                V_LOCK();
                V_INT((int)v45, s, *(int *)(a1 + 256));
                logfmt_raw(
                  v48,
                  0x1000u,
                  0,
                  v46,
                  v45[0],
                  v45[1],
                  v45[2],
                  v45[3],
                  v45[4],
                  v45[5],
                  v45[6],
                  v46,
                  v36,
                  v29,
                  v24,
                  v24);
                V_UNLOCK();
                zlog(
                  *v32,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/backend/chip_setting.c",
                  150,
                  "ChipSetting_one_asic_freq_KDA_2110",
                  34,
                  835,
                  20,
                  v48);
                (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v42);
                usleep(0x2710u);
                *v20 = v24;
              }
              v21 += v37;
              v20 = (float *)((char *)v20 + v30);
            }
            while ( chain_domain_num != v19 );
          }
          ++v33;
        }
      }
      V_LOCK();
      LOWORD(v25) = -21612;
      HIWORD(v25) = (unsigned int)"_sensor_temp_local_on_ctrlboard_DASH_1766" >> 16;
      v28 = v38++;
      logfmt_raw(v48, 0x1000u, 0, v25, *(_DWORD *)(a1 + 248), v27, (float)(v5 + (float)(v17 * v2)), v5, v2, v28);
      V_UNLOCK();
      zlog(
        *v32,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        171,
        "set_sweep_frequency_kda_2110",
        28,
        446,
        20,
        v48);
    }
    while ( v38 != v39 );
  }
  usleep(0x7A120u);
  return 0;
}
