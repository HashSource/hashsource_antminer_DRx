int __fastcall set_reset_ks5(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  _DWORD v6[1025]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v2) = -14172;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)v6, 0x1000u, 0, v2, 1507940);
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = 1304;
  HIWORD(v4) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v3, v4, 171, "set_reset_ks5", 13, 126, 40, v6);
  v6[2] = 4456449;
  v6[3] = 0;
  v6[1] = 0;
  v6[0] = 1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v6);
  usleep(0x2710u);
  return 0;
}
