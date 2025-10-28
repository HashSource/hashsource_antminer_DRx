int __fastcall sub_1ED4C(int a1)
{
  _DWORD *v1; // r11
  pthread_mutex_t *v3; // r0
  int v4; // r0
  int v5; // r6
  int v6; // r8
  int v7; // r9
  int v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r1
  unsigned int v15; // r3
  _DWORD *v16; // r2
  int v17; // r3
  int v18; // r2
  int v19; // r2
  int v20; // r7
  int v21; // r3
  size_t v22; // r6
  _DWORD *v23; // r0
  _DWORD *v24; // r8
  int v25; // r3
  int v26; // r1
  unsigned int v27; // r3
  _DWORD *v28; // r6
  int v29; // r7
  unsigned int v30; // r0
  int v31; // r3
  _DWORD *v32; // r3
  unsigned int v33; // r1
  unsigned int v34; // r2
  bool v35; // cc
  int v36; // r2
  int v37; // r3
  int v38; // r10
  int v39; // r0
  _DWORD *v40; // r12
  int v41; // lr
  unsigned int v42; // r8
  _DWORD *j; // r3
  int v44; // r2
  int v45; // r1
  int v46; // r1
  int v47; // r6
  bool v48; // zf
  int v49; // r3
  bool v50; // zf
  int v52; // r3
  int v53; // r3
  _DWORD *v54; // r0
  _DWORD *v55; // r7
  void *v56; // r0
  int v57; // r3
  void *v58; // r0
  int v59; // [sp+0h] [bp-80Ch]
  unsigned int i; // [sp+4h] [bp-808h]
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "Pushing work from pool %d to hash queue", **(_DWORD **)(a1 + 260));
    sub_38438(7, s, 0);
  }
  *(_DWORD *)(a1 + 336) = dword_6136C;
  sub_1D6F8(a1);
  v3 = (pthread_mutex_t *)dword_612C8;
  ++*(_DWORD *)(*(_DWORD *)(a1 + 260) + 68);
  if ( pthread_mutex_lock(v3) )
    sub_B4E4("hash_push", 5511);
  if ( !*(_BYTE *)(a1 + 273) && *(_DWORD *)(a1 + 276) )
    ++dword_612D4;
  v4 = dword_63BC0;
  if ( *(_BYTE *)(dword_63BC0 + 8) )
    goto LABEL_72;
  v5 = dword_612CC;
  *(_DWORD *)(a1 + 352) = *(unsigned __int8 *)(dword_63BC0 + 8);
  *(_DWORD *)(a1 + 364) = a1 + 340;
  *(_DWORD *)(a1 + 368) = 4;
  if ( v5 )
  {
    v6 = a1 + 344;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 344) + 16) + 8) = a1;
    *(_DWORD *)(a1 + 348) = *(_DWORD *)(*(_DWORD *)(v5 + 344) + 16) - *(_DWORD *)(*(_DWORD *)(v5 + 344) + 20);
    *(_DWORD *)(*(_DWORD *)(v5 + 344) + 16) = a1 + 344;
  }
  else
  {
    *(_DWORD *)(a1 + 348) = 0;
    dword_612CC = a1;
    v54 = malloc(0x2Cu);
    v55 = v54;
    *(_DWORD *)(a1 + 344) = v54;
    if ( !v54 )
      goto LABEL_100;
    *v54 = 0;
    v54[3] = 0;
    v54[4] = 0;
    v6 = a1 + 344;
    v54[5] = 0;
    v54[6] = 0;
    v54[7] = 0;
    v54[8] = 0;
    v54[9] = 0;
    v54[10] = 0;
    v54[4] = a1 + 344;
    v54[1] = 32;
    v54[2] = 5;
    v54[5] = 344;
    v56 = malloc(0x180u);
    v57 = dword_612CC;
    *v55 = v56;
    v58 = **(void ***)(v57 + 344);
    if ( !v58 )
      goto LABEL_100;
    memset(v58, 0, 0x180u);
    v5 = dword_612CC;
    *(_DWORD *)(*(_DWORD *)(dword_612CC + 344) + 40) = -1609490463;
  }
  ++*(_DWORD *)(*(_DWORD *)(v5 + 344) + 12);
  v7 = *(unsigned __int8 *)(a1 + 342);
  v8 = (*(unsigned __int8 *)(a1 + 340)
      + 17973517
      + (*(unsigned __int8 *)(a1 + 343) << 24)
      + (v7 << 16)
      + (*(unsigned __int8 *)(a1 + 341) << 8))
     ^ 0x7F76D;
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(v5 + 344);
  v9 = (-1622558010 - v8) ^ (v8 << 8);
  v10 = (-17973517 - v8 - v9) ^ (v9 >> 13);
  v11 = (v8 - v9 - v10) ^ (v10 >> 12);
  v12 = (v9 - v10 - v11) ^ (v11 << 16);
  v13 = (v10 - v11 - v12) ^ (v12 >> 5);
  v14 = v11 - v12 - v13;
  v15 = (v13 - (v14 ^ (v13 >> 3)) - ((v12 - v13 - (v14 ^ (v13 >> 3))) ^ ((v14 ^ (v13 >> 3)) << 10)))
      ^ (((v12 - v13 - (v14 ^ (v13 >> 3))) ^ ((v14 ^ (v13 >> 3)) << 10)) >> 15);
  *(_DWORD *)(a1 + 372) = v15;
  v16 = *(_DWORD **)(v5 + 344);
  v17 = 12 * (v15 & (v16[1] - 1));
  ++*(_DWORD *)(*v16 + v17 + 4);
  v18 = *(_DWORD *)(**(_DWORD **)(v5 + 344) + v17);
  *(_DWORD *)(a1 + 356) = 0;
  *(_DWORD *)(a1 + 360) = v18;
  v19 = **(_DWORD **)(v5 + 344) + v17;
  if ( *(_DWORD *)v19 )
  {
    *(_DWORD *)(*(_DWORD *)v19 + 12) = v6;
    v19 = **(_DWORD **)(v5 + 344) + v17;
  }
  *(_DWORD *)v19 = v6;
  v20 = dword_612CC;
  if ( *(_DWORD *)(**(_DWORD **)(dword_612CC + 344) + v17 + 4) >= (unsigned int)(10
                                                                               * (*(_DWORD *)(**(_DWORD **)(dword_612CC + 344)
                                                                                            + v17
                                                                                            + 8)
                                                                                + 1)) )
  {
    v21 = *(_DWORD *)(a1 + 344);
    if ( *(_DWORD *)(v21 + 36) != 1 )
    {
      v22 = 24 * *(_DWORD *)(v21 + 4);
      v23 = malloc(v22);
      v24 = v23;
      if ( v23 )
      {
        memset(v23, 0, v22);
        v25 = *(_DWORD *)(a1 + 344);
        v7 = 0;
        *(_DWORD *)(v25 + 24) = (((2 * *(_DWORD *)(v25 + 4) - 1) & *(_DWORD *)(v25 + 12)) != 0)
                              + (*(_DWORD *)(v25 + 12) >> (*(_BYTE *)(v25 + 8) + 1));
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 28) = 0;
        v26 = *(_DWORD *)(a1 + 344);
        v27 = *(_DWORD *)(v26 + 4);
        if ( v27 )
        {
          v59 = 0;
          for ( i = 0; i < v27; ++i )
          {
            v28 = *(_DWORD **)(*(_DWORD *)v26 + v59);
            if ( v28 )
            {
              while ( 1 )
              {
                v1 = (_DWORD *)v28[4];
                v29 = 3 * ((2 * v27 - 1) & v28[7]);
                v7 = (int)&v24[3 * ((2 * v27 - 1) & v28[7])];
                v30 = *(_DWORD *)(v7 + 4) + 1;
                *(_DWORD *)(v7 + 4) = v30;
                if ( v30 > *(_DWORD *)(v26 + 24) )
                {
                  ++*(_DWORD *)(v26 + 28);
                  *(_DWORD *)(v7 + 8) = sub_48EC0(*(_DWORD *)(v7 + 4), *(_DWORD *)(*(_DWORD *)(a1 + 344) + 24));
                }
                v28[3] = 0;
                v28[4] = v24[v29];
                v31 = v24[v29];
                if ( v31 )
                  *(_DWORD *)(v31 + 12) = v28;
                v24[v29] = v28;
                v26 = *(_DWORD *)(a1 + 344);
                if ( !v1 )
                  break;
                v27 = *(_DWORD *)(v26 + 4);
                v28 = v1;
              }
              v27 = *(_DWORD *)(v26 + 4);
            }
            v59 += 12;
          }
        }
        free(*(void **)v26);
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + 4) *= 2;
        ++*(_DWORD *)(*(_DWORD *)(a1 + 344) + 8);
        **(_DWORD **)(a1 + 344) = v24;
        v32 = *(_DWORD **)(a1 + 344);
        v20 = dword_612CC;
        v33 = v32[3];
        v34 = v32[7];
        v35 = v34 > v33 >> 1;
        if ( v34 <= v33 >> 1 )
          v36 = 0;
        else
          v36 = v32[8];
        if ( v35 )
          ++v36;
        v32[8] = v36;
        v37 = *(_DWORD *)(a1 + 344);
        if ( *(_DWORD *)(v37 + 32) > 1u )
          *(_DWORD *)(v37 + 36) = 1;
        if ( !v20 )
        {
          v4 = dword_63BC0;
          goto LABEL_72;
        }
        goto LABEL_38;
      }
