int __fastcall set_ticketmask_rvn(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = 4600;
  HIWORD(v2) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_LOCK();
  LOWORD(v5) = -2296;
  HIWORD(v5) = (unsigned int)"ChipSetting_read_sensor_temp_local_on_ctrlboard_KDA_2110" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 468, a2);
  V_UNLOCK();
  LOWORD(v6) = 20532;
  HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v7) = 9076;
  HIWORD(v7) = (unsigned int)"" >> 16;
  zlog(*v6, v7, 171, v2 + 488, 18, 163, 40, v9);
  sub_A4520(a1, 26, a2);
  *(_DWORD *)(a1 + 448) = a2;
  usleep(0x2710u);
  return 0;
}
