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
  __int16 v29; // r0
  int v30; // r3
  void (__fastcall *v31)(int, _DWORD *); // r3
  int v33; // r7
  int v34; // t1
  int v35; // r7
  int v36; // r5
  int v37; // r4
  int v38; // t1
  int v41; // [sp+20h] [bp-200Ch]
  int v42; // [sp+24h] [bp-2008h]
  char v43[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v44[2]; // [sp+1028h] [bp-1004h] BYREF
  int v45; // [sp+1030h] [bp-FFCh]
  int v46; // [sp+1034h] [bp-FF8h]

  v5 = *(_DWORD *)(a1 + 848);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  v7 = (_WORD *)(a2 + 396);
  if ( *(_DWORD *)(a1 + 516) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v8 = (_DWORD *)a2;
  v9 = *(unsigned __int8 *)(v5 + 50816);
  v10 = a2 + 8;
  v11 = *(_DWORD *)(v10 + 352);
  v41 = v10;
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
  if ( *(_DWORD *)(a1 + 516) == 1 )
  {
    *(_DWORD *)(a3 + 285) = *(_DWORD *)(a2 + 350);
    *(_BYTE *)(a3 + 289) = *(_BYTE *)(a2 + 354);
  }
  v28 = memcmp(&last_header_kda, (const void *)(a2 + 72), 0x11Eu);
  if ( !v28 )
  {
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v33 = a3 - 1;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "work_2_packet_kda",
      17,
      133,
      20,
      v44);
    v42 = *(unsigned __int8 *)(a3 + 3);
    do
    {
      v34 = *(unsigned __int8 *)++v33;
      snprintf(&v43[v28], 4096 - v28, "%02x", v34);
      v28 += 2;
    }
    while ( v33 != a3 + 291 );
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "dump packet %s", v43);
    V_UNLOCK();
    v35 = a2 + 357;
    v36 = a2 + 71;
    v37 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "dump_work_kda",
      13,
      84,
      20,
      v44);
    do
    {
      v38 = *(unsigned __int8 *)++v36;
      snprintf(&v43[v37], 4096 - v37, "%02x", v38);
      v37 += 2;
    }
    while ( v35 != v36 );
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "kda dump work jobid %s, work count %d", v41, v42);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "dump_work_kda",
      13,
      90,
      20,
      v44);
    V_LOCK();
    logfmt_raw((char *)v44, 0x1000u, 0, "dump work: %s", v43);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "dump_work_kda",
      13,
      91,
      20,
      v44);
  }
  memcpy(&last_header_kda, v20, 0x11Eu);
  v29 = BM_CRC16((unsigned __int8 *)(a3 + 2), 288);
  *(_BYTE *)(a3 + 291) = v29;
  *(_BYTE *)(a3 + 290) = HIBYTE(v29);
  v30 = *(unsigned __int8 *)(a1 + 266);
  *a4 = 292;
  if ( v30 && *(_BYTE *)(a1 + 267) )
  {
    memset(*(void **)(a1 + 480), 0, 48 * *(_DWORD *)(a1 + 356));
    sub_96BBC((int *)a1, 40);
    *(_BYTE *)(a1 + 266) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v44, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_KDA_2110", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_bridge_reset_KDA_2110",
    33,
    167,
    20,
    v44);
  v44[1] = 0;
  v45 = 4456448;
  v46 = 0;
  v31 = *(void (__fastcall **)(int, _DWORD *))(a1 + 280);
  LOBYTE(v45) = 1;
  v44[0] = 2;
  v31(a1, v44);
  usleep(0x14u);
  return 0;
}
