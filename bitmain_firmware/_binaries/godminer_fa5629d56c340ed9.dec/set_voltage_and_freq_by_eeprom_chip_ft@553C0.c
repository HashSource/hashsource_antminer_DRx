int __fastcall set_voltage_and_freq_by_eeprom_chip_ft(_DWORD *a1, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v3; // r7
  _DWORD *v4; // r8
  int eeprom_chip_ft; // r5
  int eeprom_chip_bin; // r0
  int v7; // r3
  char **v8; // r11
  char **v9; // r5
  int v10; // r2
  char *v11; // r3
  int *v12; // lr
  int *v13; // r1
  int *v14; // r0
  int v15; // r3
  int v16; // t1
  int v17; // r2
  int v18; // r12
  int v19; // t1
  int v20; // r3
  int v24; // [sp+2Ch] [bp-1188h] BYREF
  _DWORD v25[16]; // [sp+30h] [bp-1184h] BYREF
  _BYTE v26[64]; // [sp+70h] [bp-1144h] BYREF
  char v27[256]; // [sp+B0h] [bp-1104h] BYREF
  char v28[4100]; // [sp+1B0h] [bp-1004h] BYREF

  v2 = 0;
  *a1 = 0;
  *a2 = 0xFFFF;
  get_all_created_runtime(&v24);
  if ( v24 > 0 )
  {
    v3 = v25;
    v4 = v26;
    while ( 2 )
    {
      eeprom_chip_ft = api_get_eeprom_chip_ft(v2);
      eeprom_chip_bin = api_get_eeprom_chip_bin(v2);
      snprintf(v27, 0x100u, "%s BIN%d", eeprom_chip_ft, eeprom_chip_bin);
      v7 = opt_algo;
      *v3++ = 0;
      *v4++ = 0;
      v8 = &off_1944A8;
      if ( v7 != 11 )
        v8 = &off_1945D4;
      v9 = v8 + 75;
      while ( !*v8 || !strstr(*v8, v27) )
      {
        v8 += 3;
        if ( v8 == v9 )
        {
          V_LOCK();
          logfmt_raw(v28, 0x1000u, 0, "chip_ft %s not in lists", v27);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/machine_runtime/machine_runtime_base.c",
            166,
            "get_voltage_and_freq_by_chip_ft",
            31,
            1005,
            100,
            v28);
          return 33;
        }
      }
      v10 = v24;
      ++v2;
      v11 = v8[2];
      *(v3 - 1) = v8[1];
      *(v4 - 1) = v11;
      if ( v10 > v2 )
        continue;
      break;
    }
    if ( v10 > 0 )
    {
      v12 = (int *)v26;
      v13 = v25;
      v14 = &v25[v10];
      do
      {
        v16 = *v13++;
        v15 = v16;
        v17 = *a1;
        v19 = *v12++;
        v18 = v19;
        if ( *a1 < v15 )
          v17 = v15;
        *a1 = v17;
        v20 = *a2;
        if ( *a2 >= v18 )
          v20 = v18;
        *a2 = v20;
      }
      while ( v13 != v14 );
    }
  }
  V_LOCK();
  logfmt_raw(v28, 0x1000u, 0, "%s vol:%d,freq:%d", "set_voltage_and_freq_by_eeprom_chip_ft", *a1, *a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "set_voltage_and_freq_by_eeprom_chip_ft",
    38,
    1044,
    0x28u,
    v28);
  return 0;
}
