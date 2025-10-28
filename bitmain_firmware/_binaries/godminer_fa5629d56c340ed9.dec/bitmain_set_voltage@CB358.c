int bitmain_set_voltage()
{
  unsigned int v0; // r0
  int v1; // r5
  _DWORD *v3; // r3
  int v4; // r1
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v6[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( dword_1B571C || (v1 = sub_CA67C(), v1 >= 0) )
  {
    v0 = bitmain_convert_V_to_N();
    if ( v0 > 0xFF )
      return -2147482879;
    else
      return sub_CA290((void *)dword_1B5718, (unsigned __int8)v0);
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed", "bitmain_set_voltage");
    V_LOCK();
    logfmt_raw(v6, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v3) = 24916;
    HIWORD(v3) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v4) = -28900;
    HIWORD(v4) = (unsigned int)"" >> 16;
    zlog(*v3, v4, 173, "bitmain_set_voltage", 19, 717, 100, v6);
  }
  return v1;
}