LABEL_100:
      exit(-1);
    }
  }
LABEL_38:
  v38 = v20 + 344;
  v39 = 1;
  while ( 2 )
  {
    v40 = (_DWORD *)v38;
    v38 = 0;
    v41 = 0;
    v42 = 0;
    do
    {
      ++v42;
      if ( v39 )
      {
        j = (_DWORD *)v40[2];
        if ( j )
        {
          v45 = *(_DWORD *)(*(_DWORD *)(v20 + 344) + 20);
          v44 = 1;
          for ( j = (_DWORD *)((char *)j + v45); j; j = (_DWORD *)((char *)j + v45) )
          {
            if ( v44 == v39 )
              break;
            j = (_DWORD *)j[2];
            ++v44;
            if ( !j )
              break;
          }
        }
        else
        {
          v44 = 1;
        }
      }
      else
      {
        j = v40;
        v44 = 0;
      }
      v46 = (int)v40;
      v47 = v39;
      v40 = j;
      while ( v44 )
      {
LABEL_50:
        v48 = v47 == 0;
        if ( v47 )
          v48 = v40 == 0;
        if ( v48 )
        {
          if ( !v46 )
            goto LABEL_94;
          v7 = *(_DWORD *)(v46 + 8);
          if ( v7 )
            v7 += *(_DWORD *)(*(_DWORD *)(v20 + 344) + 20);
LABEL_57:
          --v44;
          if ( !v41 )
            goto LABEL_91;
LABEL_58:
          if ( v46 )
          {
            *(_DWORD *)(v41 + 8) = v46 - *(_DWORD *)(*(_DWORD *)(v20 + 344) + 20);
            v49 = v41 - *(_DWORD *)(*(_DWORD *)(v20 + 344) + 20);
            v41 = v46;
            v46 = v7;
            goto LABEL_60;
          }
          *(_DWORD *)(v41 + 8) = 0;
          v41 = 0;
          v46 = v7;
        }
        else
        {
          v53 = *(_DWORD *)(*(_DWORD *)(v20 + 344) + 20);
          v1 = *(_DWORD **)((char *)v40 - v53 + 264);
          v7 = *(_DWORD *)(v46 - v53 + 264) - (_DWORD)v1;
          if ( v7 > 0 )
          {
            v1 = (_DWORD *)v40[2];
            if ( v1 )
              v1 = (_DWORD *)((char *)v1 + v53);
            goto LABEL_79;
          }
          if ( !v46 )
          {
LABEL_94:
            v7 = v46;
            goto LABEL_57;
          }
          v7 = *(_DWORD *)(v46 + 8);
          --v44;
          if ( v7 )
            v7 += v53;
          if ( v41 )
            goto LABEL_58;
LABEL_91:
          if ( v46 )
          {
            v41 = v46;
            v49 = 0;
            v46 = v7;
            v38 = v41;
            goto LABEL_60;
          }
          v38 = 0;
          v46 = v7;
          v41 = 0;
        }
      }
      while ( 1 )
      {
        v50 = v40 == 0;
        if ( v40 )
          v50 = v47 == 0;
        if ( v50 )
          break;
        v52 = v40[2];
        if ( v52 )
          v7 = *(_DWORD *)(v20 + 344);
        else
          v1 = (_DWORD *)v44;
        if ( v52 )
        {
          v7 = *(_DWORD *)(v7 + 20);
          v1 = (_DWORD *)(v52 + v7);
        }
LABEL_79:
        --v47;
        if ( v41 )
        {
          v7 = v46;
          v46 = (int)v40;
          v40 = v1;
          goto LABEL_58;
        }
        v41 = (int)v40;
        v49 = 0;
        v40 = v1;
        v38 = v41;
LABEL_60:
        *(_DWORD *)(v41 + 4) = v49;
        if ( v44 )
          goto LABEL_50;
      }
    }
    while ( v40 );
    if ( v41 )
      *(_DWORD *)(v41 + 8) = 0;
    if ( v42 > 1 )
    {
      v39 *= 2;
      if ( !v38 )
      {
        v41 = 0;
        break;
      }
      continue;
    }
    break;
  }
  *(_DWORD *)(*(_DWORD *)(v20 + 344) + 16) = v41;
  v4 = dword_63BC0;
  dword_612CC = v38 - *(_DWORD *)(*(_DWORD *)(v20 + 344) + 20);
LABEL_72:
  pthread_cond_broadcast((pthread_cond_t *)(v4 + 40));
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_612C8) )
    sub_B694("hash_push", 5522);
  return off_60178();
}
