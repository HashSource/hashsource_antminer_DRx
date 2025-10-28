int __fastcall set_voltage(int a1, int a2)
{
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  int v7; // r3
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r1
  int v11; // r3
  int v12; // r1
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( a2 )
  {
    V_LOCK();
    LOWORD(v3) = 30064;
    HIWORD(v3) = (unsigned int)"ck_voltage error!" >> 16;
    logfmt_raw(v13, 0x1000u, 0, v3, a1);
    V_UNLOCK();
    LOWORD(v4) = 20532;
    HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v5) = 29756;
    HIWORD(v5) = (unsigned int)"2f" >> 16;
    zlog(*v4, v5, 150, "set_voltage", 11, 459, 40, v13);
    return sub_5D014(a1);
  }
  else
  {
    V_LOCK();
    LOWORD(v7) = 30032;
    HIWORD(v7) = (unsigned int)"oltage %d fb_vol %f" >> 16;
    LOWORD(v8) = 20532;
    logfmt_raw(v13, 0x1000u, 0, v7);
    HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
    V_UNLOCK();
    LOWORD(v9) = 29756;
    HIWORD(v9) = (unsigned int)"2f" >> 16;
    zlog(*v8, v9, 150, "set_voltage", 11, 455, 100, v13);
    V_LOCK();
    LOWORD(v10) = 31900;
    LOWORD(v11) = 31232;
    HIWORD(v10) = (unsigned int)"ocol" >> 16;
    HIWORD(v11) = (unsigned int)"gain as it is already started, will exit immediately." >> 16;
    logfmt_raw(v13, 0x1000u, 0, v11, v10);
    V_UNLOCK();
    LOWORD(v12) = 29756;
    HIWORD(v12) = (unsigned int)"2f" >> 16;
    zlog(*v8, v12, 150, "set_voltage", 11, 456, 100, v13);
    return -1;
  }
}
