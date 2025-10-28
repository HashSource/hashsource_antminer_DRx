int __fastcall set_voltage_by_steps(int a1, int a2, unsigned int a3)
{
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r4
  int v9; // r5
  unsigned int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r6
  signed int v13; // r8
  int v15; // r1
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r1
  char v19[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v5) = 30084;
    HIWORD(v5) = (unsigned int)"check_feedback_voltage end!" >> 16;
    logfmt_raw(v19, 0x1000u, 0, v5, a1);
    V_UNLOCK();
    LOWORD(v6) = 20532;
    HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v7) = 29756;
    HIWORD(v7) = (unsigned int)"2f" >> 16;
    zlog(*v6, v7, 150, "set_voltage_by_steps", 20, 470, 40, v19);
    if ( byte_196AF8 )
      v8 = dword_196B14;
    else
      v8 = sub_5CF10();
    v9 = a1 - v8;
    if ( a1 != v8 )
    {
      LOWORD(v10) = -13107;
      if ( a3 >= 0x64 )
        v11 = 100;
      else
        v11 = a3;
      HIWORD(v10) = -13108;
      v12 = (unsigned int)((v11 * (unsigned __int64)v10) >> 32) >> 3;
      if ( v9 < 0 )
        v12 = -v12;
      v13 = abs32(v12);
      while ( (int)abs32(v9) > v13 )
      {
        v8 += v12;
        v9 -= v12;
        sub_5D014(v8);
      }
      if ( a1 != v8 )
        sub_5D014(a1);
    }
    return 0;
  }
  else
  {
    V_LOCK();
    LOWORD(v15) = 31900;
    HIWORD(v15) = (unsigned int)"ocol" >> 16;
    LOWORD(v16) = 31232;
    HIWORD(v16) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v19, 0x1000u, 0, v16, v15);
    V_UNLOCK();
    LOWORD(v17) = 20532;
    HIWORD(v17) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v18) = 29756;
    HIWORD(v18) = (unsigned int)"2f" >> 16;
    zlog(*v17, v18, 150, "set_voltage_by_steps", 20, 466, 100, v19);
    return -1;
  }
}
