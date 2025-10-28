int __fastcall api_get_eeprom_sweep_result(int a1, void *dest, size_t a3)
{
  char *v4; // r3
  int v5; // r1
  char v6; // t1
  char s[2047]; // [sp+10h] [bp-1800h] BYREF
  char v9; // [sp+80Fh] [bp-1001h] BYREF
  char src[127]; // [sp+810h] [bp-1000h] BYREF
  char v11; // [sp+88Fh] [bp-F81h] BYREF

  if ( dword_1B5650[0] && *(_BYTE *)(dword_1B5650[0] + 80) )
  {
    v4 = &v9;
    v5 = *(_DWORD *)(dword_1B5650[0] + 4 * dword_1B5650[a1 + 2]) + 62;
    do
    {
      v6 = *(_BYTE *)++v5;
      *++v4 = v6;
    }
    while ( v4 != &v11 );
    memcpy(dest, src, a3);
    return 0;
  }
  else
  {
    snprintf(
      s,
      0x800u,
      "%s: g_eeprom_data is not ready, chain = %d.\n",
      "api_get_eeprom_sweep_result",
      dword_1B5650[a1 + 2]);
    V_LOCK();
    logfmt_raw(src, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "api_get_eeprom_sweep_result",
      27,
      1439,
      100,
      src);
    return -1;
  }
}
