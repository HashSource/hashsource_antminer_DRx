int __fastcall set_frequency_with_voltage_ks5(int a1)
{
  int v2; // r11
  _DWORD *all_created_runtime; // r0
  int v4; // r3
  float v5; // s15
  _DWORD *v6; // r7
  float v7; // s17
  float v8; // s19
  int current_voltage; // r9
  int working_voltage; // r10
  float v11; // s21
  _DWORD *v12; // r6
  int i; // r4
  int v14; // t1
  float v15; // s16
  int v16; // r0
  int v17; // r2
  int v18; // r0
  _DWORD *v19; // r6
  int v20; // r4
  int v21; // t1
  int result; // r0
  float v23; // s16
  int v24; // s20
  int v25; // r0
  _DWORD *v26; // r6
  int v27; // r4
  int v28; // t1
  _DWORD *v30; // r6
  int v31; // r4
  int v32; // t1
  int v33; // r11
  _BOOL4 v34; // r3
  int k; // r4
  _DWORD *v36; // r7
  int j; // r4
  int v38; // t1
  int v39; // r2
  float v40; // s16
  int v41; // r3
  unsigned int v42; // r5
  float *v43; // r10
  float v44; // s15
  float v45; // s17
  int eeprom_sweep_freq; // r10
  int v47; // r5
  int eeprom_freq; // r0
  int v49; // [sp+20h] [bp-121Ch]
  int v50; // [sp+24h] [bp-1218h]
  int v51; // [sp+28h] [bp-1214h] BYREF
  float v52; // [sp+2Ch] [bp-1210h] BYREF
  int v53; // [sp+30h] [bp-120Ch] BYREF
  int v54; // [sp+34h] [bp-1208h] BYREF
  _BYTE dest[512]; // [sp+38h] [bp-1204h] BYREF
  char v56[4100]; // [sp+238h] [bp-1004h] BYREF

  v2 = 0;
  v51 = 0;
  all_created_runtime = get_all_created_runtime(&v51);
  v4 = *all_created_runtime;
  v5 = *(float *)(a1 + 104);
  v53 = -64;
  v6 = all_created_runtime;
  v7 = *(float *)(v4 + 996);
  v8 = *(float *)(v4 + 992);
  v54 = 255;
  if ( v7 > v5 )
    v7 = v5;
  current_voltage = get_current_voltage();
  working_voltage = get_working_voltage();
  v11 = *(float *)(a1 + 112);
  if ( *(int *)(a1 + 92) > 19 )
  {
LABEL_4:
    V_LOCK();
    logfmt_raw(v56, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
      179,
      "set_frequency_with_voltage_ks5",
      30,
      315,
      60,
      v56);
    if ( v51 > 0 )
    {
      v12 = v6 - 1;
      for ( i = 0; i < v51; ++i )
      {
        v14 = v12[1];
        ++v12;
        (*(void (**)(void))(v14 + 60))();
      }
    }
    v15 = *(float *)(*v6 + 992);
    v16 = (int)(float)((float)(v7 - v8) / 6.25);
    if ( v16 <= 0 )
    {
LABEL_33:
      if ( v7 == v15 || v51 <= 0 )
      {
LABEL_49:
        V_LOCK();
        logfmt_raw(v56, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v7, current_voltage);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
          179,
          "set_frequency_with_voltage_ks5",
          30,
          478,
          60,
          v56);
        if ( v51 > 0 )
        {
          v36 = v6 - 1;
          for ( j = 0; j < v51; ++j )
          {
            v38 = v36[1];
            ++v36;
            if ( api_get_eeprom_fmt_version(*(_DWORD *)(v38 + 248)) == 4
              && !api_get_eeprom_asic_freqs(*(_DWORD *)(*v36 + 248), dest, &v52) )
            {
              v39 = *v36;
              v40 = 0.0;
              v41 = *(_DWORD *)(*v36 + 352);
              if ( v41 )
              {
                v42 = 0;
                v43 = (float *)dest;
                do
                {
                  v44 = *v43++;
                  v40 = v40 + v44;
                  printf("%-6.1f ", v44);
                  if ( (v42 & 0xF) == 0xF || (v39 = *v36, v41 = *(_DWORD *)(*v36 + 352), v41 - 1 == v42) )
                  {
                    putchar(10);
                    v39 = *v36;
                    v41 = *(_DWORD *)(*v36 + 352);
                  }
                  ++v42;
                }
                while ( v41 > v42 );
              }
              v45 = v40 / (float)v41;
              *(_DWORD *)(v39 + 480) = (int)v45;
              *(float *)(v39 + 996) = (float)(int)v45;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(j);
              V_LOCK();
              v47 = *(_DWORD *)(*v36 + 248);
              eeprom_freq = api_get_eeprom_freq(j);
              logfmt_raw(
                v56,
                0x1000u,
                0,
                "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d\n",
                v47,
                eeprom_freq,
                v45,
                eeprom_sweep_freq);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
                179,
                "set_frequency_with_voltage_ks5",
                30,
                500,
                40,
                v56);
              (*(void (**)(void))(*v36 + 204))();
            }
          }
        }
        return 0;
      }
      else
      {
        v30 = v6 - 1;
        v31 = 0;
        while ( 1 )
        {
          v32 = v30[1];
          ++v30;
          ++v31;
          result = (*(int (**)(void))(v32 + 192))();
          if ( result )
            break;
          usleep(*(_DWORD *)(a1 + 100));
          if ( v51 <= v31 )
            goto LABEL_49;
        }
      }
      return result;
    }
    v17 = 1717986919 * (current_voltage - working_voltage);
    v49 = 0;
    v50 = v16 - (current_voltage - working_voltage) / 10;
    while ( 1 )
    {
      v15 = v15 + 6.25;
      if ( v51 > 0 )
        break;
LABEL_26:
      if ( working_voltage + 20 < current_voltage && (float)(v11 * v7) < v15 && v50 <= v49 )
      {
        current_voltage -= 10;
        result = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( result )
          return result;
        usleep((__useconds_t)&loc_30D40);
      }
      v17 = (int)(float)((float)(v7 - v8) / 6.25);
      if ( v17 == ++v49 )
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
        result = (*(int (__fastcall **)(int, _DWORD, int))(v18 + 192))(v18, 0, v17);
        if ( result )
          return result;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v51 <= v20 )
          goto LABEL_26;
        v21 = v19[1];
        ++v19;
        v18 = v21;
      }
      while ( v21 );
    }
