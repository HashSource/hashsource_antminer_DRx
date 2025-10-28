int __fastcall set_check_asic_voltage(int a1)
{
  int v2; // r3
  _DWORD *v3; // r4
  int v4; // r1
  unsigned __int8 *v5; // r3
  int result; // r0
  int v7; // r3
  int v8; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = 30112;
  HIWORD(v2) = (unsigned int)"get_min_pcb_temp" >> 16;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v9, 0x1000u, 0, v2);
  V_UNLOCK();
  LOWORD(v4) = 29756;
  HIWORD(v4) = (unsigned int)"2f" >> 16;
  zlog(*v3, v4, 150, "set_check_asic_voltage", 22, 563, 40, v9);
  LOWORD(v5) = 27384;
  HIWORD(v5) = (unsigned int)&unk_196B00 >> 16;
  if ( a1 )
    result = set_voltage_by_steps(*((_DWORD *)v5 + 5), *v5, 0x64u);
  else
    result = set_voltage(*((_DWORD *)v5 + 5), *v5);
  if ( result )
  {
    V_LOCK();
    LOWORD(v7) = 30136;
    HIWORD(v7) = (unsigned int)"max_chip_temp" >> 16;
    logfmt_raw(v9, 0x1000u, 0, v7);
    V_UNLOCK();
    LOWORD(v8) = 29756;
    HIWORD(v8) = (unsigned int)"2f" >> 16;
    zlog(*v3, v8, 150, "set_check_asic_voltage", 22, 571, 100, v9);
    return -1;
  }
  return result;
}
