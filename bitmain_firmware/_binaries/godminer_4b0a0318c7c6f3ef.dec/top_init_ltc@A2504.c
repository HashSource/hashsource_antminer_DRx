int __fastcall top_init_ltc(int *a1)
{
  int v2; // r3
  _DWORD *v3; // r7
  int v4; // r1
  char *v5; // r1
  int v6; // r4
  int v7; // r1
  int v8; // r9
  int v9; // r4
  int v10; // r0
  int v11; // r1
  char v12; // r3
  void (__fastcall *v13)(int *, int, int); // r3
  int v14; // r3
  int v15; // r1
  _DWORD v17[7]; // [sp+28h] [bp-1024h] BYREF
  int v18; // [sp+44h] [bp-1008h]
  char v19[4100]; // [sp+48h] [bp-1004h] BYREF

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = 3372;
  HIWORD(v2) = (unsigned int)"esult, chip_all %d chip_no %d core %d " >> 16;
  logfmt_raw(v19, 0x1000u, 0, v2);
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  LOWORD(v4) = 2556;
  HIWORD(v4) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v4, 171, "top_init_ltc", 12, 505, 40, v19);
  V_LOCK();
  LOWORD(v5) = 27372;
  HIWORD(v5) = (unsigned int)":" >> 16;
  V_INT((int)v17, v5, a1[64]);
  LOWORD(v6) = 3392;
  HIWORD(v6) = (unsigned int)"hip_no %d core %d " >> 16;
  logfmt_raw(v19, 0x1000u, 0, v18, v17[0], v17[1], v17[2], v17[3], v17[4], v17[5], v17[6], v18, v6);
  V_UNLOCK();
  LOWORD(v7) = 2556;
  HIWORD(v7) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v7, 171, "top_init_ltc", 12, 506, 40, v19);
  v8 = a1[88];
  v9 = a1[126];
  v10 = sub_1451E0(256, (unsigned __int8)v8);
  if ( (_BYTE)v8 )
  {
    v11 = v9 - 1;
    v12 = 0;
    do
    {
      *(_BYTE *)++v11 = v12;
      v12 += v10;
    }
    while ( v11 != v9 - 1 + (unsigned __int8)v8 );
    v9 = a1[126];
  }
  v13 = (void (__fastcall *)(int *, int, int))a1[67];
  a1[111] = v10;
  v13(a1, v9, v8);
  sub_9EBD4((int)a1, 0);
  sub_A2318((int)a1);
  V_LOCK();
  LOWORD(v14) = 3408;
  HIWORD(v14) = (unsigned int)"d " >> 16;
  logfmt_raw(v19, 0x1000u, 0, v14);
  V_UNLOCK();
  LOWORD(v15) = 2556;
  HIWORD(v15) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v15, 171, "top_init_ltc", 12, 519, 40, v19);
  return 0;
}