LABEL_25:
    printf(aInvalidPointer, "be_runtimes[b]", v17);
    return 3;
  }
  V_LOCK();
  logfmt_raw(v56, 0x1000u, 0, "Warming up chains, please wait, this may take up 5 minutes");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/ks5_2382/machine_runtime_ks5_2382.c",
    179,
    "set_frequency_with_voltage_ks5",
    30,
    286,
    60,
    v56);
  v23 = *(float *)(*v6 + 992);
  v24 = (int)(float)((float)(600.0 - v23) / 6.25);
  if ( v24 <= 0 )
  {
LABEL_40:
    v33 = 180;
    check_temperature_base(a1, &v53, &v54);
    while ( v53 <= 19 )
    {
      v34 = v54 <= 19;
      if ( !v33 )
        v34 = 0;
      if ( !v34 )
        break;
      v33 -= 10;
      sleep(0xAu);
      if ( v51 > 0 )
      {
        for ( k = 0; k < v51; ++k )
        {
          check_temperature_base(a1, &v53, &v54);
          printf("min temp %d max temp %d\n", v53, v54);
        }
      }
    }
    goto LABEL_4;
  }
  while ( 1 )
  {
    v23 = v23 + 6.25;
    if ( v51 > 0 )
      break;
LABEL_39:
    if ( v24 == ++v2 )
      goto LABEL_40;
  }
  v25 = *v6;
  if ( !*v6 )
    goto LABEL_25;
  v26 = v6;
  v27 = 0;
  while ( 1 )
  {
    ++v27;
    result = (*(int (__fastcall **)(int, _DWORD))(v25 + 192))(v25, 0);
    if ( result )
      return result;
    usleep(*(_DWORD *)(a1 + 100));
    if ( v51 <= v27 )
      goto LABEL_39;
    v28 = v26[1];
    ++v26;
    v25 = v28;
    if ( !v28 )
      goto LABEL_25;
  }
}
