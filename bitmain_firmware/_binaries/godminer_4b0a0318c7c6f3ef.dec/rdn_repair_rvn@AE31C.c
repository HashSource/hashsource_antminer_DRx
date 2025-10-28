int __fastcall rdn_repair_rvn(int a1, int a2)
{
  int v4; // r4
  int v5; // r3
  int v6; // r5
  _DWORD *v7; // r3
  int v8; // r1
  int v9; // t1
  char v11[4096]; // [sp+10h] [bp-1000h] BYREF

  v4 = a2 - 4;
  V_LOCK();
  LOWORD(v5) = -14172;
  HIWORD(v5) = (unsigned int)": %d" >> 16;
  v6 = a2 + 204;
  logfmt_raw(v11, 0x1000u, 0, v5, "rdn_repair_rvn");
  V_UNLOCK();
  LOWORD(v7) = 20532;
  HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v8) = 9076;
  HIWORD(v8) = (unsigned int)"" >> 16;
  zlog(*v7, v8, 171, "rdn_repair_rvn", 14, 3312, 40, v11);
  sub_A4520(a1, 222, 270532609);
  usleep(0x2710u);
  do
  {
    v9 = *(_DWORD *)(v4 + 4);
    v4 += 4;
    sub_A4520(a1, 223, v9);
  }
  while ( v4 != v6 );
  usleep(0x2710u);
  sub_A4520(a1, 222, 0);
  return 0;
}
