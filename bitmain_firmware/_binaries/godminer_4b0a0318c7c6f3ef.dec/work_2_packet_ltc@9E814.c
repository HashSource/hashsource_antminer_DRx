int __fastcall work_2_packet_ltc(int a1, _DWORD *a2, unsigned __int8 *a3, _DWORD *a4)
{
  int v5; // r4
  _DWORD *v7; // r3
  int v8; // r0
  const char *v9; // r1
  int v10; // r12
  _DWORD *v11; // r11
  _DWORD *v12; // r2
  int v13; // t1
  int v14; // r8
  int v15; // lr
  int v16; // r12
  int v17; // r7
  int v18; // r12
  int v19; // r8
  int v20; // r3
  unsigned __int8 v21; // r12
  unsigned __int8 *v22; // r3
  unsigned __int8 *v23; // r2
  unsigned __int8 v24; // r1
  unsigned __int8 v25; // t1
  unsigned __int8 v26; // t1
  const void *v27; // r0
  int v28; // r4
  void *v29; // r0
  __int16 v30; // r0
  int v31; // r3
  int v33; // r3
  _DWORD *v34; // r12
  _DWORD *v35; // r5
  const char *v36; // r7
  int v37; // r3
  int v38; // r1
  char *v39; // r5
  char *v40; // r6
  int v41; // t1
  int v42; // r3
  int v43; // r1
  int v44; // r1
  const char *v47; // [sp+1Ch] [bp-2010h]
  int v48; // [sp+20h] [bp-200Ch]
  _DWORD *v49; // [sp+24h] [bp-2008h]
  char v50[4056]; // [sp+28h] [bp-2004h] BYREF
  char v51[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v7 = a2;
  v8 = *(unsigned __int8 *)(v5 + 27136);
  v9 = (const char *)(a2 + 2);
  v10 = *((_DWORD *)v9 + 36);
  v47 = v9;
  *(_QWORD *)(v5 + 8 * v8) = *(_QWORD *)a2;
  v11 = a2 + 18;
  *(_DWORD *)(v5 + 4 * (v8 + 4864)) = v10;
  v12 = (_DWORD *)(v5 + 32 * (v8 + 624));
  v13 = v7[39];
  v7 += 39;
  v14 = v7[1];
  v15 = v7[2];
  v16 = v7[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v7[4];
  v18 = v7[7];
  v19 = v7[5];
  v12[6] = v7[6];
  v12[7] = v18;
  v12[4] = v17;
  v12[5] = v19;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 27136) + 16) << 6)), v9);
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 27136) + 9216), a2 + 18, 0x50u);
  memcpy((void *)(v5 + 16 * (*(unsigned __int8 *)(v5 + 27136) + 1504)), a2 + 47, a2[51]);
  v20 = *(unsigned __int8 *)(v5 + 27136);
  *(_DWORD *)(v5 + 4 * (v20 + 6528)) = a2[51];
  *(_DWORD *)(v5 + 4 * (v20 + 6656)) = a2[52];
  v21 = *(_BYTE *)(v5 + 27136);
  a3[3] = v21;
  *(_BYTE *)(v5 + 27136) = (v21 + 1) & 0x7F;
  memcpy(a3 + 4, a2 + 18, 0x50u);
  v22 = a3 + 3;
  v23 = a3 + 84;
  do
  {
    v25 = *++v22;
    v24 = v25;
    v26 = *--v23;
    *v22 = v26;
    *v23 = v24;
  }
  while ( v22 != a3 + 43 );
  LOWORD(v27) = 23776;
  HIWORD(v27) = (unsigned int)&unk_1B5CE8 >> 16;
  v28 = memcmp(v27, a2 + 18, 0x50u);
  if ( !v28 )
  {
    V_LOCK();
    LOWORD(v33) = -23664;
    LOWORD(v34) = 20532;
    HIWORD(v34) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v33) = (unsigned int)" clock count chip_no %d" >> 16;
    v35 = v34;
    v49 = v34;
    LOWORD(v36) = -30004;
    logfmt_raw(v51, 0x1000u, 0, v33);
    V_UNLOCK();
    LOWORD(v37) = 1576;
    LOWORD(v38) = 2556;
    HIWORD(v37) = (unsigned int)"_ltc_1489" >> 16;
    HIWORD(v38) = (unsigned int)"ltc" >> 16;
    zlog(*v35, v38, 171, v37, 17, 198, 80, v51);
    v39 = (char *)a2 + 71;
    v40 = (char *)a2 + 151;
    v48 = a3[3];
    do
    {
      v41 = (unsigned __int8)*++v39;
      HIWORD(v36) = (unsigned int)" %s" >> 16;
      snprintf(&v50[v28], 4096 - v28, v36, v41);
      v28 += 3;
    }
    while ( v39 != v40 );
    V_LOCK();
    LOWORD(v42) = 2728;
    HIWORD(v42) = (unsigned int)"1489/chip_reg_io_ltc_1489.c" >> 16;
    logfmt_raw(v51, 0x1000u, 0, v42, v47, v48);
    V_UNLOCK();
    LOWORD(v43) = 2556;
    HIWORD(v43) = (unsigned int)"ltc" >> 16;
    zlog(*v49, v43, 171, "dump_work_ltc", 13, 117, 20, v51);
    V_LOCK();
    logfmt_raw(v51, 0x1000u, 0, "dump work: %s", v50);
    V_UNLOCK();
    LOWORD(v44) = 2556;
    HIWORD(v44) = (unsigned int)"ltc" >> 16;
    zlog(*v49, v44, 171, "dump_work_ltc", 13, 118, 20, v51);
  }
  LOWORD(v29) = 23776;
  HIWORD(v29) = (unsigned int)&unk_1B5CE8 >> 16;
  memcpy(v29, v11, 0x50u);
  v30 = BM_CRC16(a3 + 2, 82);
  a3[85] = v30;
  a3[84] = HIBYTE(v30);
  v31 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 86;
  if ( !v31 || !*(_BYTE *)(a1 + 265) )
    return 0;
  memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0x7FFu);
  *(_BYTE *)(a1 + 264) = 0;
  return 0;
}
