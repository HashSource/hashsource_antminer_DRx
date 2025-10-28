int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  char *all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  float v6; // s20
  int v7; // r2
  int v8; // s19
  int v9; // r0
  char *v10; // r5
  int v11; // r4
  int v12; // t1
  char *v15; // r5
  int v16; // r4
  int v17; // t1
  char *v18; // r8
  int v19; // r4
  int v20; // t1
  int v21; // r12
  int v22; // lr
  unsigned int v23; // r6
  float *v24; // r7
  float v25; // s16
  float v26; // s15
  size_t v27; // r0
  _WORD *v28; // r0
  float v29; // s17
  int v30; // r3
  int eeprom_sweep_freq; // r11
  int v32; // r7
  int eeprom_freq; // r0
  int working_voltage; // [sp+18h] [bp-223Ch]
  int v35; // [sp+18h] [bp-223Ch]
  int v36; // [sp+1Ch] [bp-2238h]
  int current_voltage; // [sp+20h] [bp-2234h]
  int v38; // [sp+24h] [bp-2230h]
  int v39; // [sp+28h] [bp-222Ch] BYREF
  float v40; // [sp+2Ch] [bp-2228h] BYREF
  char src[32]; // [sp+30h] [bp-2224h] BYREF
  float dest; // [sp+50h] [bp-2204h] BYREF
  char v43; // [sp+54h] [bp-2200h] BYREF
  char s[4096]; // [sp+250h] [bp-2004h] BYREF
  char v45[4100]; // [sp+1250h] [bp-1004h] BYREF

  v2 = 0;
  v39 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v39);
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 996);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 992);
  if ( v4 > *(float *)(a1 + 104) )
    v4 = *(float *)(a1 + 104);
  working_voltage = get_working_voltage();
  if ( !is_check_asic_voltage_enable() )
  {
    v2 = set_check_asic_voltage(1);
    V_LOCK();
    logfmt_raw(v45, 0x1000u, 0, "set high voltage befor rise freq.");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/machine_runtime/machine_runtime_base.c",
      166,
      "set_frequency_with_voltage_base",
      31,
      519,
      40,
      v45);
  }
  v6 = v4 * *(float *)(a1 + 112);
  V_LOCK();
  logfmt_raw(v45, 0x1000u, 0, "Initializing chip cluster, please wait, this may take up to 2 minutes...");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_frequency_with_voltage_base",
    31,
    529,
    60,
    v45);
  current_voltage = get_current_voltage();
  v7 = 1717986919 * (current_voltage - working_voltage);
  v38 = (current_voltage - working_voltage) / 10;
  v8 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v8 <= 0 )
  {
LABEL_21:
    if ( v4 == v5 || v39 <= 0 )
    {
LABEL_28:
      V_LOCK();
      logfmt_raw(v45, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v4, current_voltage);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "set_frequency_with_voltage_base",
        31,
        564,
        60,
        v45);
      if ( v39 > 0 )
      {
        v18 = all_created_runtime - 4;
        v19 = 0;
        v35 = v2;
        do
        {
          v20 = *((_DWORD *)v18 + 1);
          v18 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v20 + 248)) == 4
            && !api_get_eeprom_asic_freqs(*(_DWORD *)(*(_DWORD *)v18 + 248), &dest, &v40) )
          {
            memset(s, 0, sizeof(s));
            v21 = *(_DWORD *)v18;
            v22 = *(_DWORD *)(*(_DWORD *)v18 + 352);
            if ( v22 )
            {
              v23 = 0;
              v24 = (float *)&v43;
              v25 = dest + 0.0;
              sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
              strcat(s, src);
              while ( 1 )
              {
                v21 = *(_DWORD *)v18;
                ++v23;
                v22 = *(_DWORD *)(*(_DWORD *)v18 + 352);
                if ( v22 <= v23 )
                  break;
                v26 = *v24++;
                v25 = v25 + v26;
                sprintf(src, "ASIC-%03d [%.2f] ", v23, v26);
                v27 = strlen(s);
                v28 = (_WORD *)stpcpy(&s[v27], src);
                if ( (v23 & 7) == 7 )
                  *v28 = 10;
              }
            }
            else
            {
              v25 = 0.0;
            }
            v29 = v25 / (float)v22;
            (*(void (__fastcall **)(int, float *))(v21 + 204))(v21, &dest);
            v30 = *(_DWORD *)v18;
            *(_DWORD *)(v30 + 480) = (int)v29;
            *(float *)(v30 + 996) = (float)(int)v29;
            eeprom_sweep_freq = api_get_eeprom_sweep_freq(v19);
            V_LOCK();
            v32 = *(_DWORD *)(*(_DWORD *)v18 + 248);
            eeprom_freq = api_get_eeprom_freq(v19);
            logfmt_raw(
              v45,
              0x1000u,
              0,
              "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s",
              v32,
              eeprom_freq,
              v29,
              eeprom_sweep_freq,
              s);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/machine_runtime/machine_runtime_base.c",
              166,
              "set_frequency_with_voltage_base",
              31,
              597,
              40,
              v45);
          }
          ++v19;
        }
        while ( v39 > v19 );
        return v35;
      }
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
        v2 = (*(int (**)(void))(v17 + 192))();
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v39 <= v16 )
          goto LABEL_28;
      }
    }
  }
  else
  {
    v36 = 0;
    while ( 1 )
    {
      v5 = v5 + 6.25;
      if ( v39 > 0 )
        break;
LABEL_14:
      if ( working_voltage + 20 < current_voltage && v6 < v5 && v8 - v38 <= v36 )
      {
        current_voltage -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, current_voltage);
        if ( v2 )
          return v2;
        usleep((__useconds_t)&loc_30D40);
      }
      v7 = v8;
      if ( v8 == ++v36 )
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
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v9 + 192))(v9, 0, v7);
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v39 <= v11 )
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
      printf(aInvalidPointer, "be_runtimes[b]", v7);
      return 3;
    }
  }
  return v2;
}
