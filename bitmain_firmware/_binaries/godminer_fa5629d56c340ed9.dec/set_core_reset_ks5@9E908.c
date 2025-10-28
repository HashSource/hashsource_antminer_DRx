int __fastcall set_core_reset_ks5(int a1)
{
  int v1; // r4
  int v3; // r3
  _DWORD *v4; // r2
  int v5; // r1
  char v7[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 5808;
  HIWORD(v1) = (unsigned int)"temp_local_on_pic_HNS_2130" >> 16;
  V_LOCK();
  LOWORD(v3) = -8076;
  HIWORD(v3) = (unsigned int)"" >> 16;
  logfmt_raw(v7, 0x1000u, 0, v3, v1 + 1328);
  V_UNLOCK();
  LOWORD(v4) = 24916;
  HIWORD(v4) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v5) = 7460;
  HIWORD(v5) = (unsigned int)"0" >> 16;
  zlog(*v4, v5, 171, v1 + 1348, 18, 173, 40, v7);
  sub_9B4B0(a1, 68, 2);
  return 0;
}
