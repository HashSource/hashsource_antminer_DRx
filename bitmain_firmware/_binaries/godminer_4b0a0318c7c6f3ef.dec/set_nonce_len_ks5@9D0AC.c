int __fastcall set_nonce_len_ks5(int a1)
{
  int v2; // r3
  _DWORD *v3; // r2
  int v4; // r1
  void (__fastcall *v5)(int, _DWORD *); // r3
  _DWORD v7[2]; // [sp+10h] [bp-1004h] BYREF
  int v8; // [sp+18h] [bp-FFCh]
  int v9; // [sp+1Ch] [bp-FF8h]

  V_LOCK();
  LOWORD(v2) = -14172;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v2, 1508052);
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = 1304;
  HIWORD(v4) = (unsigned int)"ChipSetting_read_sensor_temp_remote_on_ctrlboard_LTC_1489" >> 16;
  zlog(*v3, v4, 171, "set_nonce_len_ks5", 17, 147, 40, v7);
  v8 = 5505024;
  v9 = 0;
  v7[1] = 0;
  v7[0] = 7;
  v5 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v8) = 1;
  v5(a1, v7);
  usleep(0x2710u);
  return 0;
}
