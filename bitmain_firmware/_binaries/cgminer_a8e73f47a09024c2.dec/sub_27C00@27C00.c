int __fastcall sub_27C00(_DWORD *a1)
{
  int v2; // r6
  const char *v3; // r8
  size_t v4; // r0
  size_t v5; // r7
  unsigned __int8 *v6; // r3
  unsigned int v7; // r1
  int v8; // r12
  int v9; // lr
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r12
  unsigned int v13; // r1
  unsigned int v14; // r2
  int v15; // r12
  unsigned int v16; // r1
  unsigned int v17; // r2
  size_t v18; // lr
  int v19; // r0
  unsigned int v20; // r2
  unsigned int v21; // r3
  int v22; // r1
  unsigned int v23; // r2
  unsigned int v24; // r3
  int v25; // r1
  _DWORD *v26; // r10
  int v27; // r3
  int v28; // r4
  int v29; // r3
  void *v30; // r0
  int v31; // r11
  size_t v32; // r9
  unsigned __int8 *v33; // r6
  unsigned int v34; // r10
  int v35; // r8
  unsigned int v36; // r10
  unsigned int v37; // r3
  int v38; // r8
  unsigned int v39; // r2
  unsigned int v40; // r3
  int v41; // r1
  unsigned int v42; // r2
  unsigned int v43; // r3
  size_t v44; // r0
  unsigned int v45; // r3
  int v46; // r1
  unsigned int v47; // r2
  unsigned int v48; // r3
  int v49; // r1
  unsigned int v50; // r2
  unsigned int v51; // r3
  int v52; // r1
  unsigned int v53; // r3
  _DWORD *v54; // r2
  int v55; // r3
  int v56; // r2
  int v57; // r6
  size_t v58; // r7
  _DWORD *v59; // r0
  _DWORD *v60; // r8
  int v61; // r3
  _DWORD *v62; // r6
  _DWORD *v63; // r9
  _DWORD *v64; // r3
  int v65; // r7
  char *v66; // r10
  unsigned int v67; // r2
  int v68; // r3
  _DWORD *v69; // r3
  int v70; // r2
  int v71; // r3
  int v72; // r0
  int v73; // r0
  int v74; // r1
  int v75; // r1
  int v76; // r3
  char *v77; // r4
  const char *v78; // r7
  _DWORD *v79; // r0
  _DWORD *v80; // r6
  int v82; // [sp+0h] [bp-Ch]
  unsigned int v83; // [sp+4h] [bp-8h]

  v2 = dword_7C588;
  if ( dword_7C588 )
  {
    v3 = *(const char **)(a1[1] + 8);
    v4 = strlen(v3);
    v5 = v4;
    if ( v4 <= 0xB )
    {
      v6 = (unsigned __int8 *)v3;
      v7 = -1640531527;
      v8 = -1640531527;
      v9 = -17973521;
    }
    else
    {
      v6 = (unsigned __int8 *)v3;
      v7 = -1640531527;
      v8 = -1640531527;
      v9 = -17973521;
      do
      {
        v10 = (v6[6] << 16) + (v6[5] << 8) + v6[4] + (v6[7] << 24) + v7;
        v11 = (v6[10] << 16) + (v6[9] << 8) + v6[8] + (v6[11] << 24) + v9;
        v12 = ((v6[2] << 16) + (v6[1] << 8) + *v6 + (v6[3] << 24) - v10 - v11 + v8) ^ (v11 >> 13);
        v13 = (v10 - v11 - v12) ^ (v12 << 8);
        v14 = (v11 - v12 - v13) ^ (v13 >> 13);
        v15 = (v12 - v13 - v14) ^ (v14 >> 12);
        v16 = (v13 - v14 - v15) ^ (v15 << 16);
        v17 = (v14 - v15 - v16) ^ (v16 >> 5);
        v8 = (v15 - v16 - v17) ^ (v17 >> 3);
        v7 = (v16 - v17 - v8) ^ (v8 << 10);
        v9 = (v17 - v8 - v7) ^ (v7 >> 15);
        v6 += 12;
        v4 -= 12;
      }
      while ( v4 > 0xB );
    }
    v18 = v9 + v5;
    switch ( v4 )
    {
      case 1u:
        goto LABEL_18;
      case 2u:
        goto LABEL_17;
      case 3u:
        goto LABEL_16;
      case 4u:
        goto LABEL_15;
      case 5u:
        goto LABEL_14;
      case 6u:
        goto LABEL_13;
      case 7u:
        goto LABEL_12;
      case 8u:
        goto LABEL_11;
      case 9u:
        goto LABEL_10;
      case 0xAu:
        goto LABEL_9;
      case 0xBu:
        v18 += v6[10] << 24;
LABEL_9:
        v18 += v6[9] << 16;
LABEL_10:
        v18 += v6[8] << 8;
LABEL_11:
        v7 += v6[7] << 24;
LABEL_12:
        v7 += v6[6] << 16;
LABEL_13:
        v7 += v6[5] << 8;
LABEL_14:
        v7 += v6[4];
LABEL_15:
        v8 += v6[3] << 24;
LABEL_16:
        v8 += v6[2] << 16;
LABEL_17:
        v8 += v6[1] << 8;
LABEL_18:
        v8 += *v6;
        break;
      default:
        break;
    }
    v19 = (v8 - v7 - v18) ^ (v18 >> 13);
    v20 = (v7 - v18 - v19) ^ (v19 << 8);
    v21 = (v18 - v19 - v20) ^ (v20 >> 13);
    v22 = (v19 - v20 - v21) ^ (v21 >> 12);
    v23 = (v20 - v21 - v22) ^ (v22 << 16);
    v24 = (v21 - v22 - v23) ^ (v23 >> 5);
    v25 = (v22 - v23 - v24) ^ (v24 >> 3);
    v26 = *(_DWORD **)(dword_7C588 + 8);
    v27 = *(_DWORD *)(*v26
                    + 12
                    * (((v24 - v25 - ((v23 - v24 - v25) ^ (v25 << 10)))
                      ^ (((v23 - v24 - v25) ^ (v25 << 10)) >> 15))
                     & (v26[1] - 1)));
    if ( v27 )
      v28 = v27 - v26[5];
    else
      v28 = 0;
    while ( v28 )
    {
      if ( v5 == *(_DWORD *)(v28 + 32) && !memcmp(*(const void **)(v28 + 28), v3, v5) )
      {
        v76 = *(_DWORD *)(v28 + 4) + 1;
        *(_DWORD *)(v28 + 4) = v76;
        a1[2] = v76;
        goto LABEL_68;
      }
      v29 = *(_DWORD *)(v28 + 24);
      if ( !v29 )
        break;
      v28 = v29 - v26[5];
    }
    v77 = (char *)malloc(0x28u);
    v78 = v77;
    *(_DWORD *)v77 = **(_DWORD **)(a1[1] + 8);
    *((_DWORD *)v77 + 1) = 0;
    a1[2] = 0;
    *((_DWORD *)v77 + 4) = 0;
    *((_DWORD *)v77 + 7) = v77;
    *((_DWORD *)v77 + 8) = strlen(v77);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 8) + 16) + 8) = v77;
    *((_DWORD *)v77 + 3) = *(_DWORD *)(*(_DWORD *)(v2 + 8) + 16) - *(_DWORD *)(*(_DWORD *)(v2 + 8) + 20);
    *(_DWORD *)(*(_DWORD *)(v2 + 8) + 16) = v77 + 8;
  }
  else
  {
    v77 = (char *)malloc(0x28u);
    v78 = v77;
    *(_DWORD *)v77 = **(_DWORD **)(a1[1] + 8);
    *((_DWORD *)v77 + 1) = 0;
    a1[2] = 0;
    *((_DWORD *)v77 + 4) = 0;
    *((_DWORD *)v77 + 7) = v77;
    *((_DWORD *)v77 + 8) = strlen(v77);
    dword_7C588 = (int)v77;
    *((_DWORD *)v77 + 3) = 0;
    v79 = malloc(0x2Cu);
    v80 = v79;
    *((_DWORD *)v77 + 2) = v79;
    if ( !v79 )
      exit(-1);
    *v79 = 0;
    v79[3] = 0;
    v79[4] = 0;
    v79[5] = 0;
    v79[6] = 0;
    v79[7] = 0;
    v79[8] = 0;
    v79[9] = 0;
    v79[10] = 0;
    v79[4] = v77 + 8;
    v79[1] = 32;
    v79[2] = 5;
    v79[5] = 8;
    v30 = malloc(0x180u);
    *v80 = v30;
    if ( !v30 )
      exit(-1);
    memset(v30, 0, 0x180u);
    *(_DWORD *)(*((_DWORD *)v77 + 2) + 40) = -1609490463;
  }
  v31 = dword_7C588;
  ++*(_DWORD *)(*(_DWORD *)(dword_7C588 + 8) + 12);
  *((_DWORD *)v77 + 2) = *(_DWORD *)(v31 + 8);
  *((_DWORD *)v77 + 9) = -17973521;
  v32 = strlen(v78);
  if ( v32 <= 0xB )
  {
    v33 = (unsigned __int8 *)v78;
    v34 = -1640531527;
    v35 = -1640531527;
  }
  else
  {
    v33 = (unsigned __int8 *)v78;
    v34 = -1640531527;
    v35 = -1640531527;
    do
    {
      v36 = (v33[6] << 16) + (v33[5] << 8) + v33[4] + (v33[7] << 24) + v34;
      v37 = v33[8] + *((_DWORD *)v77 + 9) + (v33[9] << 8) + (v33[10] << 16) + (v33[11] << 24);
      v38 = ((v33[2] << 16) + (v33[1] << 8) + *v33 + (v33[3] << 24) - v37 - v36 + v35) ^ (v37 >> 13);
      v39 = (v36 - v37 - v38) ^ (v38 << 8);
      v40 = (v37 - v38 - v39) ^ (v39 >> 13);
      v41 = (v38 - v39 - v40) ^ (v40 >> 12);
      v42 = (v39 - v40 - v41) ^ (v41 << 16);
      v43 = (v40 - v41 - v42) ^ (v42 >> 5);
      v35 = (v41 - v42 - v43) ^ (v43 >> 3);
      v34 = (v42 - v43 - v35) ^ (v35 << 10);
      *((_DWORD *)v77 + 9) = (v43 - v35 - v34) ^ (v34 >> 15);
      v33 += 12;
      v32 -= 12;
    }
    while ( v32 > 0xB );
  }
  v44 = strlen(v78) + *((_DWORD *)v77 + 9);
  *((_DWORD *)v77 + 9) = v44;
  switch ( v32 )
  {
    case 1u:
      goto LABEL_47;
    case 2u:
      goto LABEL_46;
    case 3u:
      goto LABEL_45;
    case 4u:
      goto LABEL_44;
    case 5u:
      goto LABEL_43;
    case 6u:
      goto LABEL_42;
    case 7u:
      goto LABEL_41;
    case 8u:
      goto LABEL_40;
    case 9u:
      goto LABEL_39;
    case 0xAu:
      goto LABEL_38;
    case 0xBu:
      *((_DWORD *)v77 + 9) = v44 + (v33[10] << 24);
LABEL_38:
      *((_DWORD *)v77 + 9) += v33[9] << 16;
LABEL_39:
      *((_DWORD *)v77 + 9) += v33[8] << 8;
LABEL_40:
      v34 += v33[7] << 24;
LABEL_41:
      v34 += v33[6] << 16;
LABEL_42:
      v34 += v33[5] << 8;
LABEL_43:
      v34 += v33[4];
LABEL_44:
      v35 += v33[3] << 24;
LABEL_45:
      v35 += v33[2] << 16;
LABEL_46:
      v35 += v33[1] << 8;
LABEL_47:
      v35 += *v33;
      break;
    default:
      break;
  }
  v45 = *((_DWORD *)v77 + 9);
  v46 = (v35 - v34 - v45) ^ (v45 >> 13);
  v47 = (v34 - v45 - v46) ^ (v46 << 8);
  v48 = (v45 - v46 - v47) ^ (v47 >> 13);
  v49 = (v46 - v47 - v48) ^ (v48 >> 12);
  v50 = (v47 - v48 - v49) ^ (v49 << 16);
  v51 = (v48 - v49 - v50) ^ (v50 >> 5);
  v52 = (v49 - v50 - v51) ^ (v51 >> 3);
  v53 = (v51 - v52 - ((v50 - v51 - v52) ^ (v52 << 10))) ^ (((v50 - v51 - v52) ^ (v52 << 10)) >> 15);
  *((_DWORD *)v77 + 9) = v53;
  v54 = *(_DWORD **)(v31 + 8);
  v55 = 12 * (v53 & (v54[1] - 1));
  ++*(_DWORD *)(*v54 + v55 + 4);
  *((_DWORD *)v77 + 6) = *(_DWORD *)(**(_DWORD **)(v31 + 8) + v55);
  *((_DWORD *)v77 + 5) = 0;
  v56 = *(_DWORD *)(**(_DWORD **)(v31 + 8) + v55);
  if ( v56 )
    *(_DWORD *)(v56 + 12) = v77 + 8;
  *(_DWORD *)(**(_DWORD **)(v31 + 8) + v55) = v77 + 8;
  if ( *(_DWORD *)(**(_DWORD **)(v31 + 8) + v55 + 4) >= (unsigned int)(10
                                                                     * (*(_DWORD *)(**(_DWORD **)(v31 + 8) + v55 + 8) + 1)) )
  {
    v57 = *((_DWORD *)v77 + 2);
    if ( *(_DWORD *)(v57 + 36) != 1 )
    {
      v58 = 24 * *(_DWORD *)(v57 + 4);
      v59 = malloc(v58);
      v60 = v59;
      if ( !v59 )
        exit(-1);
      memset(v59, 0, v58);
      *(_DWORD *)(v57 + 24) = (((2 * *(_DWORD *)(v57 + 4) - 1) & *(_DWORD *)(v57 + 12)) != 0)
                            + (*(_DWORD *)(v57 + 12) >> (*(_BYTE *)(v57 + 8) + 1));
      *(_DWORD *)(*((_DWORD *)v77 + 2) + 28) = 0;
      v61 = *((_DWORD *)v77 + 2);
      if ( *(_DWORD *)(v61 + 4) )
      {
        v82 = 0;
        v83 = 0;
        do
        {
          v62 = *(_DWORD **)(*(_DWORD *)v61 + v82);
          if ( v62 )
          {
            do
            {
              v63 = (_DWORD *)v62[4];
              v64 = (_DWORD *)*((_DWORD *)v77 + 2);
              v65 = 3 * ((2 * v64[1] - 1) & v62[7]);
              v66 = (char *)&v60[3 * ((2 * v64[1] - 1) & v62[7])];
              v67 = *((_DWORD *)v66 + 1) + 1;
              *((_DWORD *)v66 + 1) = v67;
              if ( v67 > v64[6] )
              {
                ++v64[7];
                *((_DWORD *)v66 + 2) = sub_5E818(*((_DWORD *)v66 + 1), *(_DWORD *)(*((_DWORD *)v77 + 2) + 24));
              }
              v62[3] = 0;
              v62[4] = v60[v65];
              v68 = v60[v65];
              if ( v68 )
                *(_DWORD *)(v68 + 12) = v62;
              v60[v65] = v62;
              v62 = v63;
            }
            while ( v63 );
          }
          ++v83;
          v61 = *((_DWORD *)v77 + 2);
          v82 += 12;
        }
        while ( *(_DWORD *)(v61 + 4) > v83 );
      }
      free(*(void **)v61);
      *(_DWORD *)(*((_DWORD *)v77 + 2) + 4) *= 2;
      ++*(_DWORD *)(*((_DWORD *)v77 + 2) + 8);
      **((_DWORD **)v77 + 2) = v60;
      v69 = (_DWORD *)*((_DWORD *)v77 + 2);
      if ( v69[7] <= v69[3] >> 1 )
        v70 = 0;
      else
        v70 = v69[8] + 1;
      v69[8] = v70;
      v71 = *((_DWORD *)v77 + 2);
      if ( *(_DWORD *)(v71 + 32) > 1u )
        *(_DWORD *)(v71 + 36) = 1;
    }
  }
LABEL_68:
  sub_16198(&stru_808A8, "cgminer.c", "add_cgpu", 11057);
  dword_807D0 = (int)realloc((void *)dword_807D0, 4 * (dword_808C8 + dword_7C58C + 2));
  v72 = sub_13B94(&stru_808A8, "cgminer.c", "add_cgpu", 11059);
  off_79D40(v72);
  sub_142A0(&stru_7FE7C, "cgminer.c", "add_cgpu", 11061);
  a1[58] = time(0);
  v73 = sub_1430C(&stru_7FE7C, "cgminer.c", "add_cgpu", 11063);
  off_79D40(v73);
  if ( byte_80978 )
  {
    v74 = dword_7C58C;
    *(_DWORD *)(dword_807D0 + 4 * (dword_7C58C + dword_808C8)) = a1;
    dword_7C58C = v74 + 1;
  }
  else
  {
    v75 = dword_808C8;
    *(_DWORD *)(dword_807D0 + 4 * dword_808C8) = a1;
    dword_808C8 = v75 + 1;
  }
  if ( dword_808C8 - dword_80A58 > dword_7AEF0 )
    dword_7AEF0 = dword_808C8 - dword_80A58;
  return 1;
}
