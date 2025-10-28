int __fastcall get_timeout_count_rvn(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  int v5; // r4
  char v7[4100]; // [sp+10h] [bp+0h] BYREF

  V_LOCK();
  LOWORD(v2) = -8076;
  HIWORD(v2) = (unsigned int)"" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v2, "get_timeout_count_rvn");
  V_UNLOCK();
  LOWORD(v3) = 24916;
  HIWORD(v3) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v4) = 15232;
  HIWORD(v4) = (unsigned int)"mask_ltc" >> 16;
  v5 = 69;
  zlog(*v3, v4, 171, "get_timeout_count_rvn", 21, 254, 20, v7);
  do
  {
    sub_A5A30(a1, 255, v5++, 0);
    usleep(0x2710u);
  }
  while ( v5 != 75 );
  return 0;
}
