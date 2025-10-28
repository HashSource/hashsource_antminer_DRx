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
  int v30; // r4
  char *v31; // r3
  _DWORD *v32; // r2
  int v33; // r12
  int v34; // r0
  int v35; // r1
  __int16 v36; // r0
  int v37; // r3
  int v39; // r5
  int v40; // r6
  int v41; // t1
  char *s2; // [sp+10h] [bp-201Ch]
  char *v43; // [sp+18h] [bp-2014h]
  int v45; // [sp+20h] [bp-200Ch]
  int v46; // [sp+24h] [bp-2008h]
  char v47[4056]; // [sp+28h] [bp-2004h] BYREF
  _DWORD v48[1025]; // [sp+1028h] [bp-1004h] BYREF

  v6 = *(_DWORD *)(a1 + 784);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  v7 = v6 + 12288;
  v45 = a2 + 8;
  if ( *(_DWORD *)(a1 + 460) == 1 )
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
  v43 = s2 + 48;
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
  while ( v26 != v43 );
  v30 = memcmp(&last_header_ckb, s2, 0x30u);
  if ( !v30 )
  {
    V_LOCK();
    logfmt_raw((char *)v48, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    v39 = a2 + 39;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "work_2_packet_ckb",
      17,
      119,
      80,
      v48);
    v40 = a2 + 87;
    v46 = (unsigned __int8)a3[3];
    do
    {
      v41 = *(unsigned __int8 *)++v39;
      snprintf(&v47[v30], 4096 - v30, "%02x ", v41);
      v30 += 3;
    }
    while ( v39 != v40 );
    V_LOCK();
    logfmt_raw((char *)v48, 0x1000u, 0, "ckb dump work jobid %s, work count %d", v45, v46);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "dump_work_ckb",
      13,
      86,
      20,
      v48);
    V_LOCK();
    logfmt_raw((char *)v48, 0x1000u, 0, "dump work: %s", v47);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "dump_work_ckb",
      13,
      87,
      20,
      v48);
  }
  v31 = s2;
  v32 = &last_header_ckb;
  do
  {
    v31 += 16;
    v32 += 4;
    v33 = *((_DWORD *)v31 - 3);
    v34 = *((_DWORD *)v31 - 2);
    v35 = *((_DWORD *)v31 - 1);
    *(v32 - 4) = *((_DWORD *)v31 - 4);
    *(v32 - 3) = v33;
    *(v32 - 2) = v34;
    *(v32 - 1) = v35;
  }
  while ( v31 != v43 );
  v36 = BM_CRC16(a3 + 2, 50);
  a3[53] = v36;
  a3[52] = HIBYTE(v36);
  v37 = *(unsigned __int8 *)(a1 + 229);
  *a4 = 54;
  if ( v37 && *(_BYTE *)(a1 + 230) )
  {
    memset(*(void **)(a1 + 424), 0, 48 * *(_DWORD *)(a1 + 304));
    sub_5FDA4((int *)a1, 39);
    *(_BYTE *)(a1 + 229) = 0;
  }
  V_LOCK();
  logfmt_raw((char *)v48, 0x1000u, 0, "bridge reset %s %02x", "ChipSetting_bridge_reset_CKB_2042", 68);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_bridge_reset_CKB_2042",
    33,
    112,
    20,
    v48);
  v48[1] = 0;
  v48[2] = 4456449;
  v48[3] = 0;
  v48[0] = 2;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v48);
  usleep(0x64u);
  return 0;
}
