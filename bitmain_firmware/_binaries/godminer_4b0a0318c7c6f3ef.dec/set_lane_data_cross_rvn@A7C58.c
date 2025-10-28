int __fastcall set_lane_data_cross_rvn(int a1)
{
  int v2; // r5
  char *v3; // r1
  _DWORD *v4; // r2
  int v5; // r1
  _DWORD v7[7]; // [sp+28h] [bp-1020h] BYREF
  int v8; // [sp+44h] [bp-1004h]
  char v9[4096]; // [sp+48h] [bp-1000h] BYREF

  LOWORD(v2) = 4600;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_INT((int)v7, v3, *(int *)(a1 + 256));
  LOWORD(a1) = -14172;
  HIWORD(a1) = (unsigned int)": %d" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, a1, v2 + 1444);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v2 + 1468, 23, 470, 60, v9);
  return 0;
}
