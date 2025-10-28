int __fastcall setup_clk(int a1)
{
  int v2; // r8
  char *v3; // r1
  int v4; // r5
  _DWORD *v5; // r2
  int v6; // r1
  void (__fastcall *v7)(int, int *); // r3
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  int v11; // [sp+48h] [bp-1000h] BYREF
  int v12; // [sp+4Ch] [bp-FFCh]
  int v13; // [sp+50h] [bp-FF8h]
  int v14; // [sp+54h] [bp-FF4h]

  LOWORD(v2) = -17656;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)"get_count_sync" >> 16;
  V_INT((int)v9, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -14172;
  HIWORD(v4) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)&v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v4, v2 + 1120);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v6, 171, v2 + 1132, 9, 271, 60, &v11);
  v13 = 2097153;
  v14 = 0;
  v12 = 0;
  v11 = 11;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v11);
  usleep((__useconds_t)&stru_186A0);
  v13 = 1179649;
  v14 = 0;
  v12 = 0;
  v11 = 276305409;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v11);
  usleep((__useconds_t)&stru_186A0);
  v13 = 1310721;
  v14 = 0;
  v12 = 0;
  v11 = 272381185;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v11);
  usleep((__useconds_t)&stru_186A0);
  sub_78DDC(a1, 240, 0x80000000);
  usleep(0x2710u);
  v13 = 1441793;
  v14 = 0;
  v12 = 0;
  v11 = -2147483641;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v11);
  usleep((__useconds_t)&stru_186A0);
  v13 = 3211265;
  v14 = 0;
  v12 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v11 = 0;
  v7(a1, &v11);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
