int __fastcall work_2_packet_ckb(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r5
  int v9; // r0
  int v10; // r12
  _DWORD *v11; // r2
  int v12; // r7
  int v13; // lr
  int v14; // r12
  int v15; // r7
  int v16; // lr
  int v17; // r12
  int *v18; // r2
  int v19; // r4
  int v20; // lr
  int v21; // r12
  int v22; // r1
  int v23; // r3
  char v24; // r2
  _BYTE *v25; // r1
  char *v26; // r3
  int v27; // r12
  int v28; // r0
  int v29; // r2
  const void *v30; // r0
  int v31; // r4
  int *v32; // r3
  char *v33; // r3
  _DWORD *v34; // r2
  int v35; // r12
  int v36; // r0
  int v37; // r1
  __int16 v38; // r0
  int v39; // r3
  int v40; // r3
  int v41; // r1
  int *v43; // r12
  int v44; // r3
  int *v45; // r5
  int v46; // r1
  int v47; // r0
  const char *v48; // r7
  int v49; // r5
  int v50; // r6
  int v51; // t1
  int v52; // r3
  int v53; // r1
  int v54; // r3
  int v55; // r1
  char *s2; // [sp+10h] [bp-201Ch]
  int *v57; // [sp+14h] [bp-2018h]
  char *v58; // [sp+18h] [bp-2014h]
  int v60; // [sp+20h] [bp-200Ch]
  int v61; // [sp+24h] [bp-2008h]
  char v62[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v63[1025]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 840);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = v6 + 12288;
  v60 = a2 + 8;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    a3[2] = 48;
  v9 = *(unsigned __int8 *)(v6 + 15872);
  v10 = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(v6 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v6 + 4 * (v9 + 2816)) = v10;
  v11 = (_DWORD *)(v6 + 32 * (v9 + 368));
  v12 = *(_DWORD *)(a2 + 96);
  v13 = *(_DWORD *)(a2 + 100);
  v14 = *(_DWORD *)(a2 + 104);
  *v11 = *(_DWORD *)(a2 + 92);
  v11[1] = v12;
  v11[2] = v13;
  v11[3] = v14;
  v15 = *(_DWORD *)(a2 + 112);
  v16 = *(_DWORD *)(a2 + 116);
  v17 = *(_DWORD *)(a2 + 120);
  v11[4] = *(_DWORD *)(a2 + 108);
  v11[5] = v15;
  v11[6] = v16;
  v11[7] = v17;
  s2 = (char *)(a2 + 40);
  strcpy((char *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 15872) + 32)), (const char *)(a2 + 8));
  v18 = (int *)(a2 + 40);
  v19 = v6 + 48 * *(unsigned __int8 *)(v6 + 15872) + 5120;
  do
  {
    v20 = *v18;
    v18 += 4;
    v21 = *(v18 - 3);
    v19 += 16;
    v22 = *(v18 - 2);
    v23 = *(v18 - 1);
    *(_DWORD *)(v19 - 16) = v20;
    *(_DWORD *)(v19 - 12) = v21;
    *(_DWORD *)(v19 - 8) = v22;
    *(_DWORD *)(v19 - 4) = v23;
  }
  while ( v18 != (int *)(a2 + 88) );
  v24 = *(_BYTE *)(v7 + 3584);
  v25 = a3 + 4;
  a3[3] = v24;
  v26 = s2;
  *(_BYTE *)(v7 + 3584) = (v24 + 1) & 0x7F;
  v58 = s2 + 48;
  do
  {
    v26 += 16;
    v25 += 16;
    v27 = *((_DWORD *)v26 - 3);
    v28 = *((_DWORD *)v26 - 2);
    v29 = *((_DWORD *)v26 - 1);
    *((_DWORD *)v25 - 4) = *((_DWORD *)v26 - 4);
    *((_DWORD *)v25 - 3) = v27;
    *((_DWORD *)v25 - 2) = v28;
    *((_DWORD *)v25 - 1) = v29;
  }
  while ( v26 != v58 );
  LOWORD(v30) = 22924;
  HIWORD(v30) = (unsigned int)&unk_1B5994 >> 16;
  v31 = memcmp(v30, s2, 0x30u);
  if ( v31 )
  {
    LOWORD(v32) = 20532;
    HIWORD(v32) = (unsigned int)&g_fan_zc >> 16;
    v57 = v32;
  }
  else
  {
    V_LOCK();
    LOWORD(v43) = 20532;
    LOWORD(v44) = -23664;
    HIWORD(v43) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v44) = (unsigned int)" clock count chip_no %d" >> 16;
    v45 = v43;
    v57 = v43;
    logfmt_raw((char *)v63, 0x1000u, 0, v44);
    V_UNLOCK();
    LOWORD(v46) = -23644;
    v47 = *v45;
    HIWORD(v46) = (unsigned int)" %d" >> 16;
    LOWORD(v48) = -30004;
    v49 = a2 + 39;
    zlog(v47, v46, 171, "work_2_packet_ckb", 17, 119, 80, v63);
    v50 = a2 + 87;
    v61 = (unsigned __int8)a3[3];
    do
    {
      v51 = *(unsigned __int8 *)++v49;
      HIWORD(v48) = (unsigned int)" %s" >> 16;
      snprintf(&v62[v31], 4096 - v31, v48, v51);
      v31 += 3;
    }
    while ( v49 != v50 );
    V_LOCK();
    LOWORD(v52) = -23472;
    HIWORD(v52) = (unsigned int)"02x, reg %02x mode %d PMDATA %08x" >> 16;
    logfmt_raw((char *)v63, 0x1000u, 0, v52, v60, v61);
    V_UNLOCK();
    LOWORD(v53) = -23644;
    HIWORD(v53) = (unsigned int)" %d" >> 16;
    zlog(*v57, v53, 171, "dump_work_ckb", 13, 86, 20, v63);
    V_LOCK();
    LOWORD(v54) = -23432;
    HIWORD(v54) = (unsigned int)"data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x" >> 16;
    logfmt_raw((char *)v63, 0x1000u, 0, v54, v62);
    V_UNLOCK();
    LOWORD(v55) = -23644;
    HIWORD(v55) = (unsigned int)" %d" >> 16;
    zlog(*v57, v55, 171, "dump_work_ckb", 13, 87, 20, v63);
  }
  v33 = s2;
  v34 = &last_header_ckb;
  do
  {
    v33 += 16;
    v34 += 4;
    v35 = *((_DWORD *)v33 - 3);
    v36 = *((_DWORD *)v33 - 2);
    v37 = *((_DWORD *)v33 - 1);
    *(v34 - 4) = *((_DWORD *)v33 - 4);
    *(v34 - 3) = v35;
    *(v34 - 2) = v36;
    *(v34 - 1) = v37;
  }
  while ( v33 != v58 );
  v38 = BM_CRC16(a3 + 2, 50);
  a3[53] = v38;
  a3[52] = HIBYTE(v38);
  v39 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 54;
  if ( v39 && *(_BYTE *)(a1 + 265) )
  {
    memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
    sub_6A32C((int *)a1, 39);
    *(_BYTE *)(a1 + 264) = 0;
  }
  V_LOCK();
  LOWORD(v40) = -23416;
  HIWORD(v40) = (unsigned int)" expected reg %02x, but %02x mode %d PMDATA %08x" >> 16;
  logfmt_raw((char *)v63, 0x1000u, 0, v40, "ChipSetting_bridge_reset_CKB_2042", 68);
  V_UNLOCK();
  LOWORD(v41) = -23880;
  HIWORD(v41) = (unsigned int)"x, reg %02x cnt %08x" >> 16;
  zlog(*v57, v41, 150, "ChipSetting_bridge_reset_CKB_2042", 33, 167, 20, v63);
  v63[1] = 0;
  v63[2] = 4456449;
  v63[3] = 0;
  v63[0] = 2;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 276))(a1, v63);
  usleep(0x64u);
  return 0;
}
