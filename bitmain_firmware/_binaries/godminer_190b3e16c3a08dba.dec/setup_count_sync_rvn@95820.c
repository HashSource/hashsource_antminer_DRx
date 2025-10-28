int __fastcall setup_count_sync_rvn(int a1, unsigned __int8 a2)
{
  int v2; // r4
  _DWORD *v5; // r3
  int v6; // r1
  char v8[4100]; // [sp+10h] [bp+0h] BYREF

  LOWORD(v2) = 30952;
  HIWORD(v2) = (unsigned int)"al" >> 16;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, 1391692, v2 + 1144);
  V_UNLOCK();
  LOWORD(v5) = -12376;
  HIWORD(v5) = (unsigned int)&unk_18B290 >> 16;
  LOWORD(v6) = -30960;
  HIWORD(v6) = (unsigned int)"ner-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(*v5, v6, 171, v2 + 1168, 20, 295, 20, v8);
  sub_92E24(a1, a2, 202, 0);
  sub_92E24(a1, a2, 202, 1);
  usleep(0x3E8u);
  sub_92E24(a1, a2, 202, 0x80000000);
  usleep(0x2710u);
  return 0;
}
