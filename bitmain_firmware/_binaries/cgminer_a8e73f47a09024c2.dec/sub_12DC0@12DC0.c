unsigned int __fastcall sub_12DC0(int a1, int a2)
{
  int v4; // r3
  int v5; // r5
  void *v6; // r0
  void **v7; // r5
  void *v8; // r0
  int v9; // r3
  unsigned int v10; // r2
  unsigned int result; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r3
  int v15; // r1
  unsigned int v16; // r1
  _DWORD *v17; // r2
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r3
  size_t v22; // r4
  _DWORD *v23; // r0
  _DWORD *v24; // r6
  int v25; // r3
  int v26; // r3
  int v27; // r11
  _DWORD *v28; // r4
  _DWORD *v29; // r8
  _DWORD *v30; // r3
  int v31; // r5
  char *v32; // r7
  unsigned int v33; // r2
  int v34; // r3
  _DWORD *v35; // r3
  int v36; // r2
  int v37; // r3
  unsigned int v38; // [sp+4h] [bp-8h]

  ++*(_DWORD *)(a1 + 360);
  *(_DWORD *)(a2 + 412) = 0;
  *(_DWORD *)(a2 + 424) = a2 + 400;
  *(_DWORD *)(a2 + 428) = 4;
  v4 = *(_DWORD *)(a1 + 352);
  if ( v4 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 404) + 16) + 8) = a2;
    *(_DWORD *)(a2 + 408) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 16)
                          - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 20);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 16) = a2 + 404;
  }
  else
  {
    *(_DWORD *)(a1 + 352) = a2;
    *(_DWORD *)(a2 + 408) = 0;
    v5 = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(v5 + 404) = malloc(0x2Cu);
    v6 = *(void **)(*(_DWORD *)(a1 + 352) + 404);
    if ( !v6 )
      exit(-1);
    memset(v6, 0, 0x2Cu);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 16) = *(_DWORD *)(a1 + 352) + 404;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 20) = 404;
    v7 = *(void ***)(*(_DWORD *)(a1 + 352) + 404);
    *v7 = malloc(0x180u);
    v8 = **(void ***)(*(_DWORD *)(a1 + 352) + 404);
    if ( !v8 )
      exit(-1);
    memset(v8, 0, 0x180u);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 40) = -1609490463;
  }
  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 12);
  *(_DWORD *)(a2 + 404) = *(_DWORD *)(*(_DWORD *)(a1 + 352) + 404);
  v9 = (*(unsigned __int8 *)(a2 + 400)
      + 17973517
      + (*(unsigned __int8 *)(a2 + 403) << 24)
      + (*(unsigned __int8 *)(a2 + 402) << 16)
      + (*(unsigned __int8 *)(a2 + 401) << 8))
     ^ 0x7F76D;
  v10 = (-1622558010 - v9) ^ (v9 << 8);
  result = (-17973517 - v9 - v10) ^ (v10 >> 13);
  v12 = (v9 - v10 - result) ^ (result >> 12);
  v13 = (v10 - result - v12) ^ (v12 << 16);
  v14 = (result - v12 - v13) ^ (v13 >> 5);
  v15 = (v12 - v13 - v14) ^ (v14 >> 3);
  v16 = (v14 - v15 - ((v13 - v14 - v15) ^ (v15 << 10))) ^ (((v13 - v14 - v15) ^ (v15 << 10)) >> 15);
  *(_DWORD *)(a2 + 432) = v16;
  v17 = *(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
  v18 = 12 * (v16 & (v17[1] - 1));
  ++*(_DWORD *)(*v17 + v18 + 4);
  *(_DWORD *)(a2 + 420) = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v18);
  *(_DWORD *)(a2 + 416) = 0;
  v19 = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v18);
  if ( v19 )
    *(_DWORD *)(v19 + 12) = a2 + 404;
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v18) = a2 + 404;
  v20 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v18;
  if ( *(_DWORD *)(v20 + 4) >= (unsigned int)(10 * (*(_DWORD *)(v20 + 8) + 1)) )
  {
    v21 = *(_DWORD *)(a2 + 404);
    if ( *(_DWORD *)(v21 + 36) != 1 )
    {
      v22 = 24 * *(_DWORD *)(v21 + 4);
      v23 = malloc(v22);
      v24 = v23;
      if ( !v23 )
        exit(-1);
      memset(v23, 0, v22);
      v25 = *(_DWORD *)(a2 + 404);
      *(_DWORD *)(v25 + 24) = (((2 * *(_DWORD *)(v25 + 4) - 1) & *(_DWORD *)(v25 + 12)) != 0)
                            + (*(_DWORD *)(v25 + 12) >> (*(_BYTE *)(v25 + 8) + 1));
      *(_DWORD *)(*(_DWORD *)(a2 + 404) + 28) = 0;
      v26 = *(_DWORD *)(a2 + 404);
      if ( *(_DWORD *)(v26 + 4) )
      {
        v27 = 0;
        v38 = 0;
        do
        {
          v28 = *(_DWORD **)(*(_DWORD *)v26 + v27);
          if ( v28 )
          {
            do
            {
              v29 = (_DWORD *)v28[4];
              v30 = *(_DWORD **)(a2 + 404);
              v31 = 3 * ((2 * v30[1] - 1) & v28[7]);
              v32 = (char *)&v24[3 * ((2 * v30[1] - 1) & v28[7])];
              v33 = *((_DWORD *)v32 + 1) + 1;
              *((_DWORD *)v32 + 1) = v33;
              if ( v33 > v30[6] )
              {
                ++v30[7];
                *((_DWORD *)v32 + 2) = sub_5E818(*((_DWORD *)v32 + 1), *(_DWORD *)(*(_DWORD *)(a2 + 404) + 24));
              }
              v28[3] = 0;
              v28[4] = v24[v31];
              v34 = v24[v31];
              if ( v34 )
                *(_DWORD *)(v34 + 12) = v28;
              v24[v31] = v28;
              v28 = v29;
            }
            while ( v29 );
          }
          ++v38;
          v26 = *(_DWORD *)(a2 + 404);
          v27 += 12;
        }
        while ( *(_DWORD *)(v26 + 4) > v38 );
      }
      free(*(void **)v26);
      *(_DWORD *)(*(_DWORD *)(a2 + 404) + 4) *= 2;
      ++*(_DWORD *)(*(_DWORD *)(a2 + 404) + 8);
      **(_DWORD **)(a2 + 404) = v24;
      v35 = *(_DWORD **)(a2 + 404);
      if ( v35[7] <= v35[3] >> 1 )
        v36 = 0;
      else
        v36 = v35[8] + 1;
      v35[8] = v36;
      v37 = *(_DWORD *)(a2 + 404);
      if ( *(_DWORD *)(v37 + 32) > 1u )
        *(_DWORD *)(v37 + 36) = 1;
    }
  }
  return result;
}
