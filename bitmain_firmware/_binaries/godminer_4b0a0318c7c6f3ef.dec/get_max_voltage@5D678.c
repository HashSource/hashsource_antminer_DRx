int get_max_voltage()
{
  double v0; // d0
  _BYTE *v1; // r3
  int v2; // r4
  int v5; // r1
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v1) = 27384;
  HIWORD(v1) = (unsigned int)&unk_196B00 >> 16;
  v2 = (unsigned __int8)*v1;
  if ( *v1 )
  {
    bitmain_convert_N_to_V();
    return (int)(v0 * 100.0);
  }
  else
  {
    V_LOCK();
    LOWORD(v5) = 31900;
    HIWORD(v5) = (unsigned int)"ocol" >> 16;
    LOWORD(v6) = 31232;
    HIWORD(v6) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v9, 0x1000u, v2, v6, v5);
    V_UNLOCK();
    LOWORD(v7) = 20532;
    HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v8) = 29756;
    HIWORD(v8) = (unsigned int)"2f" >> 16;
    zlog(*v7, v8, 150, "get_max_voltage", 15, 531, 100, v9);
    return -1;
  }
}
