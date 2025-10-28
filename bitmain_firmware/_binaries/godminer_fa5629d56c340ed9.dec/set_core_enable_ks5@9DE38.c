int __fastcall set_core_enable_ks5(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = 5808;
  HIWORD(v2) = (unsigned int)"temp_local_on_pic_HNS_2130" >> 16;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, 1511188, v2 + 920, a2);
  V_UNLOCK();
  LOWORD(v5) = 24916;
  HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v6) = 7460;
  HIWORD(v6) = (unsigned int)"0" >> 16;
  zlog(*v5, v6, 171, v2 + 940, 19, 118, 40, v8);
  sub_9B4B0(a1, 1, a2);
  usleep(0x2710u);
  return 0;
}
