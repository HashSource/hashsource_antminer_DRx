int __fastcall open_core_clk_tops_rvn(int a1)
{
  int v2; // r6
  char *v3; // r1
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r1
  void (__fastcall *v7)(int, _DWORD *); // r3
  _DWORD v9[7]; // [sp+28h] [bp-1020h] BYREF
  int v10; // [sp+44h] [bp-1004h]
  _DWORD v11[2]; // [sp+48h] [bp-1000h] BYREF
  int v12; // [sp+50h] [bp-FF8h]
  int v13; // [sp+54h] [bp-FF4h]

  LOWORD(v2) = 4600;
  V_LOCK();
  LOWORD(v3) = 27372;
  HIWORD(v3) = (unsigned int)":" >> 16;
  HIWORD(v2) = (unsigned int)"reset_to_normal_rvn" >> 16;
  V_INT((int)v9, v3, *(int *)(a1 + 256));
  LOWORD(v4) = -14172;
  HIWORD(v4) = (unsigned int)": %d" >> 16;
  logfmt_raw((char *)v11, 0x1000u, 0, v10, v9[0], v9[1], v9[2], v9[3], v9[4], v9[5], v9[6], v10, v4, v2 + 548);
  V_UNLOCK();
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v6) = 9076;
  HIWORD(v6) = (unsigned int)"" >> 16;
  zlog(*v5, v6, 171, v2 + 572, 22, 172, 60, v11);
  v12 = 1441792;
  v11[0] = -2147483641;
  v13 = 0;
  v7 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v12) = 1;
  v11[1] = 0;
  v7(a1, v11);
  usleep(0x2710u);
  return 0;
}
