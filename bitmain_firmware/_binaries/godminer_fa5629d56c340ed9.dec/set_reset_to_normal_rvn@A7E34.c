int __fastcall set_reset_to_normal_rvn(int a1, int a2)
{
  int v2; // r4
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = 10756;
  HIWORD(v2) = (unsigned int)"ay, chip:%02x, %08x" >> 16;
  V_LOCK();
  LOWORD(v5) = -8076;
  HIWORD(v5) = (unsigned int)"" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v2 + 932);
  V_UNLOCK();
  LOWORD(v6) = 24916;
  HIWORD(v6) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v7) = 15232;
  HIWORD(v7) = (unsigned int)"mask_ltc" >> 16;
  zlog(*v6, v7, 171, v2 + 956, 23, 246, 20, v9);
  sub_A55C8(a1, 155, a2);
  usleep(0x2710u);
  return 0;
}
