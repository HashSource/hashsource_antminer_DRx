int __fastcall eeprom_read(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  unsigned int v5; // r6
  int v6; // r8
  int *v9; // r12
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r12
  int v15; // r1
  int v16; // r11
  int v17; // r6
  int v18; // r7
  void *v19; // r0
  int v20; // r3
  const char *v21; // r2
  int v22; // r11
  int v23; // r1
  const char *v25; // r2
  _DWORD *v26; // r3
  int v27; // r1
  const char *v28; // r2
  _DWORD *v29; // r3
  int v30; // r1
  unsigned __int8 v32; // [sp+1Fh] [bp-1805h] BYREF
  _DWORD s[4]; // [sp+20h] [bp-1804h] BYREF
  __int16 v34; // [sp+30h] [bp-17F4h]
  char v35[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    LOWORD(v28) = -13596;
    HIWORD(v28) = (unsigned int)"et_rvn" >> 16;
    v22 = -2147483391;
    snprintf((char *)s, 0x800u, v28, "eeprom_read", a1);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v29) = -12376;
    HIWORD(v29) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v30) = -14132;
    HIWORD(v30) = (unsigned int)"_rvn" >> 16;
    zlog(*v29, v30, 170, "eeprom_read", 11, 131, 100, v35);
    return v22;
  }
  LOWORD(v6) = -15096;
  v5 = 8 * a1;
  HIWORD(v6) = (unsigned int)&unk_18BC50 >> 16;
  if ( !*(_DWORD *)(v6 + 8 * a1 + 76) )
  {
    v22 = eeprom_open(a1);
    if ( v22 < 0 )
    {
      LOWORD(v25) = -13524;
      HIWORD(v25) = (unsigned int)"_mining_rvn" >> 16;
      snprintf((char *)s, 0x800u, v25, "eeprom_read", a1);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v26) = -12376;
      HIWORD(v26) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v27) = -14132;
      HIWORD(v27) = (unsigned int)"_rvn" >> 16;
      zlog(*v26, v27, 170, "eeprom_read", 11, 136, 100, v35);
      return v22;
    }
  }
  LOWORD(v9) = -13416;
  HIWORD(v9) = (unsigned int)"ial_interval_time_rvn" >> 16;
  v10 = *v9;
  v11 = v9[1];
  v12 = v9[2];
  v13 = v9[3];
  v14 = v9[4];
  s[0] = v10;
  s[1] = v11;
  s[2] = v12;
  s[3] = v13;
  v34 = v14;
  V_LOCK();
  logfmt_raw(v35, 0x1000u, 0, s);
  V_UNLOCK();
  LOWORD(v15) = -14132;
  HIWORD(v15) = (unsigned int)"_rvn" >> 16;
  zlog(g_zc, v15, 170, "eeprom_read", 11, 152, 20, v35);
  if ( a4 )
  {
    v16 = a3;
    v17 = v6 + v5;
    v18 = a3 + a4;
    while ( 1 )
    {
      v19 = *(void **)(v17 + 72);
      v20 = v16;
      v32 = a2;
      ++v16;
      ++a2;
      if ( iic_read_reg(v19, &v32, 1, v20, 1u) != 1 )
        break;
      if ( v16 == v18 )
        goto LABEL_11;
    }
    LOWORD(v21) = -13396;
    HIWORD(v21) = (unsigned int)"n" >> 16;
    v22 = -2147483392;
    snprintf((char *)s, 0x800u, v21, a1, v32);
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v23) = -14132;
    HIWORD(v23) = (unsigned int)"_rvn" >> 16;
    zlog(g_zc, v23, 170, "eeprom_read", 11, 158, 100, v35);
    return v22;
  }
LABEL_11:
  usleep((__useconds_t)&loc_7A120);
  return 0;
}
