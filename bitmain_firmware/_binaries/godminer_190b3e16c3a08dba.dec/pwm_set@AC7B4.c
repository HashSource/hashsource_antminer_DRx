int __fastcall pwm_set(int a1, unsigned int a2)
{
  int v2; // r4
  const char *v3; // r2
  _DWORD *v4; // r3
  int v5; // r1
  _DWORD *v7; // r3
  unsigned int v8; // r5
  int *v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  _DWORD s[2]; // [sp+10h] [bp-1804h] BYREF
  __int16 v16; // [sp+18h] [bp-17FCh]
  char v17[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v9) = 4676;
    HIWORD(v9) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v10 = *v9;
    v11 = v9[1];
    v12 = v9[2];
    s[0] = v10;
    s[1] = v11;
    v16 = v12;
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v13) = -12376;
    HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v14) = -16988;
    HIWORD(v14) = (unsigned int)"ChipSetting_nonce_counter_LTC_1489" >> 16;
    zlog(*v13, v14, 171, "pwm_set", 7, 62, 100, v17);
    return -3;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 == 1 )
    {
      LOWORD(v7) = -15940;
      if ( a2 >= 0x64 )
        a2 = 100;
      HIWORD(v7) = (unsigned int)&unk_18B904 >> 16;
      v8 = (unsigned __int16)(*v7 * (100 - a2) / 0x64) | ((*v7 * a2 / 0x64) << 16);
      fpga_write(132, v8);
      fpga_write(160, v8);
      return v2;
    }
    else
    {
      LOWORD(v3) = -16816;
      HIWORD(v3) = (unsigned int)"pll_sel_LTC_1489" >> 16;
      snprintf((char *)s, 0x800u, v3, a1 - 1);
      V_LOCK();
      logfmt_raw(v17, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v4) = -12376;
      HIWORD(v4) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v5) = -16988;
      HIWORD(v5) = (unsigned int)"ChipSetting_nonce_counter_LTC_1489" >> 16;
      zlog(*v4, v5, 171, "pwm_set", 7, 81, 100, v17);
      return 0;
    }
  }
}
