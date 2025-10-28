void __fastcall sub_1ABA4(int a1, int a2)
{
  int v4; // r5
  int v5; // r1
  __int64 v6; // kr00_8
  int v7; // r5
  unsigned int v8; // r2
  unsigned int v9; // r3
  int v10; // r5
  unsigned int v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // r5
  unsigned int v14; // r3
  int v15; // r5
  int v16; // r3
  int v17; // r2
  int v18; // r2
  int v19; // r0
  _DWORD *v20; // r2
  __int64 v21; // r2
  int v22; // r4
  _DWORD *v23; // r6
  int v24; // r7
  unsigned int v25; // r1
  unsigned int v26; // r3
  int v27; // r2
  unsigned int v28; // r4
  _DWORD *v29; // r5
  _DWORD *v30; // r11
  int v31; // r4
  char *v32; // r8
  unsigned int v33; // r0
  int v34; // r3
  _DWORD *v35; // r3
  unsigned int v36; // r2
  unsigned int v37; // r1
  bool v38; // cc
  int v39; // r2
  int v40; // r3
  int v41; // r6
  void *v42; // r0
  void **v43; // r6
  void *v44; // r0
  unsigned int i; // [sp+4h] [bp-8h]

  ++*(_DWORD *)(a1 + 360);
  *(_DWORD *)(a2 + 412) = 0;
  *(_DWORD *)(a2 + 424) = a2 + 400;
  *(_DWORD *)(a2 + 428) = 4;
  v4 = *(_DWORD *)(a1 + 352);
  if ( v4 )
  {
    v5 = a2 + 404;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 404) + 16) + 8) = a2;
    v6 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 16);
    *(_DWORD *)(a2 + 408) = v6 - HIDWORD(v6);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 16) = a2 + 404;
  }
  else
  {
    *(_DWORD *)(a1 + 352) = a2;
    *(_DWORD *)(a2 + 408) = 0;
    v41 = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(v41 + 404) = malloc(0x2Cu);
    v42 = *(void **)(*(_DWORD *)(a1 + 352) + 404);
    if ( !v42 )
      goto LABEL_33;
    memset(v42, 0, 0x2Cu);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 16) = *(_DWORD *)(a1 + 352) + 404;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 20) = 404;
    v43 = *(void ***)(*(_DWORD *)(a1 + 352) + 404);
    *v43 = malloc(0x180u);
    v44 = **(void ***)(*(_DWORD *)(a1 + 352) + 404);
    if ( !v44 )
      goto LABEL_33;
    memset(v44, 0, 0x180u);
    v5 = a2 + 404;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 40) = -1609490463;
  }
  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 12);
  v7 = (*(unsigned __int8 *)(a2 + 400)
      + 17973517
      + (*(unsigned __int8 *)(a2 + 403) << 24)
      + (*(unsigned __int8 *)(a2 + 402) << 16)
      + (*(unsigned __int8 *)(a2 + 401) << 8))
     ^ 0x7F76D;
  v8 = (-1622558010 - v7) ^ (v7 << 8);
  v9 = (-17973517 - v7 - v8) ^ (v8 >> 13);
  *(_DWORD *)(a2 + 404) = *(_DWORD *)(*(_DWORD *)(a1 + 352) + 404);
  v10 = (v7 - v8 - v9) ^ (v9 >> 12);
  v11 = (v8 - v9 - v10) ^ (v10 << 16);
  v12 = (v9 - v10 - v11) ^ (v11 >> 5);
  v13 = v10 - v11 - v12;
  v14 = (v12 - (v13 ^ (v12 >> 3)) - ((v11 - v12 - (v13 ^ (v12 >> 3))) ^ ((v13 ^ (v12 >> 3)) << 10)))
      ^ (((v11 - v12 - (v13 ^ (v12 >> 3))) ^ ((v13 ^ (v12 >> 3)) << 10)) >> 15);
  *(_DWORD *)(a2 + 432) = v14;
  v15 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
  v16 = 12 * (v14 & (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 404) + 4) - 1));
  ++*(_DWORD *)(v15 + v16 + 4);
  v17 = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v16);
  *(_DWORD *)(a2 + 416) = 0;
  *(_DWORD *)(a2 + 420) = v17;
  v18 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 404);
  v19 = *(_DWORD *)(v18 + v16);
  v20 = (_DWORD *)(v18 + v16);
  if ( v19 )
  {
    *(_DWORD *)(v19 + 12) = v5;
    v20 = (_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v16);
  }
  *v20 = v5;
  v21 = *(_QWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 404) + v16 + 4);
  if ( (unsigned int)v21 >= 10 * (HIDWORD(v21) + 1) )
  {
    v22 = *(_DWORD *)(a2 + 404);
    if ( *(_DWORD *)(v22 + 36) != 1 )
    {
      v23 = calloc(24 * *(_DWORD *)(v22 + 4), 1u);
      if ( v23 )
      {
        v24 = 0;
        v25 = *(_DWORD *)(v22 + 12);
        v26 = v25 >> (*(_QWORD *)(v22 + 8) + 1);
        if ( ((2 * *(_DWORD *)(v22 + 4) - 1) & v25) != 0 )
          ++v26;
        *(_DWORD *)(v22 + 24) = v26;
        *(_DWORD *)(*(_DWORD *)(a2 + 404) + 28) = 0;
        v27 = *(_DWORD *)(a2 + 404);
        v28 = *(_DWORD *)(v27 + 4);
        if ( v28 )
        {
          for ( i = 0; i < v28; ++i )
          {
            v29 = *(_DWORD **)(*(_DWORD *)v27 + v24);
            if ( v29 )
            {
              while ( 1 )
              {
                v30 = (_DWORD *)v29[4];
                v31 = 3 * ((2 * v28 - 1) & v29[7]);
                v32 = (char *)&v23[v31];
                v33 = *((_DWORD *)v32 + 1) + 1;
                *((_DWORD *)v32 + 1) = v33;
                if ( v33 > *(_DWORD *)(v27 + 24) )
                {
                  ++*(_DWORD *)(v27 + 28);
                  *((_DWORD *)v32 + 2) = sub_49878(*((_DWORD *)v32 + 1), *(_DWORD *)(*(_DWORD *)(a2 + 404) + 24));
                }
                v29[3] = 0;
                v29[4] = v23[v31];
                v34 = v23[v31];
                if ( v34 )
                  *(_DWORD *)(v34 + 12) = v29;
                v23[v31] = v29;
                v27 = *(_DWORD *)(a2 + 404);
                if ( !v30 )
                  break;
                v28 = *(_DWORD *)(v27 + 4);
                v29 = v30;
              }
              v28 = *(_DWORD *)(v27 + 4);
            }
            v24 += 12;
          }
        }
        free(*(void **)v27);
        *(_DWORD *)(*(_DWORD *)(a2 + 404) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(a2 + 404) + 8);
        **(_DWORD **)(a2 + 404) = v23;
        v35 = *(_DWORD **)(a2 + 404);
        v36 = v35[7];
        v37 = v35[3];
        v38 = v36 > v37 >> 1;
        if ( v36 <= v37 >> 1 )
          v39 = 0;
        else
          v39 = v35[8];
        if ( v38 )
          ++v39;
        v35[8] = v39;
        v40 = *(_DWORD *)(a2 + 404);
        if ( *(_DWORD *)(v40 + 32) > 1u )
          *(_DWORD *)(v40 + 36) = 1;
        return;
      }
LABEL_33:
      exit(-1);
    }
  }
}
