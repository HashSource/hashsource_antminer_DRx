int __fastcall work_2_packet_eth(int a1, int *a2, int a3, _DWORD *a4)
{
  int v6; // lr
  int v8; // r6
  int v9; // r9
  int v10; // r8
  int v11; // r11
  _DWORD *v12; // r7
  int *v13; // r0
  int v14; // r9
  int v15; // r7
  int v16; // r6
  int v17; // r7
  int v18; // r6
  int v19; // r9
  int *v20; // r12
  int v21; // r9
  int v22; // r7
  int v23; // r6
  int v24; // r1
  int v25; // r7
  int v26; // r10
  int v27; // r9
  int v28; // r8
  int *v29; // r12
  int v30; // r10
  int v31; // r9
  int v32; // r8
  int v33; // r7
  int v34; // r12
  int v35; // r12
  int v36; // r8
  int v37; // r2
  unsigned int v38; // r0
  unsigned int v39; // r1

  v6 = *(_DWORD *)(a1 + 840);
  *(_BYTE *)a3 = 85;
  *(_BYTE *)(a3 + 1) = -86;
  *(_BYTE *)(a3 + 2) = 32;
  if ( *(_DWORD *)(a1 + 508) == 1 )
    *(_BYTE *)(a3 + 2) = 48;
  v8 = *(unsigned __int8 *)(v6 + 35072);
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = (_DWORD *)(v6 + 8 * v8);
  v12[513] = a2[3];
  v12[512] = v11;
  *v12 = v9;
  v12[1] = v10;
  *(_BYTE *)(a3 + 3) = v8;
  *(_BYTE *)(v6 + v8 + 34816) = *((_BYTE *)a2 + 88);
  v13 = a2 + 4;
  v14 = a2[5];
  v15 = a2[6];
  v16 = a2[7];
  *(_DWORD *)(a3 + 4) = a2[4];
  *(_DWORD *)(a3 + 8) = v14;
  *(_DWORD *)(a3 + 12) = v15;
  *(_DWORD *)(a3 + 16) = v16;
  v17 = a2[10];
  v18 = a2[11];
  v19 = a2[9];
  *(_DWORD *)(a3 + 20) = a2[8];
  *(_DWORD *)(a3 + 24) = v19;
  *(_DWORD *)(a3 + 28) = v17;
  *(_DWORD *)(a3 + 32) = v18;
  v20 = (int *)(v6 + 40 * *(unsigned __int8 *)(v6 + 35072) + 0x2000);
  do
  {
    v21 = *v13;
    v13 += 4;
    v22 = *(v13 - 3);
    v20 += 4;
    v23 = *(v13 - 2);
    v24 = *(v13 - 1);
    *(v20 - 4) = v21;
    *(v20 - 3) = v22;
    *(v20 - 2) = v23;
    *(v20 - 1) = v24;
  }
  while ( v13 != a2 + 12 );
  v25 = v13[1];
  *v20 = *v13;
  v20[1] = v25;
  v26 = v13[1];
  v27 = v13[2];
  v28 = v13[3];
  v29 = (int *)(v6 + 32 * (*(unsigned __int8 *)(v6 + 35072) + 576));
  *v29 = *v13;
  v29[1] = v26;
  v29[2] = v27;
  v29[3] = v28;
  v30 = v13[5];
  v31 = v13[6];
  v32 = v13[7];
  v29[4] = v13[4];
  v29[5] = v30;
  v29[6] = v31;
  v29[7] = v32;
  v33 = a2[20];
  v34 = a2[21];
  *(_BYTE *)(a3 + 43) = v33;
  *(_BYTE *)(a3 + 39) = v34;
  *(_BYTE *)(a3 + 42) = BYTE1(v33);
  *(_BYTE *)(a3 + 40) = HIBYTE(v33);
  *(_BYTE *)(a3 + 41) = BYTE2(v33);
  *(_BYTE *)(a3 + 38) = BYTE1(v34);
  *(_BYTE *)(a3 + 37) = BYTE2(v34);
  *(_BYTE *)(a3 + 36) = HIBYTE(v34);
  v35 = *(unsigned __int8 *)(v6 + 35072);
  v36 = a2[21];
  v37 = v35 + 512;
  *(_DWORD *)(v6 + 8 * v37) = 0;
  *(_DWORD *)(v6 + 8 * v37 + 4) = v36;
  *(_BYTE *)(v6 + 35072) = v35 + 1;
  v38 = BM_CRC16((unsigned __int8 *)(a3 + 2), 42);
  v39 = v38 >> 8;
  *(_BYTE *)(a3 + 45) = v38;
  *(_BYTE *)(a3 + 44) = v39;
  *a4 = 46;
  return 0;
}
