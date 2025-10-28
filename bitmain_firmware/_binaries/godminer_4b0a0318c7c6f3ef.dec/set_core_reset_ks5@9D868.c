int __fastcall set_core_reset_ks5(int a1)
{
  int v2; // r3
  _DWORD *v3; // r2
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  LOWORD(v2) = -14172;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw(v6, 0x1000u, 0, v2, 1508308);
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = 1304;
  HIWORD(v4) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v3, v4, 171, "set_core_reset_ks5", 18, 173, 40, v6);
  sub_9A410(a1, 68, 2);
  return 0;
}
