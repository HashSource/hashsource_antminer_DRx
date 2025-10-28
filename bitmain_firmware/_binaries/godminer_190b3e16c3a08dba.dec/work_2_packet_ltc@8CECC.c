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
  int v27; // r4
  __int16 v28; // r0
  int v29; // r3
  char *v31; // r5
  char *v32; // r6
  int v33; // t1
  const char *v36; // [sp+1Ch] [bp-2010h]
  int v37; // [sp+20h] [bp-200Ch]
  char v38[4056]; // [sp+28h] [bp-2004h] BYREF
  char v39[4100]; // [sp+1028h] [bp-1004h] BYREF

  v5 = *(_DWORD *)(a1 + 784);
  *a3 = 85;
  a3[2] = 32;
  a3[1] = -86;
  if ( *(_DWORD *)(a1 + 460) == 1 )
    a3[2] = 48;
  v7 = a2;
  v8 = *(unsigned __int8 *)(v5 + 27136);
  v9 = (const char *)(a2 + 2);
  v10 = *((_DWORD *)v9 + 36);
  v36 = v9;
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
  v27 = memcmp(&last_work_ltc, a2 + 18, 0x50u);
  if ( !v27 )
  {
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "found repeat work");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "work_2_packet_ltc",
      17,
      198,
      80,
      v39);
    v31 = (char *)a2 + 71;
    v32 = (char *)a2 + 151;
    v37 = a3[3];
    do
    {
      v33 = (unsigned __int8)*++v31;
      snprintf(&v38[v27], 4096 - v27, "%02x ", v33);
      v27 += 3;
    }
    while ( v31 != v32 );
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "ltc dump work jobid %s, work count %02x", v36, v37);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "dump_work_ltc",
      13,
      117,
      20,
      v39);
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, "dump work: %s", v38);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ltc_1489/backend_ltc_1489.c",
      171,
      "dump_work_ltc",
      13,
      118,
      20,
      v39);
  }
  memcpy(&last_work_ltc, v11, 0x50u);
  v28 = BM_CRC16(a3 + 2, 82);
  a3[85] = v28;
  a3[84] = HIBYTE(v28);
  v29 = *(unsigned __int8 *)(a1 + 229);
  *a4 = 86;
  if ( !v29 || !*(_BYTE *)(a1 + 230) )
    return 0;
  memset(*(void **)(a1 + 424), 0, 48 * *(_DWORD *)(a1 + 304));
  chip_setting_ticket_mask_ltc((_DWORD *)a1, 0x7FFu);
  *(_BYTE *)(a1 + 229) = 0;
  return 0;
}
