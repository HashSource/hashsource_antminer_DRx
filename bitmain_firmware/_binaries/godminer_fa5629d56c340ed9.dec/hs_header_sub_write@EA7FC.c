int __fastcall hs_header_sub_write(_DWORD *a1, int *a2)
{
  _DWORD *v2; // r3
  int v3; // lr
  int v4; // r6
  int v5; // r5
  int v6; // lr
  _DWORD *v7; // r6
  int v8; // r3
  int v9; // r4
  int v10; // lr
  int v11; // r12
  int v12; // r4
  int v13; // lr
  int v14; // r12
  _DWORD *v15; // r7
  int v16; // r3
  int v17; // r5
  int v18; // r4
  int v19; // lr
  int v20; // r5
  int v21; // r4
  int v22; // lr
  _DWORD *v23; // r6
  int v24; // r3
  int v25; // r4
  int v26; // lr
  int v27; // r2
  int v28; // r5
  int v29; // r4
  int v30; // lr
  _DWORD *v31; // r3
  int v32; // r2
  _DWORD *v33; // r3
  int v34; // r0
  int v35; // r2

  if ( !a2 )
    return 128;
  v2 = (_DWORD *)*a2;
  if ( !*a2 )
    return 128;
  v3 = a1[34];
  v4 = a1[35];
  v5 = a1[36];
  *v2 = a1[33];
  v2[1] = v3;
  v2[2] = v4;
  v2[3] = v5;
  v6 = a1[38];
  v2[4] = a1[37];
  v2[5] = v6;
  v7 = (_DWORD *)*a2;
  v8 = *a2 + 24;
  *a2 = v8;
  if ( v8 )
  {
    v9 = a1[40];
    v10 = a1[41];
    v11 = a1[42];
    v7[6] = a1[39];
    v7[7] = v9;
    v7[8] = v10;
    v7[9] = v11;
    v12 = a1[44];
    v13 = a1[45];
    v14 = a1[46];
    v7[10] = a1[43];
    v7[11] = v12;
    v7[12] = v13;
    v7[13] = v14;
    v15 = (_DWORD *)*a2;
    v16 = *a2 + 32;
    *a2 = v16;
    if ( v16 )
    {
      v17 = a1[48];
      v18 = a1[49];
      v19 = a1[50];
      v15[8] = a1[47];
      v15[9] = v17;
      v15[10] = v18;
      v15[11] = v19;
      v20 = a1[52];
      v21 = a1[53];
      v22 = a1[54];
      v15[12] = a1[51];
      v15[13] = v20;
      v15[14] = v21;
      v15[15] = v22;
      v23 = (_DWORD *)*a2;
      v24 = *a2 + 32;
      *a2 = v24;
      if ( v24 )
      {
        v25 = a1[56];
        v26 = a1[57];
        v27 = a1[58];
        v23[8] = a1[55];
        v23[9] = v25;
        v23[10] = v26;
        v23[11] = v27;
        v28 = a1[59];
        v29 = a1[60];
        v30 = a1[61];
        v23[15] = a1[62];
        v23[12] = v28;
        v23[13] = v29;
        v23[14] = v30;
        v31 = (_DWORD *)*a2;
        v32 = *a2 + 32;
        *a2 = v32;
        if ( v32 )
        {
          v31[8] = a1[63];
          v33 = (_DWORD *)*a2;
          v34 = a1[64];
          v35 = *a2 + 4;
          *a2 = v35;
          if ( v35 )
          {
            v33[1] = v34;
            *a2 += 4;
          }
        }
      }
    }
  }
  return 128;
}
