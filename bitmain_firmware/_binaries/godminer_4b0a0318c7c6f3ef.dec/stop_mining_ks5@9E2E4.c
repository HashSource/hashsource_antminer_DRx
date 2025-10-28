int __fastcall stop_mining_ks5(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r0
  int (**v6)(); // r0
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -13840;
  HIWORD(v2) = (unsigned int)"%s enter, membist_done: %u" >> 16;
  logfmt_raw(v8, 0x1000u, 0, v2, 1508564);
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = 1304;
  HIWORD(v4) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v3, v4, 171, "stop_mining_ks5", 15, 938, 60, v8);
  v5 = (*(int (__fastcall **)(int))(a1 + 60))(a1);
  v6 = dev_ctrl(v5);
  ((void (__fastcall *)(_DWORD))v6[14])(*(_DWORD *)(a1 + 248));
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  sub_9A758((int *)a1, 127);
  set_reset_ks5(a1);
  set_core_reset_ks5(a1);
  set_inactive_ks5(a1);
  return 0;
}
