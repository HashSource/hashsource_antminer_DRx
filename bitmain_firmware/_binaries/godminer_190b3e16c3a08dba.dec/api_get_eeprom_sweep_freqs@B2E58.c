int __fastcall api_get_eeprom_sweep_freqs(int a1, void *dest, float *a3)
{
  int v4; // r0
  char *v5; // r3
  int v6; // r1
  float v7; // s13
  float v8; // s14
  int v9; // t1
  int v10; // r5
  char src[512]; // [sp+10h] [bp-1A00h] BYREF
  char s[2048]; // [sp+210h] [bp-1800h] BYREF
  char v14[4096]; // [sp+A10h] [bp-1000h] BYREF

  if ( dword_18C508[0] && *(_BYTE *)(dword_18C508[0] + 80) )
  {
    v4 = *(_DWORD *)(dword_18C508[0] + 4 * dword_18C508[a1 + 2]);
    v5 = src;
    v6 = v4 + 62;
    v7 = (float)*(unsigned __int16 *)(v4 + 41);
    v8 = (double)*(unsigned __int16 *)(v4 + 61) * 0.01;
    do
    {
      v9 = *(unsigned __int8 *)++v6;
      *(float *)v5 = v7 + (float)((float)v9 * v8);
      v5 += 4;
    }
    while ( s != v5 );
    v10 = (int)a3;
    if ( a3 )
      v10 = 1;
    if ( !dest )
      v10 = 0;
    if ( v10 )
    {
      *a3 = v8;
      memcpy(dest, src, 0x200u);
      return 0;
    }
    else
    {
      snprintf(s, 0x800u, "%s: sweep_freqs is NULL\n", "api_get_eeprom_sweep_freqs");
      V_LOCK();
      logfmt_raw(v14, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
        170,
        "api_get_eeprom_sweep_freqs",
        26,
        1333,
        100,
        v14);
      return -2;
    }
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_sweep_freqs",
      dword_18C508[a1 + 2]);
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_freqs",
      26,
      1314,
      100,
      v14);
    return -1;
  }
}
