int __fastcall enable_work_rvn(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r2
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v2) = 30952;
  HIWORD(v2) = (unsigned int)"al" >> 16;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, 1391692, v2 + 1692);
  V_UNLOCK();
  LOWORD(v5) = -12376;
  HIWORD(v5) = (unsigned int)&unk_18B290 >> 16;
  LOWORD(v6) = -30960;
  HIWORD(v6) = (unsigned int)"ner-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(*v5, v6, 171, v2 + 1708, 15, 734, 20, v8);
  sub_92B4C(a1, 240, a2);
  usleep(0x2710u);
  return 0;
}
