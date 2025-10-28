int __fastcall set_misc_control_kas(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  _DWORD v7[1024]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -4356;
  HIWORD(v1) = (unsigned int)"set_nonce_count_zero_kas" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)v7, 0x1000u, 0, v3, v1 + 1060);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -2644;
  HIWORD(v5) = (unsigned int)"A_2110" >> 16;
  zlog(*v4, v5, 171, v1 + 1084, 20, 163, 40, v7);
  v7[2] = 1835009;
  v7[3] = 0;
  v7[1] = 0;
  v7[0] = -1068359920;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v7);
  usleep(0x2710u);
  return 0;
}
