int __fastcall set_frequency_with_voltage_kas(int a1)
{
  int *v1; // r9
  int *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  int *v6; // r7
  float v7; // s17
  float v8; // s16
  int current_voltage; // r5
  int working_voltage; // r8
  int v11; // r2
  float v12; // s19
  int v13; // s18
  int *v14; // r6
  int j; // r5
  int v16; // t1
  float v17; // s16
  int v18; // r10
  int v19; // r0
  int *v20; // r6
  int v21; // r5
  int v22; // t1
  int v23; // r0
  int v24; // r10
  float v26; // s16
  int v27; // s21
  int v28; // r11
  int v29; // r0
  int *v30; // r6
  int v31; // r5
  int v32; // t1
  int *v33; // r6
  int v34; // r5
  int v35; // t1
  int v36; // r6
  _BOOL4 v37; // r3
  int i; // r10
  int *v39; // r7
  int k; // r4
  int v41; // t1
  int v42; // r1
  int v43; // r2
  float v44; // s16
  int v45; // r3
  unsigned int v46; // r5
  float *v47; // r10
  float v48; // s15
  float v49; // s17
  int eeprom_sweep_freq; // r10
  int v51; // r5
  int eeprom_freq; // r0
  int v53; // [sp+18h] [bp-121Ch]
  int v54; // [sp+1Ch] [bp-1218h]
  int v55; // [sp+20h] [bp-1214h] BYREF
  float v56; // [sp+24h] [bp-1210h] BYREF
  int v57; // [sp+28h] [bp-120Ch] BYREF
  int v58; // [sp+2Ch] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+30h] [bp-1204h] BYREF
  char v60[4100]; // [sp+230h] [bp-1004h] BYREF

  v55 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v55);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v57 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 1004);
  v58 = 255;
  v8 = *(float *)(v4 + 1000);
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  v53 = current_voltage;
  working_voltage = get_working_voltage();
  if ( *(_DWORD *)(a1 + 92) == -64 )
  {
    v12 = v7 * *(float *)(a1 + 112);
    v54 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
  }
  else
  {
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
    v11 = *(_DWORD *)(a1 + 92);
    if ( v11 > 19 )
      v1 = &g_zc;
    v12 = v7 * *(float *)(a1 + 112);
    v54 = (current_voltage - working_voltage) / 10;
    v13 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v11 > 19 )
      goto LABEL_7;
  }
  V_LOCK();
  v1 = &g_zc;
  logfmt_raw(v60, 0x1000u, 0, "Warming up chains, please wait, this may take up 5 minutes");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    310,
    60,
    v60);
  v26 = *(float *)(*v6 + 1000);
  v27 = (int)(float)((float)(900.0 - v26) / 6.25);
  if ( v27 > 0 )
  {
    v28 = 0;
    while ( 1 )
    {
      v26 = v26 + 6.25;
      if ( v55 > 0 )
        break;
LABEL_43:
      if ( v27 == ++v28 )
        goto LABEL_44;
    }
    v29 = *v6;
    if ( !*v6 )
      goto LABEL_30;
    v30 = v6;
    v31 = 0;
    while ( 1 )
    {
      ++v31;
      v24 = (*(int (__fastcall **)(int, _DWORD))(v29 + 192))(v29, 0);
      send_fake_work_kas(*v30);
      if ( v24 )
        return v24;
      usleep(*(_DWORD *)(a1 + 100));
      if ( v55 <= v31 )
        goto LABEL_43;
      v32 = v30[1];
      ++v30;
      v29 = v32;
      if ( !v32 )
        goto LABEL_30;
    }
  }
LABEL_44:
  v36 = 180;
  check_temperature_base(a1, &v57, &v58);
  while ( v57 <= 19 )
  {
    v37 = v58 <= 19;
    if ( !v36 )
      v37 = 0;
    if ( !v37 )
      break;
    v36 -= 10;
    sleep(0xAu);
    if ( v55 > 0 )
    {
      for ( i = 0; i < v55; ++i )
      {
        check_temperature_base(a1, &v57, &v58);
        printf("min temp %d max temp %d\n", v57, v58);
      }
    }
  }
