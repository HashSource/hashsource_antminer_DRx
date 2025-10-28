int __fastcall chip_temp_ks5_2382(int a1, int a2)
{
  int v2; // r4
  void (__fastcall *v4)(int, int *); // r3
  int v6; // r9
  _WORD *v7; // r7
  _WORD *v8; // r5
  char *v9; // r1
  int v10; // r9
  _DWORD *v11; // r3
  int v12; // r3
  unsigned int v13; // r2
  bool v14; // cc
  float v15; // s14
  int v17; // [sp+34h] [bp-8h] BYREF
  int v18; // [sp+38h] [bp-4h] BYREF
  int v19; // [sp+3Ch] [bp+0h]
  int v20; // [sp+40h] [bp+4h]
  int v21; // [sp+44h] [bp+8h]
  _DWORD v22[7]; // [sp+48h] [bp+Ch] BYREF
  int v23; // [sp+64h] [bp+28h]
  unsigned __int16 v24; // [sp+68h] [bp+2Ch] BYREF
  char v25; // [sp+6Ah] [bp+2Eh]
  char v26; // [sp+6Bh] [bp+2Fh]

  v2 = 0;
  v20 = 0;
  v18 = 285212672;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 276);
  LOBYTE(v20) = 1;
  HIWORD(v20) = 192;
  v21 = 0;
  v17 = 0;
  v19 = 0;
  v4(a1, &v18);
  usleep(0x2710u);
  v20 = 12582913;
  v21 = 0;
  v18 = 285343744;
  v19 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 276))(a1, &v18);
  usleep(0x2710u);
  v6 = *(_DWORD *)(a1 + 352);
  v19 = 0;
  v20 = 12845057;
  v21 = 0;
  v18 = 0;
  v7 = calloc(12 * v6, 1u);
  (*(void (__fastcall **)(int, int *, int, _WORD *, int *))(a1 + 296))(a1, &v18, v6, v7, &v17);
  if ( v17 > 0 )
  {
    v8 = v7;
    do
    {
      while ( 1 )
      {
        ++v2;
        if ( v8[3] == 196 )
          break;
        v8 += 6;
        if ( v17 <= v2 )
          goto LABEL_7;
      }
      V_LOCK();
      LOWORD(v9) = 27372;
      HIWORD(v9) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
      v8 += 6;
      V_INT((int)v22, v9, *(int *)(a1 + 256));
      LOWORD(v10) = -22404;
      HIWORD(v10) = (unsigned int)"type %04x/%04x chip %d reg %d addr %02x" >> 16;
      logfmt_raw(
        (char *)&v24,
        0x1000u,
        0,
        v23,
        v22[0],
        v22[1],
        v22[2],
        v22[3],
        v22[4],
        v22[5],
        v22[6],
        v23,
        v10,
        *((unsigned __int8 *)v8 - 8),
        (unsigned __int16)*(v8 - 3),
        *((_DWORD *)v8 - 3));
      V_UNLOCK();
      LOWORD(v11) = 20532;
      HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
      zlog(
        *v11,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        171,
        "chip_temp_ks5_2382",
        18,
        1052,
        20,
        &v24);
      v12 = *((_DWORD *)v8 - 3);
      v13 = *((unsigned __int8 *)v8 - 8);
      v26 = v12;
      HIBYTE(v24) = BYTE2(v12);
      LOBYTE(v24) = HIBYTE(v12);
      v25 = BYTE1(v12);
      v14 = v17 <= v2;
      v15 = ((double)v24 - 0.5) * 662.88 * 0.000244140625 - 287.48;
      *(float *)(a2 + 4 * (v13 >> 1)) = v15;
    }
    while ( !v14 );
  }
LABEL_7:
  free(v7);
  return 0;
}
