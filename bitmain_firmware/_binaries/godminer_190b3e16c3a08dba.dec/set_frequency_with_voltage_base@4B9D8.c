int __fastcall set_frequency_with_voltage_base(int a1)
{
  char *all_created_runtime; // r7
  float v3; // s17
  float v4; // s16
  int current_voltage; // r10
  int working_voltage; // r8
  float v7; // s20
  int v8; // s19
  int v9; // r0
  char *v10; // r5
  int v11; // r4
  int v12; // t1
  int result; // r0
  char *v15; // r5
  int v16; // r4
  int v17; // t1
  char *v18; // r7
  int i; // r4
  int v20; // t1
  int v21; // r12
  float v22; // s16
  int v23; // r3
  unsigned int v24; // r5
  float *v25; // r10
  float v26; // s15
  int v27; // r2
  double v28; // d6
  int v29; // s11
  double v30; // d8
  int v31; // [sp+4h] [bp-1228h]
  int v32; // [sp+18h] [bp-1214h]
  int v33; // [sp+1Ch] [bp-1210h]
  int v34; // [sp+20h] [bp-120Ch] BYREF
  float v35; // [sp+24h] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+28h] [bp-1204h] BYREF
  char v37[4100]; // [sp+228h] [bp-1004h] BYREF

  v34 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v34);
  v3 = *(float *)(*(_DWORD *)all_created_runtime + 924);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 920);
  if ( v3 > *(float *)(a1 + 96) )
    v3 = *(float *)(a1 + 96);
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 84) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v7 = v3 * *(float *)(a1 + 104);
  V_LOCK();
  logfmt_raw(v37, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_frequency_with_voltage_base",
    31,
    420,
    60,
    v37);
  v33 = (current_voltage - working_voltage) / 10;
  v8 = (int)(float)((float)(v3 - v4) / 6.25);
  if ( v8 <= 0 )
  {
LABEL_21:
    if ( v3 == v4 || v34 <= 0 )
    {
LABEL_28:
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v3, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "set_frequency_with_voltage_base",
        31,
        454,
        60,
        v37);
      if ( v34 > 0 )
      {
        v18 = all_created_runtime - 4;
        for ( i = 0; i < v34; ++i )
        {
          v20 = *((_DWORD *)v18 + 1);
          v18 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v20 + 220)) == 4
            && !api_get_eeprom_sweep_freqs(*(_DWORD *)(*(_DWORD *)v18 + 220), dest, &v35) )
          {
            v21 = *(_DWORD *)v18;
            v22 = 0.0;
            v23 = *(_DWORD *)(*(_DWORD *)v18 + 304);
            if ( v23 )
            {
              v24 = 0;
              v25 = (float *)dest;
              do
              {
                v26 = *v25++;
                v22 = v22 + v26;
                printf("%-6.1f ", v26);
                if ( (v24 & 0xF) == 0xF
                  || (v21 = *(_DWORD *)v18, v23 = *(_DWORD *)(*(_DWORD *)v18 + 304), v23 - 1 == v24) )
                {
                  putchar(10);
                  v21 = *(_DWORD *)v18;
                  v23 = *(_DWORD *)(*(_DWORD *)v18 + 304);
                }
                ++v24;
              }
              while ( v23 > v24 );
            }
            v27 = *(_DWORD *)(v21 + 220);
            v28 = v35;
            v29 = (int)(float)(v22 / (float)v23);
            v30 = (float)(v22 / (float)v23);
            *(_DWORD *)(v21 + 432) = v29;
            *(float *)(v21 + 924) = (float)v29;
            printf(
              "[%s] chain-%d, sweep_start_freq = %f, sweep_step = %f, sweep_average_freq = %f\n",
              "set_frequency_with_voltage_base",
              v27,
              v23,
              (float)v29,
              v28,
              v30);
            V_LOCK();
            logfmt_raw(
              v37,
              0x1000u,
              0,
              "chain:%d, sweep_step: %f, sweep_average_freq: %f\n",
              *(_DWORD *)(*(_DWORD *)v18 + 220),
              v31,
              v35,
              v30);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "set_frequency_with_voltage_base",
              31,
              477,
              40,
              v37);
            (*(void (**)(void))(*(_DWORD *)v18 + 192))();
          }
        }
      }
      return 0;
    }
    else
    {
      v15 = all_created_runtime - 4;
      v16 = 0;
      while ( 1 )
      {
        v17 = *((_DWORD *)v15 + 1);
        v15 += 4;
        ++v16;
        result = (*(int (**)(void))(v17 + 188))();
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 92));
        if ( v34 <= v16 )
          goto LABEL_28;
      }
    }
  }
  else
  {
    v32 = 0;
    while ( 1 )
    {
      v4 = v4 + 6.25;
      if ( v34 > 0 )
        break;
LABEL_14:
      if ( working_voltage + 20 < current_voltage && v7 < v4 && v8 - v33 <= v32 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( result )
          return result;
        usleep((__useconds_t)&loc_30D40);
      }
      if ( v8 == ++v32 )
        goto LABEL_21;
    }
    v9 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v10 = all_created_runtime;
      v11 = 0;
      while ( 1 )
      {
        ++v11;
        result = (*(int (__fastcall **)(int, _DWORD))(v9 + 188))(v9, 0);
        if ( result )
          break;
        usleep(*(_DWORD *)(a1 + 92));
        if ( v34 <= v11 )
          goto LABEL_14;
        v12 = *((_DWORD *)v10 + 1);
        v10 += 4;
        v9 = v12;
        if ( !v12 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      printf("invalid pointer(%s)!\n", "be_runtimes[b]");
      return 3;
    }
  }
  return result;
}
