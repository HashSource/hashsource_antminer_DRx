int __fastcall sub_C4740(int a1, char *s)
{
  char sa[2048]; // [sp+10h] [bp-1800h] BYREF
  char v4[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_1B4530[0] && *(_BYTE *)(dword_1B4530[0] + 80) )
  {
    sprintf(
      s,
      "%x%02x",
      *(unsigned __int8 *)(*(_DWORD *)(dword_1B4530[0] + 4 * a1) + 31),
      *(unsigned __int8 *)(*(_DWORD *)(dword_1B4530[0] + 4 * a1) + 32));
    return 0;
  }
  else
  {
    snprintf(sa, 0x800u, "%s: g_eeprom_data is not ready, chain = %d.", "get_pcb_version", a1);
    V_LOCK();
    logfmt_raw(v4, 0x1000u, 0, sa);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/eeprom/bitmain_eeprom.c",
      170,
      "get_pcb_version",
      15,
      1195,
      100,
      v4);
    return 255;
  }
}
