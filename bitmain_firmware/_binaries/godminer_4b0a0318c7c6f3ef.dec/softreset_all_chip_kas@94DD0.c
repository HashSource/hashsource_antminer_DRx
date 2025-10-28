int __fastcall softreset_all_chip_kas(int a1)
{
  _DWORD *v2; // r8
  char *v3; // r1
  int v4; // r4
  int v5; // r4
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v10; // [sp+20h] [bp-28h]
  _DWORD v11[7]; // [sp+28h] [bp-20h] BYREF
  int v12; // [sp+44h] [bp-4h]
  _DWORD v13[1024]; // [sp+48h] [bp+0h] BYREF

  LOWORD(v2) = 20532;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v11, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -2120;
  HIWORD(v4) = (unsigned int)"_2110" >> 16;
  v10 = v4;
  v5 = 10;
  logfmt_raw((char *)v13, 0x1000u, 0, v12, v11[0], v11[1], v11[2], v11[3], v11[4], v11[5], v11[6], v12, v10);
  V_UNLOCK();
  LOWORD(v6) = -2644;
  HIWORD(v6) = (unsigned int)"A_2110" >> 16;
  zlog(*v2, v6, 171, &unk_16F450, 22, 629, 40, v13);
  V_LOCK();
  LOWORD(v7) = -23728;
  HIWORD(v7) = (unsigned int)"nce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)" >> 16;
  logfmt_raw((char *)v13, 0x1000u, 0, v7, "ChipSetting_software_reset_KAS_2380", 68);
  V_UNLOCK();
  LOWORD(v8) = -23880;
  HIWORD(v8) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v2, v8, 150, "ChipSetting_software_reset_KAS_2380", 35, 180, 20, v13);
  v13[3] = 0;
  v13[0] = 3;
  v13[2] = 4456449;
  v13[1] = 0;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v13);
  do
  {
    usleep((__useconds_t)&stru_186A0);
    send_fake_work_kas(a1);
    --v5;
  }
  while ( v5 );
  sub_91208(a1, 10, 0);
  sub_9131C((int *)a1, 127);
  return 0;
}
