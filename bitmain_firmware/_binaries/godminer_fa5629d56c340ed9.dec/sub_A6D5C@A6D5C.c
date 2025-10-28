int __fastcall sub_A6D5C(int *a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v9; // r0
  int v10; // r5
  int v11; // lr
  int v12; // r12
  _DWORD *v13; // r3
  _DWORD *v14; // r2
  int *v15; // r12
  int v16; // r9
  int v17; // r8
  int v18; // r6
  int v19; // r9
  int v20; // r8
  int v21; // r6
  int v22; // r9
  int v23; // r8
  int v24; // r6
  int v25; // r8
  int v26; // r6
  int v27; // r9
  int v28; // r2
  int v29; // r3
  int v30; // r8
  int v31; // r6
  int v32; // r0
  int v33; // r8
  int v34; // r6
  int v35; // r0
  unsigned int v36; // r3
  int v37; // r0
  _DWORD *v38; // r2
  int v39; // lr
  int v40; // r0
  int v41; // r12
  int v42; // r2
  int v43; // r3
  int v44; // r4
  char *v45; // r11
  char *v46; // r0
  int v47; // t1
  char *v48; // r4
  int v49; // r10
  char *v50; // r0
  int v51; // t1
  unsigned int v53; // r6
  int v54; // [sp+24h] [bp-1100h]
  int v57; // [sp+54h] [bp-10D0h]
  _DWORD v58[7]; // [sp+58h] [bp-10CCh] BYREF
  int v59; // [sp+74h] [bp-10B0h]
  _DWORD v60[7]; // [sp+78h] [bp-10ACh] BYREF
  int v61; // [sp+94h] [bp-1090h]
  _BYTE v62[64]; // [sp+98h] [bp-108Ch] BYREF
  char v63; // [sp+D8h] [bp-104Ch] BYREF
  char s[4]; // [sp+DCh] [bp-1048h] BYREF
  int v65; // [sp+11Ch] [bp-1008h] BYREF
  char var1004[4128]; // [sp+120h] [bp-1004h] BYREF

  v9 = BM_CRC16((unsigned __int8 *)(a2 + 2), 43);
  v10 = *(unsigned __int8 *)(a2 + 46) | (*(unsigned __int8 *)(a2 + 45) << 8);
  if ( v9 == v10 )
  {
    v11 = *(unsigned __int8 *)(a2 + 12);
    v12 = a1[212];
    v13 = (_DWORD *)(v12 + 40 * v11);
    v14 = (_DWORD *)(v12 + 32 * (v11 + 576));
    v15 = (int *)(v12 + 8 * v11);
    v13 += 2048;
    v16 = v13[1];
    v17 = v13[2];
    v18 = v13[3];
    *(_DWORD *)(a3 + 34) = *v13;
    *(_DWORD *)(a3 + 38) = v16;
    *(_DWORD *)(a3 + 42) = v17;
    *(_DWORD *)(a3 + 46) = v18;
    v19 = v13[5];
    v20 = v13[6];
    v21 = v13[7];
    *(_DWORD *)(a3 + 50) = v13[4];
    *(_DWORD *)(a3 + 54) = v19;
    *(_DWORD *)(a3 + 58) = v20;
    *(_DWORD *)(a3 + 62) = v21;
    v22 = v14[1];
    v23 = v14[2];
    v24 = v14[3];
    *(_DWORD *)(a3 + 66) = *v14;
    *(_DWORD *)(a3 + 70) = v22;
    *(_DWORD *)(a3 + 74) = v23;
    *(_DWORD *)(a3 + 78) = v24;
    v25 = v14[6];
    v26 = v14[7];
    v27 = v14[5];
    *(_DWORD *)(a3 + 82) = v14[4];
    *(_DWORD *)(a3 + 86) = v27;
    *(_DWORD *)(a3 + 90) = v25;
    *(_DWORD *)(a3 + 94) = v26;
    v28 = v15[1024];
    v29 = (*(unsigned __int8 *)(a2 + 8) << 16)
        + (*(unsigned __int8 *)(a2 + 9) << 8)
        + *(unsigned __int8 *)(a2 + 10)
        + (*(unsigned __int8 *)(a2 + 7) << 24);
    v15[1025] = v15[1025];
    v15[1024] = v29 | v28;
    v30 = *(_DWORD *)(a2 + 17);
    v31 = *(_DWORD *)(a2 + 21);
    v32 = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 13);
    *(_DWORD *)(a3 + 102) = v30;
    *(_DWORD *)(a3 + 106) = v31;
    *(_DWORD *)(a3 + 110) = v32;
    v33 = *(_DWORD *)(a2 + 33);
    v34 = *(_DWORD *)(a2 + 37);
    v35 = *(_DWORD *)(a2 + 41);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 29);
    *(_DWORD *)(a3 + 118) = v33;
    *(_DWORD *)(a3 + 122) = v34;
    *(_DWORD *)(a3 + 126) = v35;
    v36 = v15[1024];
    v37 = v15[1025];
    *(_DWORD *)(a3 + 26) = v36;
    *(_DWORD *)(a3 + 30) = v37;
    v15[1025] = v37;
    v15[1024] = 0;
    *(_BYTE *)(a3 + 16) = v11;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 11);
    v38 = v15 + 512;
    v39 = v15[512];
    v40 = *v15;
    v41 = v15[1];
    v42 = v38[1];
    *(_DWORD *)(a3 + 18) = v39;
    *(_DWORD *)a3 = v40;
    *(_DWORD *)(a3 + 22) = v42;
    *(_DWORD *)(a3 + 4) = v41;
    *a7 = v40;
    *(_DWORD *)(a3 + 12) = (v36 >> 10) & 0xF;
    *a6 = 0;
    v43 = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v43;
    *a4 = 1;
    v57 = (*(_DWORD *)(a3 + 26) >> 9) & 7;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "wc %d diff: %d", *(unsigned __int8 *)(a3 + 16), *(unsigned __int8 *)(a3 + 17));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "dump_nonce",
      10,
      1200,
      60,
      var1004);
    V_LOCK();
    V_INT((int)v58, "chain", a1[65]);
    v44 = a3 + 33;
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v59,
      v58[0],
      v58[1],
      v58[2],
      v58[3],
      v58[4],
      v58[5],
      v58[6],
      v59,
      "asic %d core %d pe %d addr_interval %d",
      *(_DWORD *)(a3 + 8),
      *(_DWORD *)(a3 + 12),
      v57,
      a1[113]);
    V_UNLOCK();
    v45 = v62;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "dump_nonce",
      10,
      1202,
      60,
      var1004);
    do
    {
      v46 = v45;
      v47 = *(unsigned __int8 *)++v44;
      v45 += 2;
      sprintf(v46, "%02x", v47);
    }
    while ( v45 != &v63 );
    v48 = s;
    v49 = a3 + 97;
    do
    {
      v50 = v48;
      v51 = *(unsigned __int8 *)++v49;
      v48 += 2;
      sprintf(v50, "%02x", v51);
    }
    while ( v48 != (char *)&v65 );
    V_LOCK();
    V_INT((int)v60, "chain", a1[65]);
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      v61,
      v60[0],
      v60[1],
      v60[2],
      v60[3],
      v60[4],
      v60[5],
      v60[6],
      v61,
      "nonce %d asic %02d core %02d pe %02d header %s nonce %016llx mixhash %s",
      v54,
      ++qword_1B50E0,
      *(_DWORD *)(a3 + 8),
      *(_DWORD *)(a3 + 12),
      v57,
      v62,
      *(_DWORD *)(a3 + 26),
      *(_DWORD *)(a3 + 30),
      s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "dump_nonce",
      10,
      1211,
      60,
      var1004);
    return 0;
  }
  else
  {
    v53 = v9;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v53, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "packet_2_nonce_rvn",
      18,
      1237,
      100,
      var1004);
    return 11;
  }
}
