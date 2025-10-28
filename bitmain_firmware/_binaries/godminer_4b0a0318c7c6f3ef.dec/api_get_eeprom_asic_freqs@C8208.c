int __fastcall api_get_eeprom_asic_freqs(int a1, void *dest, float *a3)
{
  int v4; // lr
  int v5; // r0
  char *v6; // r3
  int v7; // r1
  float v8; // s13
  float v9; // s14
  int v10; // t1
  int v11; // r5
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  char v15[4096]; // [sp+A10h] [bp-1000h] BYREF

  v4 = dword_1B4538[a1];
  if ( dword_1B4530[0] && *(_BYTE *)(dword_1B4530[0] + 80) )
  {
    v5 = *(_DWORD *)(dword_1B4530[0] + 4 * v4);
    v6 = src;
    v7 = v5 + 62;
    v8 = (float)*(unsigned __int16 *)(v5 + 41);
    v9 = (double)*(unsigned __int16 *)(v5 + 61) * 0.01;
    do
    {
      v10 = *(unsigned __int8 *)++v7;
      *(float *)v6 = v8 + (float)((float)v10 * v9);
      v6 += 4;
    }
    while ( s != v6 );
    v11 = (int)a3;
    if ( a3 )
      v11 = 1;
    if ( !dest )
      v11 = 0;
    if ( v11 )
    {
      *a3 = v9;
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      snprintf(s, 0x800u, "%s: sweep_freqs is NULL\n", "api_get_eeprom_asic_freqs", v4);
      V_LOCK();
      logfmt_raw(v15, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "api_get_eeprom_asic_freqs",
        25,
        1390,
        100,
        v15);
      return -2;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.\n", "api_get_eeprom_asic_freqs", dword_1B4538[a1]);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_asic_freqs",
      25,
      1371,
      100,
      v15);
    return -1;
  }
}
