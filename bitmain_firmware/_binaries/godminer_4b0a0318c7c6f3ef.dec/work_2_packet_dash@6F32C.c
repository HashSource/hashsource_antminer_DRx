int __fastcall work_2_packet_dash(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v5; // r4
  int v7; // r9
  int v8; // lr
  int v9; // r2
  int v10; // r0
  int v11; // r8
  int v12; // lr
  int v13; // r12
  _DWORD *v14; // r2
  int v15; // r8
  int v16; // lr
  int v17; // r12
  const void *v18; // r11
  int v19; // r12
  _BYTE *v20; // r2
  _BYTE *v21; // r3
  char v22; // r1
  const void *v23; // r0
  int v24; // r4
  void *v25; // r0
  __int16 v26; // r0
  int v27; // r3
  int *v28; // r3
  int v29; // r2
  __int64 v30; // r0
  int v31; // r4
  int v32; // r3
  _DWORD *v33; // r3
  int v34; // r1
  int v36; // r3
  int *v37; // r12
  int *v38; // r5
  const char *v39; // r7
  int v40; // r1
  int v41; // r0
  int v42; // r5
  int v43; // r6
  int v44; // t1
  int v45; // r3
  int v46; // r1
  int v47; // r1
  int v50; // [sp+1Ch] [bp-2010h]
  int v51; // [sp+20h] [bp-200Ch]
  int *v52; // [sp+24h] [bp-2008h]
  char v53[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v54[2]; // [sp+1028h] [bp-1004h] BYREF
  char v55; // [sp+1030h] [bp-FFCh]
  char v56; // [sp+1031h] [bp-FFBh]
  __int16 v57; // [sp+1032h] [bp-FFAh]
  int v58; // [sp+1034h] [bp-FF8h]

  v5 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v7 = *(unsigned __int8 *)(v5 + 21504);
  v8 = *(_DWORD *)(a2 + 120);
  *(_QWORD *)(v5 + 8 * v7) = *(_QWORD *)a2;
  v9 = 12 * (__int16)v7 + 19968;
  *(_DWORD *)(v5 + 4 * (v7 + 3840)) = v8;
  v50 = a2 + 8;
  v10 = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(v5 + v9) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(v5 + v9 + 4) = v10;
  v11 = *(_DWORD *)(a2 + 128);
  v12 = *(_DWORD *)(a2 + 132);
  v13 = *(_DWORD *)(a2 + 136);
  v14 = (_DWORD *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 496));
  *v14 = *(_DWORD *)(a2 + 124);
  v14[1] = v11;
  v14[2] = v12;
  v14[3] = v13;
  v15 = *(_DWORD *)(a2 + 144);
  v16 = *(_DWORD *)(a2 + 148);
  v17 = *(_DWORD *)(a2 + 152);
  v14[4] = *(_DWORD *)(a2 + 140);
  v18 = (const void *)(a2 + 40);
  v14[6] = v16;
  v14[7] = v17;
  v14[5] = v15;
  strcpy((char *)(v5 + 32 * (*(unsigned __int8 *)(v5 + 21504) + 32)), (const char *)(a2 + 8));
  memcpy((void *)(v5 + 80 * *(unsigned __int8 *)(v5 + 21504) + 5120), (const void *)(a2 + 40), 0x50u);
  v19 = *(unsigned __int8 *)(v5 + 21504);
  *(_QWORD *)(v5 + 8 * (v19 + 2689)) = *(_QWORD *)(a2 + 168);
  a3[3] = v19;
  *(_BYTE *)(v5 + 21504) = (v19 + 1) & 0x7F;
  memcpy(a3 + 4, (const void *)(a2 + 40), 0x50u);
  v20 = a3;
  v21 = (_BYTE *)a2;
  do
  {
    v22 = v21[40];
    v21 += 4;
    v20[7] = v22;
    v20[6] = v21[37];
    v20[5] = v21[38];
    v20[4] = v21[39];
    v20 += 4;
  }
  while ( v21 != (_BYTE *)(a2 + 80) );
  LOWORD(v23) = 22972;
  HIWORD(v23) = (unsigned int)&unk_1B59C4 >> 16;
  v24 = memcmp(v23, (const void *)(a2 + 40), 0x50u);
  if ( !v24 )
  {
    V_LOCK();
    LOWORD(v36) = -23664;
    LOWORD(v37) = 20532;
    HIWORD(v37) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v36) = (unsigned int)" clock count chip_no %d" >> 16;
    v38 = v37;
    v52 = v37;
    LOWORD(v39) = -30004;
    logfmt_raw((char *)v54, 0x1000u, 0, v36);
    V_UNLOCK();
    LOWORD(v40) = -19880;
    v41 = *v38;
    HIWORD(v40) = (unsigned int)"_1727" >> 16;
    v42 = a2 + 39;
    v43 = a2 + 119;
    zlog(v41, v40, 173, "work_2_packet_dash", 18, 126, 80, v54);
    v51 = (unsigned __int8)a3[3];
    do
    {
      v44 = *(unsigned __int8 *)++v42;
      HIWORD(v39) = (unsigned int)" %s" >> 16;
      snprintf(&v53[v24], 4096 - v24, v39, v44);
      v24 += 3;
    }
    while ( v42 != v43 );
    V_LOCK();
    LOWORD(v45) = -19704;
    HIWORD(v45) = (unsigned int)"ing_hash_clock_count_DCR_1727" >> 16;
    logfmt_raw((char *)v54, 0x1000u, 0, v45, v50, v51);
    V_UNLOCK();
    LOWORD(v46) = -19880;
    HIWORD(v46) = (unsigned int)"_1727" >> 16;
    zlog(*v52, v46, 173, "dump_work_dash", 14, 76, 20, v54);
    V_LOCK();
    logfmt_raw((char *)v54, 0x1000u, 0, "dump work: %s", v53);
    V_UNLOCK();
    LOWORD(v47) = -19880;
    HIWORD(v47) = (unsigned int)"_1727" >> 16;
    zlog(*v52, v47, 173, "dump_work_dash", 14, 77, 20, v54);
  }
  LOWORD(v25) = 22972;
  HIWORD(v25) = (unsigned int)&unk_1B59C4 >> 16;
  memcpy(v25, v18, 0x50u);
  v26 = BM_CRC16(a3 + 2, 82);
  a3[85] = v26;
  a3[84] = HIBYTE(v26);
  v27 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 86;
  if ( v27 && *(_BYTE *)(a1 + 265) )
  {
    sub_6F204((int *)a1, 35);
    *(_BYTE *)(a1 + 264) = 0;
  }
  LOWORD(v28) = 15792;
  HIWORD(v28) = (unsigned int)&dword_1A3DB8 >> 16;
  v29 = *v28;
  v30 = 3435973837LL * (unsigned int)(*v28)++;
  v31 = v29 - 20 * (HIDWORD(v30) >> 4);
  if ( v29 == 20 * (HIDWORD(v30) >> 4) )
  {
    sub_6EDB0(a1, 20, 65280);
    V_LOCK();
    LOWORD(v32) = -23416;
    HIWORD(v32) = (unsigned int)" expected reg %02x, but %02x mode %d PMDATA %08x" >> 16;
    logfmt_raw((char *)v54, 0x1000u, v31, v32, "ChipSetting_bridge_reset_DASH_1766", 68);
    V_UNLOCK();
    LOWORD(v33) = 20532;
    HIWORD(v33) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v34) = -23880;
    HIWORD(v34) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
    zlog(*v33, v34, 150, "ChipSetting_bridge_reset_DASH_1766", 34, 167, 20, v54);
    v54[1] = v31;
    v56 = BYTE1(v31);
    v58 = v31;
    v57 = 68;
    v55 = 1;
    v54[0] = 2;
    (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v54);
    usleep(0x64u);
  }
  return 0;
}
