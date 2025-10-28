int __fastcall clear_dag_mode_rvn(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r2
  int v6; // r1
  _DWORD v8[7]; // [sp+28h] [bp-1024h] BYREF
  int v9; // [sp+44h] [bp-1008h]
  char v10[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v2) = 4600;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -14172;
  HIWORD(v4) = (unsigned int)": %d" >> 16;
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 + 1204);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 9076;
  HIWORD(v6) = (unsigned int)"" >> 16;
  zlog(*v5, v6, 171, v2 + 1224, 18, 316, 60, v10);
  sub_A4520(a1, 147, 0);
  usleep(0x2710u);
  return 0;
}
