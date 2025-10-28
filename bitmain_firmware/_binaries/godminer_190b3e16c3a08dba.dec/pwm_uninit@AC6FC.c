time_t __fastcall pwm_uninit(int a1)
{
  int v1; // r3
  time_t result; // r0
  int *v3; // r2
  int v4; // r0
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v9[2]; // [sp+10h] [bp-1808h] BYREF
  __int16 v10; // [sp+18h] [bp-1800h]
  char v11[4104]; // [sp+810h] [bp-1008h] BYREF

  if ( a1 > 2 )
  {
    LOWORD(v3) = 4676;
    HIWORD(v3) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v9[0] = v4;
    v9[1] = v5;
    v10 = v6;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v7) = -12376;
    HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v8) = -16988;
    HIWORD(v8) = (unsigned int)"ChipSetting_nonce_counter_LTC_1489" >> 16;
    return zlog(*v7, v8, 171, "pwm_uninit", 10, 41, 100, v11);
  }
  else
  {
    LOWORD(v1) = -15940;
    result = a1 - 1;
    HIWORD(v1) = (unsigned int)&unk_18B904 >> 16;
    *(_DWORD *)(v1 + 8 * result) = 0;
    *(_BYTE *)(v1 + 8 * result + 4) = 0;
  }
  return result;
}
