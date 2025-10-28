int __fastcall work_2_packet_rvn(int *a1, int *a2, int a3, _DWORD *a4)
{
  int v4; // r5
  int v9; // r3
  int v10; // r0
  int v11; // lr
  int v12; // r12
  _DWORD *v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // lr
  int v17; // r12
  int v18; // r0
  int v19; // lr
  int v20; // r12
  int v21; // r9
  int v22; // r12
  int v23; // r2
  int v24; // r10
  int v25; // r1
  _DWORD *v26; // r2
  int v27; // r1
  int v28; // r12
  int v29; // r10
  int v30; // r10
  int v31; // lr
  int v32; // r12
  _DWORD *v33; // r3
  int v34; // lr
  int v35; // r12
  int v36; // r11
  int v37; // r2
  int v38; // r3
  int v39; // r3
  int v40; // r6
  __int16 v41; // r0
  char v43[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = a1[196];
  if ( v4 )
  {
    *(_BYTE *)a3 = 85;
    *(_BYTE *)(a3 + 1) = -86;
    *(_BYTE *)(a3 + 2) = 32;
    if ( a1[115] == 1 )
      *(_BYTE *)(a3 + 2) = 48;
    v9 = *(unsigned __int8 *)(v4 + 35072);
    v10 = *a2;
    v11 = a2[3];
    v12 = a2[1];
    v13 = (_DWORD *)(v4 + 8 * v9);
    v13[512] = a2[2];
    v13[513] = v11;
    *v13 = v10;
    v14 = (unsigned __int8)byte_18BFA4;
    v13[1] = v12;
    if ( *((unsigned __int8 *)a2 + 88) != v14 )
    {
      V_LOCK();
      logfmt_raw(
        v43,
        0x1000u,
        0,
        "diff changed, last: %02x, now: %02x",
        (unsigned __int8)byte_18BFA4,
        *((unsigned __int8 *)a2 + 88));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        171,
        "work_2_packet_rvn",
        17,
        919,
        40,
        v43);
      set_ticketmask_rvn((int)a1, a1[100]);
      LOBYTE(v14) = *((_BYTE *)a2 + 88);
      v9 = *(unsigned __int8 *)(v4 + 35072);
      byte_18BFA4 = v14;
    }
    *(_BYTE *)(v4 + v9 + 34816) = v14;
    v15 = a2[5];
    v16 = a2[6];
    v17 = a2[7];
    *(_DWORD *)(a3 + 4) = a2[4];
    *(_DWORD *)(a3 + 8) = v15;
    *(_DWORD *)(a3 + 12) = v16;
    *(_DWORD *)(a3 + 16) = v17;
    v18 = a2[9];
    v19 = a2[10];
    v20 = a2[11];
    *(_DWORD *)(a3 + 20) = a2[8];
    v21 = 0;
    *(_DWORD *)(a3 + 24) = v18;
    *(_DWORD *)(a3 + 28) = v19;
    *(_DWORD *)(a3 + 32) = v20;
    v22 = a2[5];
    v23 = 40 * *(unsigned __int8 *)(v4 + 35072) + 0x2000;
    v24 = a2[6];
    v25 = a2[7];
    *(_DWORD *)(v4 + v23) = a2[4];
    v26 = (_DWORD *)(v4 + v23);
    v26[1] = v22;
    v26[2] = v24;
    v26[3] = v25;
    v27 = a2[11];
    v28 = a2[9];
    v29 = a2[10];
    v26[4] = a2[8];
    v26[5] = v28;
    v26[6] = v29;
    v26[7] = v27;
    v30 = a2[13];
    v31 = a2[14];
    v32 = a2[15];
    v33 = (_DWORD *)(v4 + 32 * (*(unsigned __int8 *)(v4 + 35072) + 576));
    *v33 = a2[12];
    v33[1] = v30;
    v33[2] = v31;
    v33[3] = v32;
    v34 = a2[18];
    v35 = a2[19];
    v36 = a2[16];
    v33[5] = a2[17];
    v33[6] = v34;
    v33[7] = v35;
    v33[4] = v36;
    v37 = a2[20];
    v38 = a2[21];
    *(_BYTE *)(a3 + 43) = v37;
    *(_BYTE *)(a3 + 39) = v38;
    *(_BYTE *)(a3 + 42) = BYTE1(v37);
    *(_BYTE *)(a3 + 41) = BYTE2(v37);
    *(_BYTE *)(a3 + 40) = HIBYTE(v37);
    *(_BYTE *)(a3 + 37) = BYTE2(v38);
    *(_BYTE *)(a3 + 38) = BYTE1(v38);
    *(_BYTE *)(a3 + 36) = HIBYTE(v38);
    v39 = *(unsigned __int8 *)(v4 + 35072);
    v40 = a2[20];
    *(_DWORD *)(v4 + 8 * (v39 + 512)) = 0;
    *(_DWORD *)(v4 + 8 * (v39 + 512) + 4) = v40;
    *(_BYTE *)(a3 + 3) = v39;
    *(_BYTE *)(v4 + 35072) = v39 + 1;
    v41 = BM_CRC16((unsigned __int8 *)(a3 + 2), 42);
    *(_BYTE *)(a3 + 45) = v41;
    *(_BYTE *)(a3 + 44) = HIBYTE(v41);
    *a4 = 46;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "id_map is null", "work_2_packet_rvn");
    V_UNLOCK();
    v21 = 3;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      171,
      "work_2_packet_rvn",
      17,
      906,
      0x14u,
      v43);
  }
  return v21;
}
