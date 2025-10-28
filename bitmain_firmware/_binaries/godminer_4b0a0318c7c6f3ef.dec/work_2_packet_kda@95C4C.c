int __fastcall work_2_packet_kda(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r4
  _WORD *v7; // r10
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r1
  int v11; // r12
  _DWORD *v12; // r0
  int v13; // t1
  int v14; // r9
  int v15; // lr
  int v16; // r12
  int v17; // r9
  int v18; // lr
  int v19; // r12
  char *v20; // r6
  int v21; // r3
  char v22; // r1
  char v23; // r12
  char v24; // r1
  char *v25; // r3
  int v26; // r2
  char v27; // t1
  int v28; // r4
  _DWORD *v29; // r3
  void *v30; // r0
  __int16 v31; // r0
  int v32; // r3
  void (__fastcall *v33)(int, _DWORD *); // r3
  int v35; // r3
  _DWORD *v36; // r12
  _DWORD *v37; // r8
  const char *v38; // r9
  int v39; // r7
  int v40; // t1
  const char *v41; // r9
  int v42; // r7
  int v43; // r5
  int v44; // r4
  int v45; // t1
  int v46; // r3
  _DWORD *v48; // [sp+18h] [bp-2014h]
  int v50; // [sp+20h] [bp-200Ch]
  int v51; // [sp+24h] [bp-2008h]
  char v52[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v53[2]; // [sp+1028h] [bp-1004h] BYREF
  int v54; // [sp+1030h] [bp-FFCh]
  int v55; // [sp+1034h] [bp-FF8h]

  v5 = *(_DWORD *)(a1 + 840);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  v7 = (_WORD *)(a2 + 396);
  if ( *(_DWORD *)(a1 + 508) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v8 = (_DWORD *)a2;
  v9 = *(unsigned __int8 *)(v5 + 50816);
  v10 = a2 + 8;
  v11 = *(_DWORD *)(v10 + 352);
  v50 = v10;
  *(_QWORD *)(v5 + 8 * v9) = *(_QWORD *)a2;
  *(_DWORD *)(v5 + 4 * (v9 + 11552)) = v11;
  v12 = (_DWORD *)(v5 + 32 * (v9 + 1460));
  v13 = v8[91];
  v8 += 91;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  *v12 = v13;
  v12[1] = v14;
  v12[2] = v15;
  v12[3] = v16;
  v17 = v8[5];
  v18 = v8[6];
  v19 = v8[7];
  v12[4] = v8[4];
  v20 = (char *)(a2 + 72);
  v12[6] = v18;
  v12[7] = v19;
  v12[5] = v17;
  strcpy((char *)(v5 + ((*(unsigned __int8 *)(v5 + 50816) + 16) << 6)), (const char *)v10);
  memcpy((void *)(v5 + 286 * *(unsigned __int8 *)(v5 + 50816) + 9216), (const void *)(a2 + 72), 0x11Eu);
  v21 = 3 * *(unsigned __int8 *)(v5 + 50816) + 45824;
  v22 = *(_BYTE *)(a2 + 398);
  *(_WORD *)(v5 + v21) = *v7;
  *(_BYTE *)(v5 + v21 + 2) = v22;
  v23 = *(_BYTE *)(v5 + 50816);
  *(_BYTE *)(a3 + 3) = v23;
  *(_BYTE *)(v5 + 50816) = (v23 + 1) & 0x7F;
  memset((void *)(a3 + 4), 0, 0x11Eu);
  v24 = *(_BYTE *)(a2 + 398);
  v25 = (char *)(a2 + 350);
  v26 = a3 + 6;
  *(_WORD *)(a3 + 4) = *v7;
  *(_BYTE *)(a3 + 6) = v24;
  do
  {
    v27 = *--v25;
    *(_BYTE *)++v26 = v27;
  }
  while ( v25 != v20 );
  if ( *(_DWORD *)(a1 + 508) == 1 )
  {
    *(_DWORD *)(a3 + 285) = *(_DWORD *)(a2 + 350);
    *(_BYTE *)(a3 + 289) = *(_BYTE *)(a2 + 354);
  }
  v28 = memcmp(&last_header_kda, (const void *)(a2 + 72), 0x11Eu);
  if ( v28 )
  {
    LOWORD(v29) = 20532;
    HIWORD(v29) = (unsigned int)&g_fan_zc >> 16;
    v48 = v29;
  }
  else
  {
    V_LOCK();
    LOWORD(v35) = -23664;
    LOWORD(v36) = 20532;
    HIWORD(v36) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v35) = (unsigned int)" clock count chip_no %d" >> 16;
    v37 = v36;
    v48 = v36;
    LOWORD(v38) = 19284;
    logfmt_raw((char *)v53, 0x1000u, 0, v35);
    V_UNLOCK();
    v39 = a3 - 1;
    zlog(
      *v37,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "work_2_packet_kda",
      17,
      133,
      20,
      v53);
    v51 = *(unsigned __int8 *)(a3 + 3);
    do
    {
      v40 = *(unsigned __int8 *)++v39;
      HIWORD(v38) = (unsigned int)"ner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
      snprintf(&v52[v28], 4096 - v28, v38, v40);
      v28 += 2;
    }
    while ( v39 != a3 + 291 );
    V_LOCK();
    logfmt_raw((char *)v53, 0x1000u, 0, "dump packet %s", v52);
    V_UNLOCK();
    LOWORD(v41) = 19284;
    v42 = a2 + 357;
    v43 = a2 + 71;
    v44 = 0;
    zlog(
      *v48,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "dump_work_kda",
      13,
      84,
      20,
      v53);
    do
    {
      v45 = *(unsigned __int8 *)++v43;
      HIWORD(v41) = (unsigned int)"ner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
      snprintf(&v52[v44], 4096 - v44, v41, v45);
      v44 += 2;
    }
    while ( v42 != v43 );
    V_LOCK();
    logfmt_raw((char *)v53, 0x1000u, 0, 1506680, v50, v51);
    V_UNLOCK();
    zlog(
      *v48,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "dump_work_kda",
      13,
      90,
      20,
      v53);
    V_LOCK();
    LOWORD(v46) = -23432;
    HIWORD(v46) = (unsigned int)"data] chip %02x, expected reg %02x, but %02x mode %d PMDATA %08x" >> 16;
    logfmt_raw((char *)v53, 0x1000u, 0, v46, v52);
    V_UNLOCK();
    zlog(
      *v48,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "dump_work_kda",
      13,
      91,
      20,
      v53);
  }
  LOWORD(v30) = 23488;
  HIWORD(v30) = (unsigned int)&unk_1B5BC8 >> 16;
  memcpy(v30, v20, 0x11Eu);
  v31 = BM_CRC16((unsigned __int8 *)(a3 + 2), 288);
  *(_BYTE *)(a3 + 291) = v31;
  *(_BYTE *)(a3 + 290) = HIBYTE(v31);
  v32 = *(unsigned __int8 *)(a1 + 264);
  *a4 = 292;
  if ( v32 && *(_BYTE *)(a1 + 265) )
  {
    memset(*(void **)(a1 + 472), 0, 48 * *(_DWORD *)(a1 + 352));
    sub_95B24((int *)a1, 40);
    *(_BYTE *)(a1 + 264) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v53, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_KDA_2110", 68);
  V_UNLOCK();
  zlog(
    *v48,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_bridge_reset_KDA_2110",
    33,
    167,
    20,
    v53);
  v53[1] = 0;
  v54 = 4456448;
  v55 = 0;
  v33 = *(void (__fastcall **)(int, _DWORD *))(a1 + 276);
  LOBYTE(v54) = 1;
  v53[0] = 2;
  v33(a1, v53);
  usleep(0x14u);
  return 0;
}
