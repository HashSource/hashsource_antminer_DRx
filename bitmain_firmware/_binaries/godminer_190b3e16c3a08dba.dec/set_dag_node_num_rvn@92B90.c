int __fastcall set_dag_node_num_rvn(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r1
  int v12; // [sp+4h] [bp-100Ch]
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  LOWORD(v4) = 30952;
  HIWORD(v4) = (unsigned int)"al" >> 16;
  V_LOCK();
  LOWORD(v8) = 26340;
  HIWORD(v8) = (unsigned int)"ner-origin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  logfmt_raw(v13, 0x1000u, 0, v8, v4, v12, a3, a4);
  V_UNLOCK();
  LOWORD(v9) = -12376;
  HIWORD(v9) = (unsigned int)&unk_18B290 >> 16;
  LOWORD(v10) = -30960;
  HIWORD(v10) = (unsigned int)"ner-new/backend/backend_ckb_2042/backend_ckb_2042.c" >> 16;
  zlog(*v9, v10, 171, v4 + 24, 20, 1895, 60, v13);
  sub_92B4C(a1, 27, a3);
  usleep(0x3E8u);
  return 0;
}
