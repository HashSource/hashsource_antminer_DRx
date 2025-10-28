int __fastcall open_cores_rvn(int a1)
{
  int v1; // r4
  _DWORD *v3; // r2
  int v4; // r1
  char v6[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v1) = 30952;
  HIWORD(v1) = (unsigned int)"al" >> 16;
  V_LOCK();
  logfmt_raw(v6, 0x1000u, 0, 1391692, v1 + 2844);
  V_UNLOCK();
  LOWORD(v3) = -12376;
  HIWORD(v3) = (unsigned int)&unk_18B290 >> 16;
  LOWORD(v4) = -30960;
  HIWORD(v4) = (unsigned int)"ner-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(*v3, v4, 171, v1 + 2860, 14, 798, 20, v6);
  sub_92B4C(a1, 160, 127);
  usleep((__useconds_t)&stru_18698.st_size);
  return 0;
}
