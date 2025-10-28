int get_working_voltage()
{
  unsigned __int8 *v0; // r3
  int v1; // r4
  int v3; // r1
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v0) = 27384;
  HIWORD(v0) = (unsigned int)&unk_196B00 >> 16;
  v1 = *v0;
  if ( *v0 )
    return *((_DWORD *)v0 + 3);
  V_LOCK();
  LOWORD(v3) = 31900;
  HIWORD(v3) = (unsigned int)"ocol" >> 16;
  LOWORD(v4) = 31232;
  HIWORD(v4) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
  logfmt_raw(v7, 0x1000u, v1, v4, v3);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 29756;
  HIWORD(v6) = (unsigned int)"2f" >> 16;
  zlog(*v5, v6, 150, "get_working_voltage", 19, 521, 100, v7);
  return -1;
}
