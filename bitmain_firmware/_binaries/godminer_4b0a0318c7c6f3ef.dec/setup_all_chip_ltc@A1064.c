int __fastcall setup_all_chip_ltc(int *a1)
{
  int v2; // r3
  _DWORD *v3; // r7
  int v4; // r1
  int v5; // r8
  int v6; // r3
  int v7; // r1
  int v8; // r5
  int v9; // r0
  int v10; // r1
  char v11; // r3
  void (__fastcall *v12)(int *, int, int); // r3
  int v13; // r5
  int v14; // r3
  int v15; // r1
  int v16; // r3
  int v17; // r1
  int v19; // [sp+0h] [bp-1014h]
  char v20[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = 2924;
  HIWORD(v2) = (unsigned int)"_ltc" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v2);
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_UNLOCK();
  LOWORD(v4) = 2556;
  HIWORD(v4) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v4, 171, "setup_all_chip_ltc", 18, 577, 40, v20);
  v5 = a1[88];
  V_LOCK();
  LOWORD(v6) = -27680;
  HIWORD(v6) = (unsigned int)"space" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v6, "setup_all_chip_ltc");
  V_UNLOCK();
  LOWORD(v7) = 2556;
  HIWORD(v7) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v7, 171, "setup_all_chip_ltc", 18, 580, 60, v20);
  if ( !sub_A1024(a1) )
    return 12;
  v8 = a1[126];
  v9 = sub_1451E0(256, (unsigned __int8)v5);
  if ( (_BYTE)v5 )
  {
    v10 = v8 - 1;
    v11 = 0;
    do
    {
      *(_BYTE *)++v10 = v11;
      v11 += v9;
    }
    while ( v8 - 1 + (unsigned __int8)v5 != v10 );
    v8 = a1[126];
  }
  v12 = (void (__fastcall *)(int *, int, int))a1[67];
  a1[111] = v9;
  v12(a1, v8, v5);
  sub_9EBD4((int)a1, 0);
  chip_setting_ticket_mask_ltc(a1, 0xFFFFFFFF);
  if ( a1[89] > 0 )
  {
    v13 = 0;
    do
    {
      v19 = v13++;
      chip_setting_working_mode_ltc((int)a1, 1, 0, 0, v19, 0xFFu);
    }
    while ( a1[89] > v13 );
  }
  a1[120] = 900;
  V_LOCK();
  LOWORD(v14) = 2948;
  HIWORD(v14) = (unsigned int)"ket_mask_ltc" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v14);
  V_UNLOCK();
  LOWORD(v15) = 2556;
  HIWORD(v15) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v15, 171, "setup_all_chip_ltc", 18, 649, 60, v20);
  if ( !sub_A1024(a1) )
    return 12;
  V_LOCK();
  LOWORD(v16) = 2924;
  HIWORD(v16) = (unsigned int)"_ltc" >> 16;
  logfmt_raw(v20, 0x1000u, 0, v16);
  V_UNLOCK();
  LOWORD(v17) = 2556;
  HIWORD(v17) = (unsigned int)"ltc" >> 16;
  zlog(*v3, v17, 171, "setup_all_chip_ltc", 18, 653, 40, v20);
  return 0;
}
