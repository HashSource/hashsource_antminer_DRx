int __fastcall work_2_packet_rvn(int a1, int *a2, int a3, _DWORD *a4)
{
  int v4; // r5
  int v9; // r3
  int v10; // r9
  int v11; // r0
  int v12; // lr
  int v13; // r12
  _DWORD *v14; // r2
  int v15; // r0
  int v16; // r0
  int v17; // lr
  int v18; // r12
  int v19; // r0
  int v20; // lr
  int v21; // r12
  int v22; // r9
  int v23; // r12
  int v24; // r2
  int v25; // r10
  int v26; // r1
  _DWORD *v27; // r2
  int v28; // r1
  int v29; // r12
  int v30; // r10
  int v31; // r10
  int v32; // lr
  int v33; // r12
  _DWORD *v34; // r3
  int v35; // lr
  int v36; // r12
  int v37; // r11
  int v38; // r2
  int v39; // r3
  int v40; // r3
  int v41; // r6
  __int16 v42; // r0
  int v44; // r3
  _DWORD *v45; // r3
  int v46; // r1
  int v47; // r3
  _DWORD *v48; // r3
  int v49; // r1
  char v50[4100]; // [sp+10h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 840);
  if ( v4 )
  {
    *(_BYTE *)a3 = 85;
    *(_BYTE *)(a3 + 1) = -86;
    *(_BYTE *)(a3 + 2) = 48;
    LOWORD(v10) = 16320;
    v9 = *(unsigned __int8 *)(v4 + 35072);
    HIWORD(v10) = (unsigned int)&byte_1B3FC8 >> 16;
    v11 = *a2;
    v12 = a2[3];
    v13 = a2[1];
    v14 = (_DWORD *)(v4 + 8 * v9);
    v14[512] = a2[2];
    v14[513] = v12;
    *v14 = v11;
    v15 = *(unsigned __int8 *)(v10 + 8);
    v14[1] = v13;
    if ( *((unsigned __int8 *)a2 + 88) != v15 )
    {
      V_LOCK();
      LOWORD(v44) = 9376;
      HIWORD(v44) = (unsigned int)"%s chip: %02x, core: %02x load err" >> 16;
      logfmt_raw(v50, 0x1000u, 0, v44, *(unsigned __int8 *)(v10 + 8), *((unsigned __int8 *)a2 + 88));
      V_UNLOCK();
      LOWORD(v45) = 20532;
      HIWORD(v45) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v46) = 9076;
      HIWORD(v46) = (unsigned int)"" >> 16;
      zlog(*v45, v46, 171, "work_2_packet_rvn", 17, 1165, 40, v50);
      set_ticketmask_rvn(a1, *(_DWORD *)(a1 + 448));
      LOBYTE(v15) = *((_BYTE *)a2 + 88);
      v9 = *(unsigned __int8 *)(v4 + 35072);
      *(_BYTE *)(v10 + 8) = v15;
    }
    *(_BYTE *)(v4 + v9 + 34816) = v15;
    v16 = a2[5];
    v17 = a2[6];
    v18 = a2[7];
    *(_DWORD *)(a3 + 4) = a2[4];
    *(_DWORD *)(a3 + 8) = v16;
    *(_DWORD *)(a3 + 12) = v17;
    *(_DWORD *)(a3 + 16) = v18;
    v19 = a2[9];
    v20 = a2[10];
    v21 = a2[11];
    *(_DWORD *)(a3 + 20) = a2[8];
    v22 = 0;
    *(_DWORD *)(a3 + 24) = v19;
    *(_DWORD *)(a3 + 28) = v20;
    *(_DWORD *)(a3 + 32) = v21;
    v23 = a2[5];
    v24 = 40 * *(unsigned __int8 *)(v4 + 35072) + 0x2000;
    v25 = a2[6];
    v26 = a2[7];
    *(_DWORD *)(v4 + v24) = a2[4];
    v27 = (_DWORD *)(v4 + v24);
    v27[1] = v23;
    v27[2] = v25;
    v27[3] = v26;
    v28 = a2[11];
    v29 = a2[9];
    v30 = a2[10];
    v27[4] = a2[8];
    v27[5] = v29;
    v27[6] = v30;
    v27[7] = v28;
    v31 = a2[13];
    v32 = a2[14];
    v33 = a2[15];
    v34 = (_DWORD *)(v4 + 32 * (*(unsigned __int8 *)(v4 + 35072) + 576));
    *v34 = a2[12];
    v34[1] = v31;
    v34[2] = v32;
    v34[3] = v33;
    v35 = a2[18];
    v36 = a2[19];
    v37 = a2[16];
    v34[5] = a2[17];
    v34[6] = v35;
    v34[7] = v36;
    v34[4] = v37;
    v38 = a2[20];
    v39 = a2[21];
    *(_BYTE *)(a3 + 43) = v38;
    *(_BYTE *)(a3 + 39) = v39;
    *(_BYTE *)(a3 + 42) = BYTE1(v38);
    *(_BYTE *)(a3 + 41) = BYTE2(v38);
    *(_BYTE *)(a3 + 40) = HIBYTE(v38);
    *(_BYTE *)(a3 + 37) = BYTE2(v39);
    *(_BYTE *)(a3 + 38) = BYTE1(v39);
    *(_BYTE *)(a3 + 36) = HIBYTE(v39);
    v40 = *(unsigned __int8 *)(v4 + 35072);
    v41 = a2[20];
    *(_DWORD *)(v4 + 8 * (v40 + 512)) = 0;
    *(_DWORD *)(v4 + 8 * (v40 + 512) + 4) = v41;
    *(_BYTE *)(a3 + 3) = v40;
    *(_BYTE *)(v4 + 35072) = v40 + 1;
    v42 = BM_CRC16((unsigned __int8 *)(a3 + 2), 42);
    *(_BYTE *)(a3 + 45) = v42;
    *(_BYTE *)(a3 + 44) = HIBYTE(v42);
    *a4 = 46;
  }
  else
  {
    V_LOCK();
    LOWORD(v47) = -2284;
    HIWORD(v47) = (unsigned int)"read_sensor_temp_local_on_ctrlboard_KDA_2110" >> 16;
    logfmt_raw(v50, 0x1000u, 0, v47, "work_2_packet_rvn");
    V_UNLOCK();
    LOWORD(v48) = 20532;
    HIWORD(v48) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v49) = 9076;
    HIWORD(v49) = (unsigned int)"" >> 16;
    v22 = 3;
    zlog(*v48, v49, 171, "work_2_packet_rvn", 17, 1152, 0x14u, v50);
  }
  return v22;
}
