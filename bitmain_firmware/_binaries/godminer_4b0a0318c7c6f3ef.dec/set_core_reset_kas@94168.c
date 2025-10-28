int __fastcall set_core_reset_kas(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = -4356;
  HIWORD(v1) = (unsigned int)"set_nonce_count_zero_kas" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 + 1148);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = -2644;
  HIWORD(v5) = (unsigned int)"A_2110" >> 16;
  zlog(*v4, v5, 171, v1 + 1168, 18, 173, 40, v7);
  sub_91208(a1, 68, 2);
  return 0;
}
