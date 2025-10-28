int __fastcall adjust_working_freq_ltc(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r5
  int v6; // r1
  float v7; // s16
  int v8; // r4
  int v9; // r3
  int v10; // r1
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v5) = 20532;
  V_LOCK();
  LOWORD(v4) = 3172;
  HIWORD(v4) = (unsigned int)"ild/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  logfmt_raw(v12, 0x1000u, 0, v4);
  V_UNLOCK();
  LOWORD(v6) = 2556;
  HIWORD(v6) = (unsigned int)"ltc" >> 16;
  zlog(*v5, v6, 171, "adjust_working_freq_ltc", 23, 910, 40, v12);
  v7 = (float)(a2 + *(_DWORD *)(a1 + 480));
  if ( *(float *)(a1 + 996) <= v7 )
  {
    v7 = *(float *)(a1 + 996);
    v8 = 0;
    goto LABEL_3;
  }
  v8 = 18;
  if ( v7 >= 900.0 )
  {
LABEL_3:
    chip_setting_freq_ltc(a1, 1, 0);
    *(_DWORD *)(a1 + 480) = (int)v7;
    V_LOCK();
    LOWORD(v9) = 3204;
    HIWORD(v9) = (unsigned int)"/build/godminer-origin_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c" >> 16;
    logfmt_raw(v12, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v10) = 2556;
    HIWORD(v10) = (unsigned int)"ltc" >> 16;
    zlog(*v5, v10, 171, "adjust_working_freq_ltc", 23, 925, 40, v12);
  }
  return v8;
}
