int __fastcall clear_dag_mode(int a1)
{
  int v2; // r5
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  _DWORD v8[7]; // [sp+28h] [bp-1020h] BYREF
  int v9; // [sp+44h] [bp-1004h]
  char v10[4096]; // [sp+48h] [bp-1000h] BYREF

  LOWORD(v2) = -17656;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)"get_count_sync" >> 16;
  V_INT((int)v8, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -14172;
  HIWORD(v4) = (unsigned int)": %d" >> 16;
  logfmt_raw(v10, 0x1000u, 0, v9, v8[0], v8[1], v8[2], v8[3], v8[4], v8[5], v8[6], v9, v4, v2 + 1088);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v6, 171, v2 + 1104, 14, 263, 60, v10);
  sub_78DDC(a1, 196, 0);
  usleep(0x2710u);
  return 0;
}
