int __fastcall set_reset_rvn(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r1
  void (__fastcall *v6)(int, int *); // r3
  void (__fastcall *v7)(int, int *); // r3
  int v9; // [sp+10h] [bp-1000h] BYREF
  int v10; // [sp+14h] [bp-FFCh]
  int v11; // [sp+18h] [bp-FF8h]
  int v12; // [sp+1Ch] [bp-FF4h]

  LOWORD(v1) = 4600;
  HIWORD(v1) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_LOCK();
  LOWORD(v3) = -14172;
  HIWORD(v3) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)&v9, 0x1000u, 0, v3, v1 + 684);
  V_UNLOCK();
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v5) = 9076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  zlog(*v4, v5, 171, v1 + 700, 13, 196, 40, &v9);
  v11 = 0;
  v9 = -1414856447;
  v12 = 0;
  v6 = *(void (__fastcall **)(int, int *))(a1 + 276);
  v10 = 0;
  LOBYTE(v11) = 1;
  HIWORD(v11) = 252;
  v6(a1, &v9);
  usleep(0x2710u);
  v11 = 1;
  v12 = 0;
  v10 = 0;
  v9 = 29;
  v7 = *(void (__fastcall **)(int, int *))(a1 + 276);
  HIWORD(v11) = 68;
  v7(a1, &v9);
  usleep(0x2710u);
  v11 = 4456449;
  v12 = 0;
  v10 = 0;
  v9 = 31;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v9);
  usleep(0x2710u);
  v11 = 16515073;
  v12 = 0;
  v10 = 0;
  v9 = -1414856704;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v9);
  usleep(0x2710u);
  return 0;
}
