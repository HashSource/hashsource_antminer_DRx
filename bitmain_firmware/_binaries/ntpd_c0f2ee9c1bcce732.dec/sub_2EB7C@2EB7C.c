_DWORD *__fastcall sub_2EB7C(_DWORD *result)
{
  double v1; // d19
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r12
  int v5; // r6
  int v6; // r1
  _DWORD *v7; // t0
  int i; // r3
  char v9; // r1
  char *v10; // r2
  int v11; // r12
  unsigned int v12; // r0
  unsigned int v13; // r4
  unsigned int v14; // r1
  unsigned int v15; // lr
  int v16; // r12
  int v17; // r8
  int v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int *v22; // r4
  int v23; // r2
  unsigned int v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r1
  int v27; // r2
  unsigned int v28; // r3
  int v29; // r6
  unsigned int v30; // r7
  int v31; // r0
  int v32; // r1
  int32x2_t v33; // d16
  double v34; // d16
  double v35; // d17
  bool v36; // nf
  bool v37; // nf
  int v38; // [sp+10h] [bp-8h]

  v2 = result + 23;
  v3 = result[2];
  v4 = result[22];
  v5 = *(unsigned __int8 *)(v3 + 101);
  if ( !*(_BYTE *)(v3 + 101) )
  {
    v7 = result + 19;
    result = (_DWORD *)result[19];
    v6 = v7[1];
    *(_DWORD *)(v3 + 44) = result;
    *(_DWORD *)(v3 + 48) = v6;
  }
  if ( v4 > 0 )
  {
    result = (_DWORD *)(v3 + v5);
    for ( i = 0; i != v4; ++i )
    {
      v9 = *((_BYTE *)v2 + i);
      v10 = (char *)result + i;
      v10[93] = v9;
    }
  }
  v11 = (unsigned __int8)(v5 + v4);
  *(_BYTE *)(v3 + 101) = v11;
  if ( v11 == 7 )
  {
    v12 = *(unsigned __int8 *)(v3 + 94);
    v13 = *(unsigned __int8 *)(v3 + 96);
    v14 = *(unsigned __int8 *)(v3 + 95);
    v15 = *(unsigned __int8 *)(v3 + 97);
    v16 = 10 * (*(_BYTE *)(v3 + 98) & 0xF)
        + 100 * (*(unsigned __int8 *)(v3 + 98) >> 4)
        + (*(unsigned __int8 *)(v3 + 99) >> 4);
    v17 = 10 * (v12 >> 4) + 100 * (*(_BYTE *)(v3 + 93) & 0xF);
    *(_DWORD *)(v3 + 84) = v16;
    *(_DWORD *)(v3 + 88) = 1000 * v16;
    v18 = (v13 & 0xF) + 10 * ((v13 >> 4) & 7);
    v19 = (v15 & 0xF) + 10 * ((v15 >> 4) & 7);
    *(_DWORD *)(v3 + 76) = v18;
    *(_DWORD *)(v3 + 80) = v19;
    v20 = v17 + (v12 & 0xF);
    v21 = (v14 & 0xF) + 10 * ((v14 >> 4) & 3);
    *(_DWORD *)(v3 + 68) = v20;
    *(_DWORD *)(v3 + 72) = v21;
    v22 = (int *)(v3 + 52);
    if ( sub_4EFC8(v20, v21, v18, v19, 0, *(_DWORD *)(v3 + 44), v3 + 60, v3 + 52) )
    {
      v23 = *(_DWORD *)(v3 + 48);
      v24 = dword_7C19C[(unsigned __int8)BYTE1(*(_DWORD *)(v3 + 88))]
          + dword_7C15C[HIWORD(*(_DWORD *)(v3 + 88)) & 0xF]
          + dword_7C59C[(unsigned __int8)*(_DWORD *)(v3 + 88)];
      *(_DWORD *)(v3 + 56) = v24;
      v38 = *v22;
      if ( v23 )
      {
        v25 = -v23;
        v26 = HIWORD(v25);
        v27 = (unsigned __int16)v25 + (unsigned __int16)v24;
        v28 = v26 + HIWORD(v24);
        if ( (v27 & 0x10000) != 0 )
          ++v28;
        v29 = ~*(_DWORD *)(v3 + 44) + v38;
        v30 = (unsigned __int16)v27 | (v28 << 16);
        if ( (v28 & 0x10000) != 0 )
          ++v29;
      }
      else
      {
        v30 = *(_DWORD *)(v3 + 56);
        v29 = v38 - *(_DWORD *)(v3 + 44);
      }
      v31 = *(_DWORD *)(v3 + 44);
      v32 = *(_DWORD *)(v3 + 48);
      ++*(_DWORD *)(v3 + 64);
      *v22 = v31;
      *(_DWORD *)(v3 + 56) = v32;
      result = (_DWORD *)sub_276A0(*(_DWORD *)v3);
      v33.n64_u32[0] = (v29 << 20) | (v30 >> 12);
      v33.n64_u32[1] = v33.n64_u32[0];
      v34 = vcvt_n_f64_s32(v33, 0x14u);
      v35 = *(double *)(v3 + 104);
      if ( v34 < 0.0 )
        v34 = -v34;
      if ( v35 == 0.0 )
      {
        v36 = v34 < 0.1;
        if ( v34 >= 0.1 )
          *(_QWORD *)(v3 + 104) = 0x3F847AE147AE147CLL;
        else
          v34 = v34 * v34;
        if ( v36 )
          *(double *)(v3 + 104) = v34;
      }
      else
      {
        v37 = v34 < 0.1;
        if ( v34 >= 0.1 )
          v34 = 0.0005;
        else
          v1 = v34 * 0.05;
        if ( v37 )
          v34 = v1 * v34;
        *(double *)(v3 + 104) = v34 + v35 * 0.95;
      }
    }
    else
    {
      return (_DWORD *)sub_4FE78(3, "Datum_PTS: Bad clocktime");
    }
  }
  return result;
}
