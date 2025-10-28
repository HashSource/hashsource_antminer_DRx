int __fastcall softreset_all_chip_ks5(int *a1)
{
  _DWORD *v2; // r8
  char *v3; // r1
  int v4; // r4
  int v5; // r1
  int v6; // r3
  int v7; // r1
  void (__fastcall *v8)(int *, _DWORD *); // r3
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  _DWORD v12[2]; // [sp+48h] [bp-1004h] BYREF
  int v13; // [sp+50h] [bp-FFCh]
  int v14; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = 20532;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v10, v3, a1[64]);
  LOWORD(v4) = -2120;
  HIWORD(v4) = (unsigned int)"_2110" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v4);
  V_UNLOCK();
  LOWORD(v5) = 1304;
  HIWORD(v5) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v2, v5, 171, "softreset_all_chip_ks5", 22, 628, 40, v12);
  V_LOCK();
  LOWORD(v6) = -23728;
  HIWORD(v6) = (unsigned int)"nce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v6, "ChipSetting_software_reset_KS5_2382", 68);
  V_UNLOCK();
  LOWORD(v7) = -23880;
  HIWORD(v7) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v2, v7, 150, "ChipSetting_software_reset_KS5_2382", 35, 180, 20, v12);
  v13 = 0;
  v12[0] = 3;
  v14 = 0;
  v8 = (void (__fastcall *)(int *, _DWORD *))a1[69];
  HIWORD(v13) = 68;
  LOBYTE(v13) = 1;
  v12[1] = 0;
  v8(a1, v12);
  sub_9A410((int)a1, 10, 0);
  sub_9A758(a1, 127);
  return 0;
}
