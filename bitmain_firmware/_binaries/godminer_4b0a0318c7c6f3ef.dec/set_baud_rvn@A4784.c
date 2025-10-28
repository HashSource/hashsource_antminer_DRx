int __fastcall set_baud_rvn(int a1, int a2)
{
  char *v4; // r1
  int v5; // r4
  _DWORD *v6; // r3
  int v7; // r1
  void (__fastcall *v8)(int, _DWORD *); // r3
  _DWORD v10[7]; // [sp+28h] [bp-1020h] BYREF
  int v11; // [sp+44h] [bp-1004h]
  _DWORD v12[2]; // [sp+48h] [bp-1000h] BYREF
  int v13; // [sp+50h] [bp-FF8h]
  int v14; // [sp+54h] [bp-FF4h]

  V_LOCK();
  LOWORD(v4) = 27372;
  HIWORD(v4) = (unsigned int)":" >> 16;
  V_INT((int)v10, v4, *(int *)(a1 + 256));
  LOWORD(v5) = -14264;
  HIWORD(v5) = (unsigned int)"err: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  logfmt_raw((char *)v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v5, a2);
  V_UNLOCK();
  LOWORD(v6) = 20532;
  HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v7) = 9076;
  HIWORD(v7) = (unsigned int)"" >> 16;
  zlog(*v6, v7, 171, "set_baud_rvn", 12, 1413, 60, v12);
  v13 = 0;
  v14 = 0;
  v12[1] = 0;
  v8 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  HIWORD(v13) = 96;
  LOBYTE(v13) = 1;
  v12[0] = 0;
  v8(a1, v12);
  usleep(0x2710u);
  return 0;
}
