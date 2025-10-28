int __fastcall work_2_packet_kas(int a1, int a2, _BYTE *a3, _DWORD *a4)
{
  int v6; // r4
  int v7; // r8
  int v8; // r3
  int v9; // r2
  int v10; // r0
  int *v11; // r12
  _BYTE *v12; // lr
  double v13; // d7
  _DWORD *v14; // r1
  int *v15; // r3
  int v16; // t1
  int v17; // r10
  int v18; // r9
  int v19; // r7
  int v20; // r7
  int v21; // r10
  int v22; // r9
  int v23; // r0
  int v24; // r7
  _DWORD *v25; // r2
  int v26; // r7
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int *v30; // r3
  int v31; // r4
  int v32; // lr
  int v33; // r12
  int v34; // r1
  int v35; // r2
  char v36; // r3
  __int16 v37; // r0
  int result; // r0
  int v39; // r3
  _DWORD *v40; // r3
  int v41; // r1
  int *v42; // [sp+10h] [bp-100Ch]
  int v43; // [sp+10h] [bp-100Ch]
  char v45[4100]; // [sp+18h] [bp-1004h] BYREF

  if ( !dword_1A3E18[0] )
  {
    v43 = a2;
    dword_1A3E18[0] = (int)malloc(0x450u);
    v6 = *(_DWORD *)(a1 + 840);
    a2 = v43;
    if ( v6 )
      goto LABEL_3;
LABEL_12:
    V_LOCK();
    LOWORD(v39) = -2284;
    HIWORD(v39) = (unsigned int)"read_sensor_temp_local_on_ctrlboard_KDA_2110" >> 16;
    logfmt_raw(v45, 0x1000u, v6, v39, "work_2_packet_kas");
    V_UNLOCK();
    LOWORD(v40) = 20532;
    HIWORD(v40) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v41) = -2644;
    HIWORD(v41) = (unsigned int)"A_2110" >> 16;
    zlog(*v40, v41, 171, "work_2_packet_kas", 17, 205, 0x14u, v45);
    return 3;
  }
  v6 = *(_DWORD *)(a1 + 840);
  if ( !v6 )
    goto LABEL_12;
LABEL_3:
  v7 = v6 + 12288;
  *a3 = 85;
  a3[1] = -86;
  v8 = a2;
  a3[2] = 48;
  v9 = a2;
  v10 = *(unsigned __int8 *)(v6 + 12416);
  v42 = (int *)(a2 + 16);
  *(_DWORD *)(v6 + 8 * v10) = *(_DWORD *)a2;
  v11 = (int *)(a2 + 16);
  *(_DWORD *)(v6 + 8 * v10 + 4) = *(_DWORD *)(a2 + 4);
  v12 = a3 + 4;
  v13 = *(double *)(a2 + 192);
  v14 = (_DWORD *)(v6 + 32 * (v10 + 260));
  *(_BYTE *)(v6 + v10 + 0x2000) = (unsigned int)v13;
  v16 = *(_DWORD *)(v8 + 64);
  v15 = (int *)(v8 + 64);
  v17 = v15[1];
  v18 = v15[2];
  v19 = v15[3];
  *v14 = v16;
  v14[1] = v17;
  v14[2] = v18;
  v14[3] = v19;
  v20 = v15[7];
  v21 = v15[5];
  v22 = v15[6];
  v14[4] = v15[4];
  v14[5] = v21;
  v14[6] = v22;
  v14[7] = v20;
  v23 = *(_DWORD *)(v9 + 8);
  v24 = *(_DWORD *)(v9 + 12);
  v25 = (_DWORD *)(v6 + 8 * (*(unsigned __int8 *)(v6 + 12416) + 128));
  *v25 = v23;
  v25[1] = v24;
  do
  {
    v26 = *v11;
    v11 += 4;
    v27 = *(v11 - 3);
    v12 += 16;
    v28 = *(v11 - 2);
    v29 = *(v11 - 1);
    *((_DWORD *)v12 - 4) = v26;
    *((_DWORD *)v12 - 3) = v27;
    *((_DWORD *)v12 - 2) = v28;
    *((_DWORD *)v12 - 1) = v29;
  }
  while ( v11 != v15 );
  v30 = v42;
  v31 = v6 + 48 * *(unsigned __int8 *)(v6 + 12416) + 2048;
  do
  {
    v32 = *v30;
    v30 += 4;
    v33 = *(v30 - 3);
    v31 += 16;
    v34 = *(v30 - 2);
    v35 = *(v30 - 1);
    *(_DWORD *)(v31 - 16) = v32;
    *(_DWORD *)(v31 - 12) = v33;
    *(_DWORD *)(v31 - 8) = v34;
    *(_DWORD *)(v31 - 4) = v35;
  }
  while ( v30 != v42 + 12 );
  v36 = *(_BYTE *)(v7 + 128);
  a3[3] = v36;
  *(_BYTE *)(v7 + 128) = (v36 + 1) & 0x7F;
  v37 = BM_CRC16(a3 + 2, 50);
  a3[53] = v37;
  a3[52] = HIBYTE(v37);
  result = *(unsigned __int8 *)(a1 + 264);
  *a4 = 54;
  if ( result )
  {
    result = *(unsigned __int8 *)(a1 + 265);
    if ( *(_BYTE *)(a1 + 265) )
    {
      sub_9131C((int *)a1, 36);
      set_misc_control_kas(a1);
      result = 0;
      *(_BYTE *)(a1 + 264) = 0;
    }
  }
  return result;
}
