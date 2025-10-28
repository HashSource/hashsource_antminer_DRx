int __fastcall sub_27C18(_DWORD *a1)
{
  int v1; // r4
  const char *v2; // r6
  size_t v3; // r0
  unsigned int v4; // lr
  int v5; // r1
  unsigned __int8 *v6; // r3
  int v7; // r12
  size_t v8; // r5
  unsigned int i; // r2
  unsigned int v10; // lr
  int v11; // r0
  int v12; // r10
  int v13; // r8
  int v14; // r7
  unsigned int v15; // r1
  int v16; // r12
  unsigned int v17; // r0
  unsigned int v18; // r1
  int v19; // r12
  unsigned int v20; // r0
  unsigned int v21; // r1
  size_t v22; // r1
  _DWORD *v23; // r8
  int v24; // r0
  unsigned int v25; // r2
  unsigned int v26; // r3
  int v27; // r1
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r1
  int v31; // r7
  int v32; // r3
  _DWORD *v33; // r5
  int v34; // r0
  char *v35; // r6
  _DWORD *v36; // r7
  int v37; // r9
  int v38; // r3
  unsigned int v39; // r10
  size_t v40; // r0
  unsigned int v41; // r11
  unsigned __int8 *v42; // r7
  int v43; // r8
  int v44; // r1
  int v45; // r12
  int v46; // r2
  int v47; // r0
  unsigned int v48; // r3
  unsigned int v49; // r10
  int v50; // r8
  unsigned int v51; // r2
  unsigned int v52; // r3
  int v53; // r1
  unsigned int v54; // r2
  unsigned int v55; // r3
  size_t v56; // r9
  int v57; // r3
  int v58; // r3
  int v59; // r2
  int v60; // r2
  int result; // r0
  int v62; // r1
  unsigned int v63; // r2
  unsigned int v64; // r3
  int v65; // r1
  unsigned int v66; // r2
  unsigned int v67; // r3
  unsigned int v68; // r1
  unsigned int v69; // r3
  _DWORD *v70; // r2
  int v71; // r3
  int v72; // r2
  int v73; // r1
  int v74; // r4
  size_t v75; // r6
  _DWORD *v76; // r0
  _DWORD *v77; // r7
  int v78; // r8
  int v79; // r2
  unsigned int v80; // r6
  _DWORD *v81; // r11
  _DWORD *v82; // r4
  _DWORD *v83; // r5
  int v84; // r6
  char *v85; // r9
  unsigned int v86; // r3
  int v87; // r3
  _DWORD *v88; // r3
  unsigned int v89; // r1
  unsigned int v90; // r2
  bool v91; // cc
  int v92; // r2
  int v93; // r3
  int v94; // r0
  size_t v95; // r0
  _DWORD *v96; // r0
  void *v97; // r0
  unsigned int j; // [sp+4h] [bp-8h]

  v1 = dword_629E4;
  if ( dword_629E4 )
  {
    v2 = *(const char **)(a1[1] + 8);
    v3 = strlen(v2);
    v4 = -1640531527;
    v5 = -17973521;
    v6 = *(unsigned __int8 **)(a1[1] + 8);
    v7 = -1640531527;
    v8 = v3;
    for ( i = v3; i > 0xB; v5 = (v21 - v7 - v4) ^ (v4 >> 15) )
    {
      i -= 12;
      v10 = (v6[6] << 16) + (v6[5] << 8) + v6[4] + (v6[7] << 24) + v4;
      v11 = (v6[2] << 16) + (v6[1] << 8) + *v6;
      v12 = v6[3];
      v13 = v6[11];
      v14 = (v6[10] << 16) + (v6[9] << 8) + v6[8];
      v6 += 12;
      v15 = v14 + (v13 << 24) + v5;
      v16 = (v11 + (v12 << 24) - v10 - v15 + v7) ^ (v15 >> 13);
      v17 = (v10 - v15 - v16) ^ (v16 << 8);
      v18 = (v15 - v16 - v17) ^ (v17 >> 13);
      v19 = (v16 - v17 - v18) ^ (v18 >> 12);
      v20 = (v17 - v18 - v19) ^ (v19 << 16);
      v21 = (v18 - v19 - v20) ^ (v20 >> 5);
      v7 = (v19 - v20 - v21) ^ (v21 >> 3);
      v4 = (v20 - v21 - v7) ^ (v7 << 10);
    }
    v22 = v5 + v8;
    switch ( i )
    {
      case 1u:
        goto LABEL_15;
      case 2u:
        goto LABEL_14;
      case 3u:
        goto LABEL_13;
      case 4u:
        goto LABEL_12;
      case 5u:
        goto LABEL_11;
      case 6u:
        goto LABEL_10;
      case 7u:
        goto LABEL_9;
      case 8u:
        goto LABEL_8;
      case 9u:
        goto LABEL_7;
      case 0xAu:
        goto LABEL_6;
      case 0xBu:
        v22 += v6[10] << 24;
LABEL_6:
        v22 += v6[9] << 16;
LABEL_7:
        v22 += v6[8] << 8;
LABEL_8:
        v4 += v6[7] << 24;
LABEL_9:
        v4 += v6[6] << 16;
LABEL_10:
        v4 += v6[5] << 8;
LABEL_11:
        v4 += v6[4];
LABEL_12:
        v7 += v6[3] << 24;
LABEL_13:
        v7 += v6[2] << 16;
LABEL_14:
        v7 += v6[1] << 8;
LABEL_15:
        v7 += *v6;
        break;
      default:
        break;
    }
    v23 = *(_DWORD **)(dword_629E4 + 8);
    v24 = (v7 - v4 - v22) ^ (v22 >> 13);
    v25 = (v4 - v22 - v24) ^ (v24 << 8);
    v26 = (v22 - v24 - v25) ^ (v25 >> 13);
    v27 = (v24 - v25 - v26) ^ (v26 >> 12);
    v28 = (v25 - v26 - v27) ^ (v27 << 16);
    v29 = (v26 - v27 - v28) ^ (v28 >> 5);
    v30 = (v27 - v28 - v29) ^ (v29 >> 3);
    v31 = *(_DWORD *)(*v23
                    + 12
                    * (((v29 - v30 - ((v28 - v29 - v30) ^ (v30 << 10)))
                      ^ (((v28 - v29 - v30) ^ (v30 << 10)) >> 15))
                     & (v23[1] - 1)));
    if ( v31 )
      v31 -= v23[5];
    while ( v31 )
    {
      if ( v8 == *(_DWORD *)(v31 + 32) && !memcmp(*(const void **)(v31 + 28), v2, v8) )
      {
        v57 = *(_DWORD *)(v31 + 4) + 1;
        *(_DWORD *)(v31 + 4) = v57;
        a1[2] = v57;
        goto LABEL_29;
      }
      v32 = *(_DWORD *)(v31 + 24);
      if ( !v32 )
        break;
      v31 = v32 - v23[5];
    }
    v33 = malloc(0x28u);
    v34 = *(_DWORD *)v2;
    v33[1] = 0;
    v35 = (char *)(v33 + 2);
    *v33 = v34;
    a1[2] = 0;
    v33[4] = 0;
    v33[7] = v33;
    v33[8] = strlen((const char *)v33);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 8) + 16) + 8) = v33;
    v33[3] = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 16) - *(_DWORD *)(*(_DWORD *)(v1 + 8) + 20);
    *(_DWORD *)(*(_DWORD *)(v1 + 8) + 16) = v33 + 2;
    v36 = *(_DWORD **)(v1 + 8);
  }
  else
  {
    v33 = malloc(0x28u);
    v94 = **(_DWORD **)(a1[1] + 8);
    v33[1] = 0;
    *v33 = v94;
    a1[2] = 0;
    v33[4] = 0;
    v33[7] = v33;
    v95 = strlen((const char *)v33);
    v33[3] = 0;
    dword_629E4 = (int)v33;
    v33[8] = v95;
    v96 = malloc(0x2Cu);
    v36 = v96;
    v33[2] = v96;
    if ( !v96 )
      goto LABEL_81;
    *v96 = 0;
    v96[3] = 0;
    v35 = (char *)(v33 + 2);
    v96[4] = 0;
    v96[5] = 0;
    v96[6] = 0;
    v96[7] = 0;
    v96[8] = 0;
    v96[9] = 0;
    v96[10] = 0;
    v96[4] = v33 + 2;
    v96[1] = 32;
    v96[2] = 5;
    v96[5] = 8;
    v97 = malloc(0x180u);
    *v36 = v97;
    if ( !v97 )
      goto LABEL_81;
    memset(v97, 0, 0x180u);
    v1 = (int)v33;
    v36[10] = -1609490463;
  }
  v37 = -17973521;
  ++v36[3];
  v38 = *(_DWORD *)(v1 + 8);
  v39 = -1640531527;
  v33[9] = -17973521;
  v33[2] = v38;
  v40 = strlen((const char *)v33);
  v41 = v40;
  if ( v40 <= 0xB )
  {
    v43 = -1640531527;
    v42 = (unsigned __int8 *)v33;
  }
  else
  {
    v42 = (unsigned __int8 *)v33;
    v43 = -1640531527;
    do
    {
      v41 -= 12;
      v44 = (v42[2] << 16) + (v42[1] << 8) + *v42;
      v45 = v42[3];
      v46 = (v42[6] << 16) + (v42[5] << 8) + v42[4];
      v47 = v42[7];
      v48 = (v42[10] << 16) + (v42[9] << 8) + v42[8] + (v42[11] << 24) + v37;
      v42 += 12;
      v49 = v46 + (v47 << 24) + v39;
      v50 = (v44 + (v45 << 24) - v48 - v49 + v43) ^ (v48 >> 13);
      v51 = (v49 - v48 - v50) ^ (v50 << 8);
      v52 = (v48 - v50 - v51) ^ (v51 >> 13);
      v53 = (v50 - v51 - v52) ^ (v52 >> 12);
      v54 = (v51 - v52 - v53) ^ (v53 << 16);
      v55 = (v52 - v53 - v54) ^ (v54 >> 5);
      v43 = (v53 - v54 - v55) ^ (v55 >> 3);
      v39 = (v54 - v55 - v43) ^ (v43 << 10);
      v37 = (v55 - v43 - v39) ^ (v39 >> 15);
      v33[9] = v37;
    }
    while ( v41 > 0xB );
    v40 = strlen((const char *)v33);
  }
  v56 = v40 + v37;
  v33[9] = v56;
  switch ( v41 )
  {
    case 1u:
      goto LABEL_49;
    case 2u:
      goto LABEL_48;
    case 3u:
      goto LABEL_47;
    case 4u:
      goto LABEL_46;
    case 5u:
      goto LABEL_45;
    case 6u:
      goto LABEL_44;
    case 7u:
      goto LABEL_43;
    case 8u:
      goto LABEL_42;
    case 9u:
      goto LABEL_41;
    case 0xAu:
      goto LABEL_40;
    case 0xBu:
      v56 += v42[10] << 24;
      v33[9] = v56;
LABEL_40:
      v56 += v42[9] << 16;
      v33[9] = v56;
LABEL_41:
      v56 += v42[8] << 8;
      v33[9] = v56;
LABEL_42:
      v39 += v42[7] << 24;
LABEL_43:
      v39 += v42[6] << 16;
LABEL_44:
      v39 += v42[5] << 8;
LABEL_45:
      v39 += v42[4];
LABEL_46:
      v43 += v42[3] << 24;
LABEL_47:
      v43 += v42[2] << 16;
LABEL_48:
      v43 += v42[1] << 8;
LABEL_49:
      v43 += *v42;
      break;
    default:
      break;
  }
  v62 = (v43 - v39 - v56) ^ (v56 >> 13);
  v63 = (v39 - v56 - v62) ^ (v62 << 8);
  v64 = (v56 - v62 - v63) ^ (v63 >> 13);
  v65 = (v62 - v63 - v64) ^ (v64 >> 12);
  v66 = (v63 - v64 - v65) ^ (v65 << 16);
  v67 = (v64 - v65 - v66) ^ (v66 >> 5);
  v68 = v65 - v66 - v67;
  v69 = (v67 - (v68 ^ (v67 >> 3)) - ((v66 - v67 - (v68 ^ (v67 >> 3))) ^ ((v68 ^ (v67 >> 3)) << 10)))
      ^ (((v66 - v67 - (v68 ^ (v67 >> 3))) ^ ((v68 ^ (v67 >> 3)) << 10)) >> 15);
  v33[9] = v69;
  v70 = *(_DWORD **)(v1 + 8);
  v71 = 12 * (v69 & (v70[1] - 1));
  ++*(_DWORD *)(*v70 + v71 + 4);
  v72 = *(_DWORD *)(**(_DWORD **)(v1 + 8) + v71);
  v33[5] = 0;
  v33[6] = v72;
  v73 = **(_DWORD **)(v1 + 8) + v71;
  if ( *(_DWORD *)v73 )
  {
    *(_DWORD *)(*(_DWORD *)v73 + 12) = v35;
    v73 = **(_DWORD **)(v1 + 8) + v71;
  }
  *(_DWORD *)v73 = v35;
  if ( *(_DWORD *)(**(_DWORD **)(v1 + 8) + v71 + 4) >= (unsigned int)(10
                                                                    * (*(_DWORD *)(**(_DWORD **)(v1 + 8) + v71 + 8) + 1)) )
  {
    v74 = v33[2];
    if ( *(_DWORD *)(v74 + 36) != 1 )
    {
      v75 = 24 * *(_DWORD *)(v74 + 4);
      v76 = malloc(v75);
      v77 = v76;
      if ( v76 )
      {
        memset(v76, 0, v75);
        v78 = 0;
        *(_DWORD *)(v74 + 24) = (((2 * *(_DWORD *)(v74 + 4) - 1) & *(_DWORD *)(v74 + 12)) != 0)
                              + (*(_DWORD *)(v74 + 12) >> (*(_BYTE *)(v74 + 8) + 1));
        *(_DWORD *)(v33[2] + 28) = 0;
        v79 = v33[2];
        v80 = *(_DWORD *)(v79 + 4);
        if ( v80 )
        {
          v81 = v33;
          for ( j = 0; j < v80; ++j )
          {
            v82 = *(_DWORD **)(*(_DWORD *)v79 + v78);
            if ( v82 )
            {
              while ( 1 )
              {
                v83 = (_DWORD *)v82[4];
                v84 = 3 * ((2 * v80 - 1) & v82[7]);
                v85 = (char *)&v77[v84];
                v86 = *((_DWORD *)v85 + 1) + 1;
                *((_DWORD *)v85 + 1) = v86;
                if ( v86 > *(_DWORD *)(v79 + 24) )
                {
                  ++*(_DWORD *)(v79 + 28);
                  *((_DWORD *)v85 + 2) = sub_48EC0(*((_DWORD *)v85 + 1), *(_DWORD *)(v81[2] + 24));
                }
                v82[3] = 0;
                v82[4] = v77[v84];
                v87 = v77[v84];
                if ( v87 )
                  *(_DWORD *)(v87 + 12) = v82;
                v77[v84] = v82;
                v79 = v81[2];
                if ( !v83 )
                  break;
                v80 = *(_DWORD *)(v79 + 4);
                v82 = v83;
              }
              v80 = *(_DWORD *)(v79 + 4);
            }
            v78 += 12;
          }
          v33 = v81;
        }
        free(*(void **)v79);
        *(_DWORD *)(v33[2] + 4) *= 2;
        ++*(_DWORD *)(v33[2] + 8);
        *(_DWORD *)v33[2] = v77;
        v88 = (_DWORD *)v33[2];
        v89 = v88[3];
        v90 = v88[7];
        v91 = v90 > v89 >> 1;
        if ( v90 <= v89 >> 1 )
          v92 = 0;
        else
          v92 = v88[8];
        if ( v91 )
          ++v92;
        v88[8] = v92;
        v93 = v33[2];
        if ( *(_DWORD *)(v93 + 32) > 1u )
          *(_DWORD *)(v93 + 36) = 1;
        goto LABEL_29;
      }
LABEL_81:
      exit(-1);
    }
  }
LABEL_29:
  if ( pthread_rwlock_wrlock(&stru_63CA0) )
    sub_B550("add_cgpu", 10448);
  dword_63BC8 = (int)realloc((void *)dword_63BC8, 4 * (dword_63CC0 + dword_629E8 + 2));
  if ( pthread_rwlock_unlock(&stru_63CA0) )
    sub_B700("add_cgpu", 10450);
  off_60178();
  if ( pthread_mutex_lock(&mutex) )
    sub_B4E4("add_cgpu", 10452);
  a1[58] = time(0);
  if ( pthread_mutex_unlock(&mutex) )
    sub_B694("add_cgpu", 10454);
  off_60178();
  if ( byte_63D70 )
  {
    v58 = dword_629E8 + dword_63CC0;
    ++dword_629E8;
    *(_DWORD *)(dword_63BC8 + 4 * v58) = a1;
    v59 = dword_63CC0;
  }
  else
  {
    v59 = dword_63CC0 + 1;
    *(_DWORD *)(dword_63BC8 + 4 * dword_63CC0) = a1;
    dword_63CC0 = v59;
  }
  v60 = v59 - dword_63E50;
  result = 1;
  if ( v60 > dword_6130C )
    dword_6130C = v60;
  return result;
}
