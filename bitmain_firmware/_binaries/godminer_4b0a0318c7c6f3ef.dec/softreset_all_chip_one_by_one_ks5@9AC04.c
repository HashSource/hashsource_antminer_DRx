int __fastcall softreset_all_chip_one_by_one_ks5(int *a1)
{
  char *v2; // r1
  _DWORD *v3; // r9
  int v4; // r6
  int v5; // r1
  int v6; // r6
  int v7; // r10
  int v8; // r1
  int v9; // r2
  void (__fastcall *v10)(int *, _DWORD *); // r3
  _DWORD v12[7]; // [sp+28h] [bp-1024h] BYREF
  int v13; // [sp+44h] [bp-1008h]
  _DWORD v14[2]; // [sp+48h] [bp-1004h] BYREF
  int v15; // [sp+50h] [bp-FFCh]
  int v16; // [sp+54h] [bp-FF8h]

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v12, v2, a1[64]);
  LOWORD(v4) = -2120;
  HIWORD(v4) = (unsigned int)"_2110" >> 16;
  logfmt_raw((char *)v14, 0x1000u, 0, v13, v12[0], v12[1], v12[2], v12[3], v12[4], v12[5], v12[6], v13, v4);
  V_UNLOCK();
  LOWORD(v5) = 1304;
  HIWORD(v5) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v3, v5, 171, "softreset_all_chip_one_by_one_ks5", 33, 653, 40, v14);
  if ( a1[88] > 0 )
  {
    v6 = 0;
    LOWORD(v7) = -23728;
    do
    {
      V_LOCK();
      HIWORD(v7) = (unsigned int)"nce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)" >> 16;
      logfmt_raw((char *)v14, 0x1000u, 0, v7, "ChipSetting_software_reset_one_asic_KS5_2382", 68);
      V_UNLOCK();
      LOWORD(v8) = -23880;
      HIWORD(v8) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
      zlog(*v3, v8, 150, "ChipSetting_software_reset_one_asic_KS5_2382", 44, 193, 20, v14);
      v9 = a1[111];
      v15 = 0;
      v10 = (void (__fastcall *)(int *, _DWORD *))a1[69];
      v14[0] = 3;
      LOBYTE(v9) = v9 * v6;
      v14[1] = 0;
      HIWORD(v15) = 68;
      ++v6;
      v16 = 0;
      BYTE1(v15) = v9;
      v10(a1, v14);
      usleep(0x3E8u);
    }
    while ( a1[88] > v6 );
  }
  sub_9A410((int)a1, 10, 0);
  sub_9A758(a1, 127);
  return 0;
}
