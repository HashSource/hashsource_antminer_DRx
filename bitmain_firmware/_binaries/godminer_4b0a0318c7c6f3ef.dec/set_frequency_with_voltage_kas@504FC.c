int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int v2; // r11
  int *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  int *v6; // r7
  float v7; // s17
  float v8; // s19
  int current_voltage; // r9
  float v10; // s21
  int *v11; // r6
  int j; // r4
  int v13; // t1
  float v14; // s16
  int v15; // r0
  int v16; // r10
  int v17; // r2
  int v18; // r0
  int *v19; // r6
  int v20; // r4
  int v21; // t1
  int v22; // r0
  int v23; // r10
  float v25; // s16
  int v26; // s20
  int v27; // r0
  int *v28; // r6
  int v29; // r4
  int v30; // t1
  int *v31; // r6
  int v32; // r4
  int v33; // t1
  int v34; // r11
  _BOOL4 v35; // r3
  int i; // r4
  int *v37; // r7
  int k; // r4
  int v39; // t1
  int v40; // r2
  float v41; // s16
  int v42; // r3
  unsigned int v43; // r5
  float *v44; // r10
  float v45; // s15
  float v46; // s17
  int eeprom_sweep_freq; // r10
  int v48; // r5
  int eeprom_freq; // r0
  int working_voltage; // [sp+1Ch] [bp-1220h]
  int v51; // [sp+24h] [bp-1218h]
  int v52; // [sp+28h] [bp-1214h] BYREF
  float v53; // [sp+2Ch] [bp-1210h] BYREF
  int v54; // [sp+30h] [bp-120Ch] BYREF
  int v55; // [sp+34h] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+38h] [bp-1204h] BYREF
  char v57[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = 0;
  v52 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v52);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v54 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 996);
  v8 = *(float *)(v4 + 992);
  v55 = 255;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v10 = *(float *)(a1 + 112);
  if ( *(int *)(a1 + 92) <= 19 )
  {
    V_LOCK();
    logfmt_raw(v57, 0x1000u, 0, "Warming up chains, please wait, this may take up 5 minutes");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
      179,
      "set_frequency_with_voltage_kas",
      30,
      310,
      60,
      v57);
    v25 = *(float *)(*v6 + 992);
    v26 = (int)(float)((float)(900.0 - v25) / 6.25);
    if ( v26 > 0 )
    {
      while ( 1 )
      {
        v25 = v25 + 6.25;
        if ( v52 > 0 )
          break;
LABEL_39:
        if ( v26 == ++v2 )
          goto LABEL_40;
      }
      v27 = *v6;
      if ( !*v6 )
        goto LABEL_26;
      v28 = v6;
      v29 = 0;
      while ( 1 )
      {
        ++v29;
        v23 = (*(int (__fastcall **)(int, _DWORD))(v27 + 192))(v27, 0);
        send_fake_work_kas(*v28);
        if ( v23 )
          return v23;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v52 <= v29 )
          goto LABEL_39;
        v30 = v28[1];
        ++v28;
        v27 = v30;
        if ( !v30 )
          goto LABEL_26;
      }
    }
LABEL_40:
    v34 = 180;
    check_temperature_base(a1, &v54, &v55);
    while ( v54 <= 19 )
    {
      v35 = v55 <= 19;
      if ( !v34 )
        v35 = 0;
      if ( !v35 )
        break;
      v34 -= 10;
      sleep(0xAu);
      if ( v52 > 0 )
      {
        for ( i = 0; i < v52; ++i )
        {
          check_temperature_base(a1, &v54, &v55);
          printf("min temp %d max temp %d\n", v54, v55);
        }
      }
    }
  }
  V_LOCK();
  logfmt_raw(v57, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    340,
    60,
    v57);
  if ( v52 > 0 )
  {
    v11 = v6 - 1;
    for ( j = 0; j < v52; ++j )
    {
      v13 = v11[1];
      ++v11;
      (*(void (**)(void))(v13 + 60))();
    }
  }
  v14 = *(float *)(*v6 + 992);
  v15 = (int)(float)((float)(v7 - v8) / 6.25);
  if ( v15 > 0 )
  {
    v16 = 0;
    v17 = 1717986919 * (current_voltage - working_voltage);
    v51 = v15 - (current_voltage - working_voltage) / 10;
    while ( 1 )
    {
      v14 = v14 + 6.25;
      if ( v52 > 0 )
        break;
LABEL_27:
      if ( working_voltage + 20 < current_voltage && (float)(v10 * v7) < v14 && v51 <= v16 )
      {
        current_voltage -= 10;
        v22 = (*(int (__fastcall **)(int, int, int))(a1 + 28))(a1, current_voltage, v17);
        if ( v22 )
          return v22;
        usleep((__useconds_t)&loc_30D40);
      }
      if ( (int)(float)((float)(v7 - v8) / 6.25) == ++v16 )
        goto LABEL_33;
    }
    v18 = *v6;
    if ( *v6 )
    {
      v19 = v6;
      v20 = 0;
      do
      {
        ++v20;
        v22 = (*(int (__fastcall **)(int, _DWORD, int))(v18 + 192))(v18, 0, v17);
        if ( v22 )
          return v22;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v52 <= v20 )
          goto LABEL_27;
        v21 = v19[1];
        ++v19;
        v18 = v21;
      }
      while ( v21 );
    }
LABEL_26:
    printf(aInvalidPointer, "be_runtimes[b]", v17);
    return 3;
  }
LABEL_33:
  if ( v7 != v14 && v52 > 0 )
  {
    v31 = v6 - 1;
    v32 = 0;
    do
    {
      v33 = v31[1];
      ++v31;
      ++v32;
      v22 = (*(int (**)(void))(v33 + 192))();
      if ( v22 )
        return v22;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v52 > v32 );
  }
  V_LOCK();
  logfmt_raw(v57, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, current_voltage);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    500,
    60,
    v57);
  if ( v52 > 0 )
  {
    v37 = v6 - 1;
    for ( k = 0; k < v52; ++k )
    {
      v39 = v37[1];
      ++v37;
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(v39 + 248)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v37 + 248), dest, &v53) )
      {
        v40 = *v37;
        v41 = 0.0;
        v42 = *(_DWORD *)(*v37 + 352);
        if ( v42 )
        {
          v43 = 0;
          v44 = (float *)dest;
          do
          {
            v45 = *v44++;
            v41 = v41 + v45;
            printf("%-6.1f ", v45);
            if ( (v43 & 0xF) == 0xF || (v40 = *v37, v42 = *(_DWORD *)(*v37 + 352), v42 - 1 == v43) )
            {
              putchar(10);
              v40 = *v37;
              v42 = *(_DWORD *)(*v37 + 352);
            }
            ++v43;
          }
          while ( v42 > v43 );
        }
        v46 = v41 / (float)v42;
        *(_DWORD *)(v40 + 480) = (int)v46;
        *(float *)(v40 + 996) = (float)(int)v46;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(k);
        V_LOCK();
        v48 = *(_DWORD *)(*v37 + 248);
        eeprom_freq = api_get_eeprom_freq(k);
        logfmt_raw(
          v57,
          0x1000u,
          0,
          "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d\n",
          v48,
          eeprom_freq,
          v46,
          eeprom_sweep_freq);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          179,
          "set_frequency_with_voltage_kas",
          30,
          522,
          40,
          v57);
        (*(void (**)(void))(*v37 + 204))();
      }
    }
  }
  return 0;
}
