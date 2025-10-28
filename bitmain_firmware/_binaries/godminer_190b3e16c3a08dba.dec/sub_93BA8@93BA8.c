int __fastcall sub_93BA8(int a1, int a2, int a3, _BYTE *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  unsigned int v11; // r0
  int v12; // r7
  int v13; // r7
  int v14; // r12
  _DWORD *v15; // r3
  _DWORD *v16; // r2
  int *v17; // r12
  int v18; // r10
  int v19; // r9
  int v20; // r8
  int v21; // r10
  int v22; // r9
  int v23; // r8
  int v24; // r9
  int v25; // r8
  int v26; // r3
  int v27; // r3
  int v28; // r9
  int v29; // r8
  int v30; // r0
  int v31; // r3
  int v32; // r10
  int v33; // r0
  int v34; // r3
  int v35; // r10
  int v36; // r0
  int v37; // r3
  unsigned int v39; // r3
  int v40; // r2
  int v41; // r2
  int v42; // r5
  int v43; // lr
  int v44; // r3
  unsigned int v45; // r8
  char v46[4080]; // [sp+10h] [bp-1004h] BYREF

  v11 = BM_CRC16((unsigned __int8 *)(a2 + 2), 39);
  v12 = *(unsigned __int8 *)(a2 + 42) | (*(unsigned __int8 *)(a2 + 41) << 8);
  if ( v11 == v12 )
  {
    v13 = *(unsigned __int8 *)(a2 + 8);
    v14 = *(_DWORD *)(a1 + 784);
    v15 = (_DWORD *)(v14 + 40 * v13);
    v16 = (_DWORD *)(v14 + 32 * (v13 + 576));
    v17 = (int *)(v14 + 8 * v13);
    v15 += 2048;
    v18 = v15[1];
    v19 = v15[2];
    v20 = v15[3];
    *(_DWORD *)(a3 + 34) = *v15;
    *(_DWORD *)(a3 + 38) = v18;
    *(_DWORD *)(a3 + 42) = v19;
    *(_DWORD *)(a3 + 46) = v20;
    v21 = v15[5];
    v22 = v15[6];
    v23 = v15[7];
    *(_DWORD *)(a3 + 50) = v15[4];
    *(_DWORD *)(a3 + 54) = v21;
    *(_DWORD *)(a3 + 58) = v22;
    *(_DWORD *)(a3 + 62) = v23;
    v24 = v16[1];
    v25 = v16[2];
    v26 = v16[3];
    *(_DWORD *)(a3 + 66) = *v16;
    *(_DWORD *)(a3 + 70) = v24;
    *(_DWORD *)(a3 + 74) = v25;
    *(_DWORD *)(a3 + 78) = v26;
    v27 = v16[7];
    v28 = v16[5];
    v29 = v16[6];
    *(_DWORD *)(a3 + 82) = v16[4];
    *(_DWORD *)(a3 + 86) = v28;
    *(_DWORD *)(a3 + 90) = v29;
    *(_DWORD *)(a3 + 94) = v27;
    v30 = v17[1024];
    v31 = (*(unsigned __int8 *)(a2 + 4) << 16)
        + (*(unsigned __int8 *)(a2 + 5) << 8)
        + *(unsigned __int8 *)(a2 + 6)
        + (*(unsigned __int8 *)(a2 + 3) << 24);
    v17[1025] = v17[1025];
    v17[1024] = v31 | v30;
    v32 = *(_DWORD *)(a2 + 13);
    v33 = *(_DWORD *)(a2 + 17);
    v34 = *(_DWORD *)(a2 + 21);
    *(_DWORD *)(a3 + 98) = *(_DWORD *)(a2 + 9);
    *(_DWORD *)(a3 + 102) = v32;
    *(_DWORD *)(a3 + 106) = v33;
    *(_DWORD *)(a3 + 110) = v34;
    v35 = *(_DWORD *)(a2 + 29);
    v36 = *(_DWORD *)(a2 + 33);
    v37 = *(_DWORD *)(a2 + 37);
    *(_DWORD *)(a3 + 114) = *(_DWORD *)(a2 + 25);
    *(_DWORD *)(a3 + 118) = v35;
    *(_DWORD *)(a3 + 122) = v36;
    *(_DWORD *)(a3 + 126) = v37;
    v39 = v17[1024];
    v40 = v17[1025];
    *(_DWORD *)(a3 + 26) = v39;
    *(_DWORD *)(a3 + 30) = v40;
    v17[1024] = 0;
    v17[1025] = v40;
    *(_BYTE *)(a3 + 16) = v13;
    *(_BYTE *)(a3 + 17) = *(_BYTE *)(a2 + 7);
    v41 = *v17;
    v42 = v17[512];
    v43 = v17[513];
    *(_DWORD *)(a3 + 4) = v17[1];
    *(_DWORD *)(a3 + 18) = v42;
    *(_DWORD *)a3 = v41;
    *(_DWORD *)(a3 + 22) = v43;
    *a7 = v41;
    *(_DWORD *)(a3 + 12) = (v39 >> 10) & 0xF;
    *a6 = 0;
    v44 = *(_DWORD *)(a3 + 30);
    *a5 = *(_DWORD *)(a3 + 26);
    a5[1] = v44;
    *a4 = 1;
    return 0;
  }
  else
  {
    v45 = v11;
    V_LOCK();
    logfmt_raw(v46, 0x1000u, 0, "get nonce crc error calc value %04x resp value %04x", v45, v12);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      171,
      "packet_2_nonce_rvn",
      18,
      990,
      100,
      v46);
    return 11;
  }
}
