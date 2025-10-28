int __fastcall sub_22F5C(int a1)
{
  int v2; // r3
  _DWORD *v3; // r0
  void **v4; // r4
  void *v5; // r0
  int v6; // r2
  int v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r12
  int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r3
  int v13; // r0
  unsigned int v14; // r3
  _DWORD *v15; // r1
  int v16; // r3
  int v17; // r1
  int v18; // r3
  size_t v19; // r4
  _DWORD *v20; // r0
  _DWORD *v21; // r6
  int v22; // r3
  int v23; // r3
  int v24; // r11
  _DWORD *v25; // r4
  _DWORD *v26; // r10
  _DWORD *v27; // r3
  int v28; // r5
  char *v29; // r7
  unsigned int v30; // r2
  int v31; // r3
  _DWORD *v32; // r3
  int v33; // r2
  int v34; // r3
  int v35; // r12
  int v36; // lr
  int v37; // r0
  int v38; // r7
  int v39; // r4
  unsigned int v40; // r6
  int v41; // r3
  int v42; // r2
  int v43; // r3
  int v44; // r8
  int v45; // r1
  int v46; // r3
  int v47; // r10
  int v48; // r3
  bool v49; // zf
  int v50; // r10
  int v51; // r3
  int v52; // r10
  int v53; // r10
  int v54; // r3
  int v55; // r3
  int v56; // r10
  int v57; // r4
  bool v58; // zf
  int v59; // r2
  int v60; // r0
  unsigned int v62; // [sp+4h] [bp-808h]
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Pushing work from pool %d to hash queue", **(_DWORD **)(a1 + 316));
    sub_3F178(7, s, 0);
  }
  *(_DWORD *)(a1 + 396) = dword_7AED8;
  sub_21624(a1);
  ++*(_DWORD *)(*(_DWORD *)(a1 + 316) + 68);
  sub_142A0((pthread_mutex_t *)dword_7AEC4, "cgminer.c", "hash_push", 5850);
  if ( sub_C174(a1) )
    ++dword_7AF44;
  if ( *(_BYTE *)(dword_807C8 + 8) )
    goto LABEL_94;
  *(_DWORD *)(a1 + 412) = *(unsigned __int8 *)(dword_807C8 + 8);
  *(_DWORD *)(a1 + 424) = a1 + 400;
  *(_DWORD *)(a1 + 428) = 4;
  v2 = dword_7AEC8;
  if ( dword_7AEC8 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 16) + 8) = a1;
    *(_DWORD *)(a1 + 408) = *(_DWORD *)(*(_DWORD *)(v2 + 404) + 16) - *(_DWORD *)(*(_DWORD *)(v2 + 404) + 20);
    *(_DWORD *)(*(_DWORD *)(v2 + 404) + 16) = a1 + 404;
  }
  else
  {
    dword_7AEC8 = a1;
    *(_DWORD *)(a1 + 408) = 0;
    v3 = malloc(0x2Cu);
    *(_DWORD *)(a1 + 404) = v3;
    if ( !v3 )
      exit(-1);
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[9] = 0;
    v3[10] = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 404) + 16) = a1 + 404;
    *(_DWORD *)(*(_DWORD *)(a1 + 404) + 4) = 32;
    *(_DWORD *)(*(_DWORD *)(a1 + 404) + 8) = 5;
    *(_DWORD *)(*(_DWORD *)(a1 + 404) + 20) = 404;
    v4 = *(void ***)(a1 + 404);
    *v4 = malloc(0x180u);
    v5 = **(void ***)(dword_7AEC8 + 404);
    if ( !v5 )
      exit(-1);
    memset(v5, 0, 0x180u);
    *(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 40) = -1609490463;
  }
  v6 = dword_7AEC8;
  ++*(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 12);
  *(_DWORD *)(a1 + 404) = *(_DWORD *)(v6 + 404);
  v7 = (*(unsigned __int8 *)(a1 + 400)
      + 17973517
      + (*(unsigned __int8 *)(a1 + 403) << 24)
      + (*(unsigned __int8 *)(a1 + 402) << 16)
      + (*(unsigned __int8 *)(a1 + 401) << 8))
     ^ 0x7F76D;
  v8 = (-1622558010 - v7) ^ (v7 << 8);
  v9 = (-17973517 - v7 - v8) ^ (v8 >> 13);
  v10 = (v7 - v8 - v9) ^ (v9 >> 12);
  v11 = (v8 - v9 - v10) ^ (v10 << 16);
  v12 = (v9 - v10 - v11) ^ (v11 >> 5);
  v13 = (v10 - v11 - v12) ^ (v12 >> 3);
  v14 = (v12 - v13 - ((v11 - v12 - v13) ^ (v13 << 10))) ^ (((v11 - v12 - v13) ^ (v13 << 10)) >> 15);
  *(_DWORD *)(a1 + 432) = v14;
  v15 = *(_DWORD **)(v6 + 404);
  v16 = 12 * (v14 & (v15[1] - 1));
  ++*(_DWORD *)(*v15 + v16 + 4);
  *(_DWORD *)(a1 + 420) = *(_DWORD *)(**(_DWORD **)(v6 + 404) + v16);
  *(_DWORD *)(a1 + 416) = 0;
  v17 = *(_DWORD *)(**(_DWORD **)(v6 + 404) + v16);
  if ( v17 )
    *(_DWORD *)(v17 + 12) = a1 + 404;
  *(_DWORD *)(**(_DWORD **)(v6 + 404) + v16) = a1 + 404;
  if ( *(_DWORD *)(**(_DWORD **)(dword_7AEC8 + 404) + v16 + 4) >= (unsigned int)(10
                                                                               * (*(_DWORD *)(**(_DWORD **)(dword_7AEC8 + 404)
                                                                                            + v16
                                                                                            + 8)
                                                                                + 1)) )
  {
    v18 = *(_DWORD *)(a1 + 404);
    if ( *(_DWORD *)(v18 + 36) != 1 )
    {
      v19 = 24 * *(_DWORD *)(v18 + 4);
      v20 = malloc(v19);
      v21 = v20;
      if ( !v20 )
        exit(-1);
      memset(v20, 0, v19);
      v22 = *(_DWORD *)(a1 + 404);
      *(_DWORD *)(v22 + 24) = (((2 * *(_DWORD *)(v22 + 4) - 1) & *(_DWORD *)(v22 + 12)) != 0)
                            + (*(_DWORD *)(v22 + 12) >> (*(_BYTE *)(v22 + 8) + 1));
      *(_DWORD *)(*(_DWORD *)(a1 + 404) + 28) = 0;
      v23 = *(_DWORD *)(a1 + 404);
      if ( *(_DWORD *)(v23 + 4) )
      {
        v24 = 0;
        v62 = 0;
        do
        {
          v25 = *(_DWORD **)(*(_DWORD *)v23 + v24);
          if ( v25 )
          {
            do
            {
              v26 = (_DWORD *)v25[4];
              v27 = *(_DWORD **)(a1 + 404);
              v28 = 3 * ((2 * v27[1] - 1) & v25[7]);
              v29 = (char *)&v21[3 * ((2 * v27[1] - 1) & v25[7])];
              v30 = *((_DWORD *)v29 + 1) + 1;
              *((_DWORD *)v29 + 1) = v30;
              if ( v30 > v27[6] )
              {
                ++v27[7];
                *((_DWORD *)v29 + 2) = sub_5E818(*((_DWORD *)v29 + 1), *(_DWORD *)(*(_DWORD *)(a1 + 404) + 24));
              }
              v25[3] = 0;
              v25[4] = v21[v28];
              v31 = v21[v28];
              if ( v31 )
                *(_DWORD *)(v31 + 12) = v25;
              v21[v28] = v25;
              v25 = v26;
            }
            while ( v26 );
          }
          ++v62;
          v23 = *(_DWORD *)(a1 + 404);
          v24 += 12;
        }
        while ( v62 < *(_DWORD *)(v23 + 4) );
      }
      free(*(void **)v23);
      *(_DWORD *)(*(_DWORD *)(a1 + 404) + 4) *= 2;
      ++*(_DWORD *)(*(_DWORD *)(a1 + 404) + 8);
      **(_DWORD **)(a1 + 404) = v21;
      v32 = *(_DWORD **)(a1 + 404);
      if ( v32[7] <= v32[3] >> 1 )
        v33 = 0;
      else
        v33 = v32[8] + 1;
      v32[8] = v33;
      v34 = *(_DWORD *)(a1 + 404);
      if ( *(_DWORD *)(v34 + 32) > 1u )
        *(_DWORD *)(v34 + 36) = 1;
    }
  }
  v35 = dword_7AEC8;
  if ( !dword_7AEC8 )
    goto LABEL_94;
  v36 = dword_7AEC8 + 404;
  v37 = 1;
  while ( 2 )
  {
    if ( !v36 )
    {
      v39 = 0;
      v38 = 0;
      break;
    }
    v38 = 0;
    v39 = 0;
    v40 = 0;
    do
    {
      ++v40;
      if ( v37 )
      {
        v41 = v36;
        v42 = 0;
        while ( 1 )
        {
          ++v42;
          v43 = *(_DWORD *)(v41 + 8);
          if ( !v43 )
            break;
          v41 = v43 + *(_DWORD *)(*(_DWORD *)(v35 + 404) + 20);
          if ( !v41 || v42 == v37 )
            goto LABEL_46;
        }
        v41 = 0;
      }
      else
      {
        v41 = v36;
        v42 = 0;
      }
LABEL_46:
      v44 = v36;
      v36 = v41;
      v45 = v37;
      while ( v42 )
      {
        v49 = v45 == 0;
        if ( v45 )
          v49 = v36 == 0;
        if ( v49 )
        {
          if ( v44 )
          {
            v51 = *(_DWORD *)(v44 + 8);
            if ( v51 )
              v50 = v51 + *(_DWORD *)(*(_DWORD *)(v35 + 404) + 20);
            else
              v50 = 0;
          }
          else
          {
            v50 = 0;
          }
          --v42;
          v48 = v44;
          v44 = v50;
        }
        else
        {
          v52 = *(_DWORD *)(*(_DWORD *)(v35 + 404) + 20);
          if ( *(_DWORD *)(v44 - v52 + 320) - *(_DWORD *)(v36 - v52 + 320) > 0 )
          {
            v55 = *(_DWORD *)(v36 + 8);
            if ( v55 )
              v56 = v55 + v52;
            else
              v56 = 0;
            --v45;
            v48 = v36;
            v36 = v56;
          }
          else
          {
            if ( v44 )
            {
              v54 = *(_DWORD *)(v44 + 8);
              if ( v54 )
                v53 = v54 + v52;
              else
                v53 = 0;
            }
            else
            {
              v53 = 0;
            }
            --v42;
            v48 = v44;
            v44 = v53;
          }
        }
LABEL_74:
        if ( v39 )
        {
          if ( !v48 )
          {
            *(_DWORD *)(v39 + 8) = 0;
            goto LABEL_79;
          }
          *(_DWORD *)(v39 + 8) = v48 - *(_DWORD *)(*(_DWORD *)(v35 + 404) + 20);
          v57 = v39 - *(_DWORD *)(*(_DWORD *)(v35 + 404) + 20);
          goto LABEL_78;
        }
        if ( v48 )
        {
          v38 = v48;
          v57 = 0;
LABEL_78:
          *(_DWORD *)(v48 + 4) = v57;
          goto LABEL_79;
        }
        v38 = 0;
LABEL_79:
        v39 = v48;
      }
      v58 = v36 == 0;
      if ( v36 )
        v58 = v45 == 0;
      if ( !v58 )
      {
        v46 = *(_DWORD *)(v36 + 8);
        if ( v46 )
          v47 = v46 + *(_DWORD *)(*(_DWORD *)(v35 + 404) + 20);
        else
          v47 = 0;
        --v45;
        v48 = v36;
        v36 = v47;
        goto LABEL_74;
      }
    }
    while ( v36 );
    if ( v39 )
      *(_DWORD *)(v39 + 8) = 0;
    if ( v40 > 1 )
    {
      v37 *= 2;
      v36 = v38;
      continue;
    }
    break;
  }
  v59 = dword_7AEC8;
  *(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 16) = v39;
  dword_7AEC8 = v38 - *(_DWORD *)(*(_DWORD *)(v59 + 404) + 20);
LABEL_94:
  pthread_cond_broadcast((pthread_cond_t *)(dword_807C8 + 40));
  v60 = sub_1430C((pthread_mutex_t *)dword_7AEC4, "cgminer.c", "hash_push", 5861);
  return off_79D40(v60);
}
