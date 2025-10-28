int __fastcall set_ticketmask(int a1, int a2)
{
  char *v4; // r1
  int v5; // r5
  int v6; // r4
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v10[7]; // [sp+30h] [bp-1024h] BYREF
  int v11; // [sp+4Ch] [bp-1008h]
  char v12[4100]; // [sp+50h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v4) = 27372;
  HIWORD(v4) = (unsigned int)":" >> 16;
  LOWORD(v5) = -17656;
  HIWORD(v5) = (unsigned int)"get_count_sync" >> 16;
  V_INT((int)v10, v4, *(int *)(a1 + 256));
  LOWORD(v6) = -14276;
  HIWORD(v6) = (unsigned int)"lost/err/etherr: %08x/%08x/%08x, total:lost/err/etherr: %llx/%llx/%llx" >> 16;
  logfmt_raw(v12, 0x1000u, 0, v11, v10[0], v10[1], v10[2], v10[3], v10[4], v10[5], v10[6], v11, v6, v5 + 40, a2);
  V_UNLOCK();
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v8) = -14448;
  HIWORD(v8) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v7, v8, 171, v5 + 56, 14, 120, 40, v12);
  sub_78DDC(a1, 10, a2);
  *(_DWORD *)(a1 + 448) = a2;
  usleep(0x2710u);
  return 0;
}
