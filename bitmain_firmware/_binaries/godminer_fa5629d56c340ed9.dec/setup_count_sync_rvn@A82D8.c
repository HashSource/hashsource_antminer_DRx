int __fastcall setup_count_sync_rvn(int a1, unsigned __int8 a2)
{
  int v2; // r4
  int v5; // r3
  _DWORD *v6; // r2
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = 10756;
  HIWORD(v2) = (unsigned int)"ay, chip:%02x, %08x" >> 16;
  V_LOCK();
  LOWORD(v5) = -8076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 1156);
  V_UNLOCK();
  LOWORD(v6) = 24916;
  HIWORD(v6) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v7) = 15232;
  HIWORD(v7) = (unsigned int)"mask_ltc" >> 16;
  zlog(*v6, v7, 171, v2 + 1180, 20, 301, 20, v9);
  sub_A56BC(a1, a2, 202, 0);
  sub_A56BC(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_A56BC(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