LABEL_7:
  V_LOCK();
  logfmt_raw(v60, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    340,
    60,
    v60);
  if ( v55 > 0 )
  {
    v14 = v6 - 1;
    for ( j = 0; j < v55; ++j )
    {
      v16 = v14[1];
      ++v14;
      (*(void (**)(void))(v16 + 60))();
    }
  }
  v17 = *(float *)(*v6 + 1000);
  if ( v13 > 0 )
  {
    v18 = 0;
    while ( 1 )
    {
      v17 = v17 + 6.25;
      if ( v55 > 0 )
        break;
LABEL_31:
      if ( working_voltage + 20 < v53 && v17 > v12 && v13 - v54 <= v18 )
      {
        v53 -= 10;
        v23 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v53);
        if ( v23 )
          return v23;
        usleep((__useconds_t)&loc_30D40);
      }
      if ( ++v18 == v13 )
        goto LABEL_37;
    }
    v19 = *v6;
    if ( *v6 )
    {
      v20 = v6;
      v21 = 0;
      do
      {
        ++v21;
        v23 = (*(int (__fastcall **)(int, _DWORD))(v19 + 192))(v19, 0);
        if ( v23 )
          return v23;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v55 <= v21 )
          goto LABEL_31;
        v22 = v20[1];
        ++v20;
        v19 = v22;
      }
      while ( v22 );
    }
LABEL_30:
    printf(aInvalidPointer, "be_runtimes[b]");
    return 3;
  }
LABEL_37:
  if ( v17 != v7 && v55 > 0 )
  {
    v33 = v6 - 1;
    v34 = 0;
    do
    {
      v35 = v33[1];
      ++v33;
      ++v34;
      v23 = (*(int (**)(void))(v35 + 192))();
      if ( v23 )
        return v23;
      usleep(*(_DWORD *)(a1 + 100));
    }
    while ( v55 > v34 );
  }
  V_LOCK();
  logfmt_raw(v60, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, v53);
  V_UNLOCK();
  zlog(
    *v1,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
    179,
    "set_frequency_with_voltage_kas",
    30,
    500,
    60,
    v60);
  if ( v55 > 0 )
  {
    v39 = v6 - 1;
    for ( k = 0; k < v55; ++k )
    {
      v41 = v39[1];
      ++v39;
      if ( api_get_eeprom_fmt_version(*(_DWORD *)(v41 + 252)) == 4
        && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v39 + 252), dest, &v56) )
      {
        v43 = *v39;
        v44 = 0.0;
        v45 = *(_DWORD *)(*v39 + 356);
        if ( v45 )
        {
          v46 = 0;
          v47 = (float *)dest;
          do
          {
            v48 = *v47++;
            v44 = v44 + v48;
            printf("%-6.1f ", v42, v48);
            if ( (v46 & 0xF) == 0xF || (v43 = *v39, v45 = *(_DWORD *)(*v39 + 356), v42 = v45 - 1, v45 - 1 == v46) )
            {
              putchar(10);
              v43 = *v39;
              v45 = *(_DWORD *)(*v39 + 356);
            }
            ++v46;
          }
          while ( v45 > v46 );
        }
        v49 = v44 / (float)v45;
        *(_DWORD *)(v43 + 488) = (int)v49;
        *(float *)(v43 + 1004) = (float)(int)v49;
        eeprom_sweep_freq = api_get_eeprom_sweep_freq(k);
        V_LOCK();
        v51 = *(_DWORD *)(*v39 + 252);
        eeprom_freq = api_get_eeprom_freq(k);
        logfmt_raw(
          v60,
          0x1000u,
          0,
          "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d\n",
          v51,
          eeprom_freq,
          v49,
          eeprom_sweep_freq);
        V_UNLOCK();
        zlog(
          *v1,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/kas_2380/machine_runtime_kas_2380.c",
          179,
          "set_frequency_with_voltage_kas",
          30,
          522,
          40,
          v60);
        (*(void (**)(void))(*v39 + 204))();
      }
    }
  }
  return 0;
}
