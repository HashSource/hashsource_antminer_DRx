int __fastcall set_nonce_overflow_ks5(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = -2296;
  HIWORD(v4) = (unsigned int)"ChipSetting_read_sensor_temp_local_on_ctrlboard_KDA_2110" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v4, 1507852, a2);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 1304;
  HIWORD(v6) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v5, v6, 171, "set_nonce_overflow_ks5", 22, 111, 40, v8);
  sub_9A410(a1, 10, a2);
  usleep(0x2710u);
  return 0;
}
