int __fastcall chip_temp_ks5_2382(int a1, int a2)
{
  int v2; // r4
  void (__fastcall *v4)(int, int *); // r3
  int v6; // r9
  _WORD *v7; // r7
  _WORD *v8; // r5
  int v9; // r3
  unsigned int v10; // r2
  bool v11; // cc
  float v12; // s14
  int v14; // [sp+34h] [bp-8h] BYREF
  int v15; // [sp+38h] [bp-4h] BYREF
  int v16; // [sp+3Ch] [bp+0h]
  int v17; // [sp+40h] [bp+4h]
  int v18; // [sp+44h] [bp+8h]
  _DWORD v19[7]; // [sp+48h] [bp+Ch] BYREF
  int v20; // [sp+64h] [bp+28h]
  unsigned __int16 v21; // [sp+68h] [bp+2Ch] BYREF
  char v22; // [sp+6Ah] [bp+2Eh]
  char v23; // [sp+6Bh] [bp+2Fh]

  v2 = 0;
  v17 = 0;
  v15 = 285212672;
  v4 = *(void (__fastcall **)(int, int *))(a1 + 280);
  LOBYTE(v17) = 1;
  HIWORD(v17) = 192;
  v18 = 0;
  v14 = 0;
  v16 = 0;
  v4(a1, &v15);
  usleep(0x2710u);
  v17 = 12582913;
  v18 = 0;
  v15 = 285343744;
  v16 = 0;
  (*(void (__fastcall **)(int, int *))(a1 + 280))(a1, &v15);
  usleep(0x2710u);
  v6 = *(_DWORD *)(a1 + 356);
  v16 = 0;
  v17 = 12845057;
  v18 = 0;
  v15 = 0;
  v7 = calloc(12 * v6, 1u);
  (*(void (__fastcall **)(int, int *, int, _WORD *, int *))(a1 + 300))(a1, &v15, v6, v7, &v14);
  if ( v14 > 0 )
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
        if ( v14 <= v2 )
          goto LABEL_7;
      }
      V_LOCK();
      v8 += 6;
      V_INT((int)v19, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        (char *)&v21,
        0x1000u,
        0,
        v20,
        v19[0],
        v19[1],
        v19[2],
        v19[3],
        v19[4],
        v19[5],
        v19[6],
        v20,
        "[MISC CTRL] asic %02x, reg %02x state %08x",
        *((unsigned __int8 *)v8 - 8),
        (unsigned __int16)*(v8 - 3),
        *((_DWORD *)v8 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ks5_2382/backend_ks5_2382.c",
        171,
        "chip_temp_ks5_2382",
        18,
        1052,
        20,
        &v21);
      v9 = *((_DWORD *)v8 - 3);
      v10 = *((unsigned __int8 *)v8 - 8);
      v23 = v9;
      HIBYTE(v21) = BYTE2(v9);
      LOBYTE(v21) = HIBYTE(v9);
      v22 = BYTE1(v9);
      v11 = v14 <= v2;
      v12 = ((double)v21 - 0.5) * 662.88 * 0.000244140625 - 287.48;
      *(float *)(a2 + 4 * (v10 >> 1)) = v12;
    }
    while ( !v11 );
  }
LABEL_7:
  free(v7);
  return 0;
}
