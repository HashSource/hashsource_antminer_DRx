int __fastcall set_core_reset(int a1)
{
  int v2; // r9
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  void (__fastcall *v7)(int, int *); // r3
  void (__fastcall *v8)(int, int *); // r3
  _DWORD v10[7]; // [sp+28h] [bp-1024h] BYREF
  int v11; // [sp+44h] [bp-1008h]
  int v12; // [sp+48h] [bp-1004h] BYREF
  int v13; // [sp+4Ch] [bp-1000h]
  int v14; // [sp+50h] [bp-FFCh]
  int v15; // [sp+54h] [bp-FF8h]

  LOWORD(v2) = -17656;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)"get_count_sync" >> 16;
  V_INT((int)v10, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -14172;
  HIWORD(v4) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)&v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v4, v2 + 672);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v6, 171, v2 + 688, 14, 154, 60, &v12);
  sub_78DDC(a1, 240, 0x80000000);
  usleep((__useconds_t)&stru_186A0);
  v14 = 0;
  v12 = 13;
  v15 = 0;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v13 = 0;
  LOBYTE(v14) = 1;
  HIWORD(v14) = 32;
  v7(a1, &v12);
  usleep((__useconds_t)&stru_186A0);
  v14 = 1;
  v15 = 0;
  v13 = 0;
  v12 = 15;
  v8 = *(void (__fastcall **)(int, int *))(a1 + 276);
  HIWORD(v14) = 32;
  v8(a1, &v12);
  usleep((__useconds_t)&stru_186A0);
  return 0;
}
