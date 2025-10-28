int __fastcall softreset_all_chip_one_by_one_kas(int *a1)
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
  int v11; // r4
  _DWORD v13[7]; // [sp+28h] [bp-1024h] BYREF
  int v14; // [sp+44h] [bp-1008h]
  _DWORD v15[2]; // [sp+48h] [bp-1004h] BYREF
  int v16; // [sp+50h] [bp-FFCh]
  int v17; // [sp+54h] [bp-FF8h]

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v13, v2, a1[64]);
  LOWORD(v4) = -2120;
  HIWORD(v4) = (unsigned int)"_2110" >> 16;
  logfmt_raw((char *)v15, 0x1000u, 0, v14, v13[0], v13[1], v13[2], v13[3], v13[4], v13[5], v13[6], v14, v4);
  V_UNLOCK();
  LOWORD(v5) = -2644;
  HIWORD(v5) = (unsigned int)"A_2110" >> 16;
  zlog(*v3, v5, 171, "softreset_all_chip_one_by_one_kas", 33, 658, 40, v15);
  if ( a1[88] > 0 )
  {
    v6 = 0;
    LOWORD(v7) = -23728;
    do
    {
      V_LOCK();
      HIWORD(v7) = (unsigned int)"nce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)" >> 16;
      logfmt_raw((char *)v15, 0x1000u, 0, v7, "ChipSetting_software_reset_one_asic_KAS_2380", 68);
      V_UNLOCK();
      LOWORD(v8) = -23880;
      HIWORD(v8) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
      zlog(*v3, v8, 150, "ChipSetting_software_reset_one_asic_KAS_2380", 44, 193, 20, v15);
      v9 = a1[111];
      v10 = (void (__fastcall *)(int *, _DWORD *))a1[69];
      v16 = 4456448;
      v15[0] = 3;
      LOBYTE(v9) = v9 * v6;
      v15[1] = 0;
      ++v6;
      v17 = 0;
      BYTE1(v16) = v9;
      v10(a1, v15);
      send_fake_work_kas((int)a1);
      usleep(0x3E8u);
    }
    while ( a1[88] > v6 );
  }
  v11 = 10;
  do
  {
    usleep((__useconds_t)&stru_186A0);
    send_fake_work_kas((int)a1);
    --v11;
  }
  while ( v11 );
  sub_91208((int)a1, 10, 0);
  sub_9131C(a1, 127);
  return 0;
}
