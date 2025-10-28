unsigned int __fastcall sub_160B4(int a1, int a2)
{
  int v4; // r5
  int v5; // r12
  int v6; // r3
  unsigned int v7; // r2
  unsigned int result; // r0
  int v9; // r1
  unsigned int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r1
  unsigned int v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r2
  int v17; // r1
  int v18; // r3
  int v19; // r3
  size_t v20; // r4
  _DWORD *v21; // r0
  _DWORD *v22; // r6
  int v23; // r3
  int v24; // r8
  int v25; // r3
  unsigned int v26; // r5
  _DWORD *v27; // r4
  _DWORD *v28; // r9
  int v29; // r5
  char *v30; // r7
  unsigned int v31; // r2
  int v32; // r3
  _DWORD *v33; // r3
  unsigned int v34; // r1
  unsigned int v35; // r2
  bool v36; // cc
  int v37; // r2
  int v38; // r3
  int v39; // r6
  void *v40; // r0
  void **v41; // r6
  void *v42; // r0
  unsigned int i; // [sp+4h] [bp-8h]

  ++*(_DWORD *)(a1 + 360);
  *(_DWORD *)(a2 + 352) = 0;
  *(_DWORD *)(a2 + 364) = a2 + 340;
  *(_DWORD *)(a2 + 368) = 4;
  v4 = *(_DWORD *)(a1 + 352);
  if ( v4 )
  {
    v5 = a2 + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 344) + 16) + 8) = a2;
    *(_DWORD *)(a2 + 348) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16)
                          - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = a2 + 344;
  }
  else
  {
    *(_DWORD *)(a1 + 352) = a2;
    *(_DWORD *)(a2 + 348) = 0;
    v39 = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(v39 + 344) = malloc(0x2Cu);
    v40 = *(void **)(*(_DWORD *)(a1 + 352) + 344);
    if ( !v40 )
      goto LABEL_31;
    memset(v40, 0, 0x2Cu);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 16) = *(_DWORD *)(a1 + 352) + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20) = 344;
    v41 = *(void ***)(*(_DWORD *)(a1 + 352) + 344);
    *v41 = malloc(0x180u);
    v42 = **(void ***)(*(_DWORD *)(a1 + 352) + 344);
    if ( !v42 )
      goto LABEL_31;
    memset(v42, 0, 0x180u);
    v5 = a2 + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 40) = -1609490463;
  }
  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 12);
  v6 = (*(unsigned __int8 *)(a2 + 340)
      + 17973517
      + (*(unsigned __int8 *)(a2 + 343) << 24)
      + (*(unsigned __int8 *)(a2 + 342) << 16)
      + (*(unsigned __int8 *)(a2 + 341) << 8))
     ^ 0x7F76D;
  v7 = (-1622558010 - v6) ^ (v6 << 8);
  result = (-17973517 - v6 - v7) ^ (v7 >> 13);
  *(_DWORD *)(a2 + 344) = *(_DWORD *)(*(_DWORD *)(a1 + 352) + 344);
  v9 = (v6 - v7 - result) ^ (result >> 12);
  v10 = (v7 - result - v9) ^ (v9 << 16);
  v11 = (result - v9 - v10) ^ (v10 >> 5);
  v12 = v9 - v10 - v11;
  v13 = (v11 - (v12 ^ (v11 >> 3)) - ((v10 - v11 - (v12 ^ (v11 >> 3))) ^ ((v12 ^ (v11 >> 3)) << 10)))
      ^ (((v10 - v11 - (v12 ^ (v11 >> 3))) ^ ((v12 ^ (v11 >> 3)) << 10)) >> 15);
  *(_DWORD *)(a2 + 372) = v13;
  v14 = 12 * (v13 & (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 4) - 1));
  v15 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v14;
  ++*(_DWORD *)(v15 + 4);
  v16 = *(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v14);
  *(_DWORD *)(a2 + 356) = 0;
  *(_DWORD *)(a2 + 360) = v16;
  v17 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v14;
  if ( *(_DWORD *)v17 )
  {
    *(_DWORD *)(*(_DWORD *)v17 + 12) = v5;
    v17 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v14;
  }
  *(_DWORD *)v17 = v5;
  v18 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344) + v14;
  if ( *(_DWORD *)(v18 + 4) >= (unsigned int)(10 * (*(_DWORD *)(v18 + 8) + 1)) )
  {
    v19 = *(_DWORD *)(a2 + 344);
    if ( *(_DWORD *)(v19 + 36) != 1 )
    {
      v20 = 24 * *(_DWORD *)(v19 + 4);
      v21 = malloc(v20);
      v22 = v21;
      if ( v21 )
      {
        memset(v21, 0, v20);
        v23 = *(_DWORD *)(a2 + 344);
        v24 = 0;
        *(_DWORD *)(v23 + 24) = (((2 * *(_DWORD *)(v23 + 4) - 1) & *(_DWORD *)(v23 + 12)) != 0)
                              + (*(_DWORD *)(v23 + 12) >> (*(_BYTE *)(v23 + 8) + 1));
        *(_DWORD *)(*(_DWORD *)(a2 + 344) + 28) = 0;
        v25 = *(_DWORD *)(a2 + 344);
        v26 = *(_DWORD *)(v25 + 4);
        if ( v26 )
        {
          for ( i = 0; i < v26; ++i )
          {
            v27 = *(_DWORD **)(*(_DWORD *)v25 + v24);
            if ( v27 )
            {
              while ( 1 )
              {
                v28 = (_DWORD *)v27[4];
                v29 = 3 * ((2 * v26 - 1) & v27[7]);
                v30 = (char *)&v22[v29];
                v31 = *((_DWORD *)v30 + 1) + 1;
                *((_DWORD *)v30 + 1) = v31;
                if ( v31 > *(_DWORD *)(v25 + 24) )
                {
                  ++*(_DWORD *)(v25 + 28);
                  *((_DWORD *)v30 + 2) = sub_48EC0(*((_DWORD *)v30 + 1), *(_DWORD *)(*(_DWORD *)(a2 + 344) + 24));
                }
                v27[3] = 0;
                v27[4] = v22[v29];
                v32 = v22[v29];
                if ( v32 )
                  *(_DWORD *)(v32 + 12) = v27;
                v22[v29] = v27;
                v25 = *(_DWORD *)(a2 + 344);
                if ( !v28 )
                  break;
                v26 = *(_DWORD *)(v25 + 4);
                v27 = v28;
              }
              v26 = *(_DWORD *)(v25 + 4);
            }
            v24 += 12;
          }
        }
        free(*(void **)v25);
        *(_DWORD *)(*(_DWORD *)(a2 + 344) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(a2 + 344) + 8);
        **(_DWORD **)(a2 + 344) = v22;
        v33 = *(_DWORD **)(a2 + 344);
        v34 = v33[3];
        v35 = v33[7];
        v36 = v35 > v34 >> 1;
        if ( v35 <= v34 >> 1 )
          v37 = 0;
        else
          v37 = v33[8];
        if ( v36 )
          ++v37;
        v33[8] = v37;
        v38 = *(_DWORD *)(a2 + 344);
        if ( *(_DWORD *)(v38 + 32) > 1u )
          *(_DWORD *)(v38 + 36) = 1;
        return result;
      }
LABEL_31:
      exit(-1);
    }
  }
  return result;
}
