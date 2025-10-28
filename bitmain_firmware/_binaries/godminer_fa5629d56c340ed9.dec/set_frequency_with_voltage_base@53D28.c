int __fastcall set_frequency_with_voltage_base(int a1)
{
  int v2; // r6
  char *all_created_runtime; // r8
  float v4; // s17
  float v5; // s16
  int working_voltage; // r10
  float v7; // s20
  int current_voltage; // r0
  int v9; // r2
  int v10; // s19
  int v11; // r0
  char *v12; // r5
  int v13; // r4
  int v14; // t1
  char *v17; // r5
  int v18; // r4
  int v19; // t1
  char *v20; // r8
  int i; // r4
  int v22; // t1
  unsigned int eeprom_asic_freqs; // r7
  int v24; // r3
  int v25; // r12
  float *v26; // r10
  float v27; // s16
  float v28; // s15
  size_t v29; // r0
  _WORD *v30; // r0
  float v31; // s17
  int v32; // r3
  int eeprom_sweep_freq; // r10
  int v34; // r7
  int eeprom_freq; // r0
  int v36; // [sp+18h] [bp-223Ch]
  int v37; // [sp+20h] [bp-2234h]
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
  v4 = *(float *)(*(_DWORD *)all_created_runtime + 1004);
  v5 = *(float *)(*(_DWORD *)all_created_runtime + 1000);
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
      562,
      40,
      v45);
  }
  if ( *(_DWORD *)(a1 + 92) != -64 )
    working_voltage += (*(int (__fastcall **)(int))a1)(a1);
  v7 = v4 * *(float *)(a1 + 112);
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
    572,
    60,
    v45);
  current_voltage = get_current_voltage();
  v9 = 1717986919 * (current_voltage - working_voltage);
  v37 = current_voltage;
  v38 = (current_voltage - working_voltage) / 10;
  v10 = (int)(float)((float)(v4 - v5) / 6.25);
  if ( v10 <= 0 )
  {
LABEL_23:
    if ( v4 == v5 || v39 <= 0 )
    {
LABEL_30:
      V_LOCK();
      logfmt_raw(v45, 0x1000u, 0, "set PT2_freq to %.2f, current voltage %d", v4, v37);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "set_frequency_with_voltage_base",
        31,
        607,
        60,
        v45);
      if ( v39 > 0 )
      {
        v20 = all_created_runtime - 4;
        for ( i = 0; i < v39; ++i )
        {
          v22 = *((_DWORD *)v20 + 1);
          v20 += 4;
          if ( api_get_eeprom_fmt_version(*(_DWORD *)(v22 + 252)) == 4 )
          {
            eeprom_asic_freqs = api_get_eeprom_asic_freqs(*(_DWORD *)(*(_DWORD *)v20 + 252), &dest, &v40);
            if ( !eeprom_asic_freqs )
            {
              memset(s, 0, sizeof(s));
              v24 = *(_DWORD *)v20;
              v25 = *(_DWORD *)(*(_DWORD *)v20 + 356);
              if ( v25 )
              {
                v26 = (float *)&v43;
                v27 = dest + 0.0;
                sprintf(src, "ASIC-%03d [%.2f] ", 0, dest);
                strcat(s, src);
                while ( 1 )
                {
                  v24 = *(_DWORD *)v20;
                  ++eeprom_asic_freqs;
                  v25 = *(_DWORD *)(*(_DWORD *)v20 + 356);
                  if ( v25 <= eeprom_asic_freqs )
                    break;
                  v28 = *v26++;
                  v27 = v27 + v28;
                  sprintf(src, "ASIC-%03d [%.2f] ", eeprom_asic_freqs, v28);
                  v29 = strlen(s);
                  v30 = (_WORD *)stpcpy(&s[v29], src);
                  if ( (eeprom_asic_freqs & 7) == 7 )
                    *v30 = 10;
                }
              }
              else
              {
                v27 = 0.0;
              }
              v31 = v27 / (float)v25;
              (*(void (__fastcall **)(int, float *))(v24 + 204))(v24, &dest);
              v32 = *(_DWORD *)v20;
              *(_DWORD *)(v32 + 488) = (int)v31;
              *(float *)(v32 + 1004) = (float)(int)v31;
              eeprom_sweep_freq = api_get_eeprom_sweep_freq(i);
              V_LOCK();
              v34 = *(_DWORD *)(*(_DWORD *)v20 + 252);
              eeprom_freq = api_get_eeprom_freq(i);
              logfmt_raw(
                v45,
                0x1000u,
                0,
                "chain:%d, PT2_freq: %d, sweep_average_freq: %.2f, sweep_level_freq: %d  sweep_matrix:\n%s",
                v34,
                eeprom_freq,
                v31,
                eeprom_sweep_freq,
                s);
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/machine_runtime/machine_runtime_base.c",
                166,
                "set_frequency_with_voltage_base",
                31,
                640,
                40,
                v45);
            }
          }
        }
      }
    }
    else
    {
      v17 = all_created_runtime - 4;
      v18 = 0;
      while ( 1 )
      {
        v19 = *((_DWORD *)v17 + 1);
        v17 += 4;
        ++v18;
        v2 = (*(int (**)(void))(v19 + 192))();
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v39 <= v18 )
          goto LABEL_30;
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
LABEL_16:
      if ( working_voltage + 20 < v37 && v7 < v5 && v10 - v38 <= v36 )
      {
        v37 -= 10;
        v2 = (*(int (__fastcall **)(int, int))(a1 + 28))(a1, v37);
        if ( v2 )
          return v2;
        usleep((__useconds_t)&loc_30D40);
      }
      v9 = v10;
      if ( v10 == ++v36 )
        goto LABEL_23;
    }
    v11 = *(_DWORD *)all_created_runtime;
    if ( *(_DWORD *)all_created_runtime )
    {
      v12 = all_created_runtime;
      v13 = 0;
      while ( 1 )
      {
        ++v13;
        v2 = (*(int (__fastcall **)(int, _DWORD, int))(v11 + 192))(v11, 0, v9);
        if ( v2 )
          break;
        usleep(*(_DWORD *)(a1 + 100));
        if ( v39 <= v13 )
          goto LABEL_16;
        v14 = *((_DWORD *)v12 + 1);
        v12 += 4;
        v11 = v14;
        if ( !v14 )
          goto LABEL_29;
      }
    }
    else
    {
LABEL_29:
      printf(aInvalidPointer, "be_runtimes[b]", v9);
      return 3;
    }
  }
  return v2;
}
