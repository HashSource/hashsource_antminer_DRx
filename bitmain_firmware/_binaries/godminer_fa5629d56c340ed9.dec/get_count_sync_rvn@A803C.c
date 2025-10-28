int __fastcall get_count_sync_rvn(int a1, int a2)
{
  int v4; // r3
  _DWORD *v5; // r8
  int v6; // r1
  char *v7; // r11
  int v8; // r0
  int v9; // r10
  int v10; // r9
  char *v11; // r6
  char *v12; // r4
  int v13; // lr
  int v14; // r12
  int v15; // r1
  char v17[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v5) = 24916;
  V_LOCK();
  LOWORD(v4) = -8076;
  HIWORD(v4) = (unsigned int)"" >> 16;
  logfmt_raw(v17, 0x1000u, 0, v4, "get_count_sync_rvn");
  V_UNLOCK();
  HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v6) = 15232;
  HIWORD(v6) = (unsigned int)"mask_ltc" >> 16;
  zlog(*v5, v6, 171, "get_count_sync_rvn", 18, 273, 0x14u, v17);
  v7 = (char *)malloc(0x1800u);
  v8 = sub_A5A30(a1, a2, 202, v7);
  if ( v8 > 0 )
  {
    LOWORD(v9) = -7676;
    LOWORD(v10) = 15232;
    v11 = &v7[12 * v8];
    v12 = v7;
    do
    {
      V_LOCK();
      v13 = *(_DWORD *)v12;
      HIWORD(v9) = (unsigned int)"_plldivider" >> 16;
      v14 = (unsigned __int8)v12[4];
      v15 = *((unsigned __int16 *)v12 + 3);
      v12 += 12;
      logfmt_raw(v17, 0x1000u, 0, v9, v14, (unsigned __int8)*(v12 - 4), v15, v13);
      V_UNLOCK();
      HIWORD(v10) = (unsigned int)"mask_ltc" >> 16;
      zlog(*v5, v10, 171, "get_count_sync_rvn", 18, 279, 20, v17);
    }
    while ( v12 != v11 );
  }
  free(v7);
  return 0;
}
