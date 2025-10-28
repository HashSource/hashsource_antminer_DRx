int __fastcall format_hashrate_string(int a1, char *a2)
{
  double v2; // d0
  double v5; // d8
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // r3
  double v10; // d0
  double v11; // d8
  const char *v12; // r1
  const char *v14; // r1
  char v15[4096]; // [sp+10h] [bp-1000h] BYREF

  v5 = v2;
  V_LOCK();
  LOWORD(v6) = -26724;
  HIWORD(v6) = (unsigned int)"'\\u%04X'" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v6, v2, a1);
  V_UNLOCK();
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v8) = -27004;
  HIWORD(v8) = (unsigned int)"%04X" >> 16;
  zlog(*v7, v8, 134, "format_hashrate_string", 22, 51, 20, v15);
  if ( v2 < 10000.0 )
  {
    LOWORD(v14) = -26692;
    HIWORD(v14) = (unsigned int)"eger" >> 16;
    return sprintf(a2, v14, v2, a1);
  }
  else
  {
    if ( v2 < 10000000.0 )
    {
      v9 = 75;
      v11 = v2 * 0.001;
    }
    else
    {
      if ( v2 >= 1.0e10 )
        v9 = 71;
      else
        v9 = 77;
      if ( v2 >= 1.0e10 )
        v10 = 0.000000001;
      else
        v10 = 0.000001;
      v11 = v5 * v10;
    }
    LOWORD(v12) = -26680;
    HIWORD(v12) = (unsigned int)"big integer" >> 16;
    return sprintf(a2, v12, v11, v9, a1);
  }
}
