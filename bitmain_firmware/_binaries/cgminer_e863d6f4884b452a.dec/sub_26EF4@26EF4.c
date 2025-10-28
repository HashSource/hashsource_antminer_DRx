int __fastcall sub_26EF4(_DWORD *a1)
{
  int v1; // r6
  const char *v2; // r4
  size_t v3; // r5
  int v4; // r3
  int v5; // r7
  int v6; // r0
  unsigned __int8 *v7; // lr
  unsigned int v8; // r1
  int v9; // r12
  int v10; // r4
  int v11; // r2
  int v12; // r3
  unsigned int v13; // r1
  unsigned int v14; // r2
  int v15; // r3
  unsigned int v16; // r1
  unsigned int v17; // r2
  int v18; // r3
  unsigned int v19; // r1
  unsigned int v20; // r2
  size_t v21; // r7
  _DWORD *v22; // r1
  int v23; // r0
  unsigned int v24; // r4
  unsigned int v25; // r7
  int v26; // r3
  unsigned int v27; // r0
  unsigned int v28; // r7
  int v29; // r3
  int v30; // r4
  int v31; // r7
  int v32; // r4
  int v33; // r4
  int v34; // r3
  int v35; // r3
  char *v37; // r0
  unsigned __int8 *v38; // r3
  _DWORD *v39; // r7
  char *v40; // r4
  __int64 v41; // r2
  _DWORD *v42; // r4
  int v43; // r8
  unsigned int v44; // r5
  int v45; // r3
  size_t v46; // r0
  unsigned int v47; // r10
  unsigned __int8 *v48; // r11
  int v49; // r4
  int v50; // r0
  int v51; // r8
  int v52; // r1
  int v53; // r3
  unsigned __int8 *v54; // r9
  int v55; // r12
  unsigned int v56; // r8
  unsigned int v57; // r3
  int v58; // r2
  unsigned int v59; // r3
  unsigned int v60; // r8
  int v61; // r2
  unsigned int v62; // r3
  unsigned int v63; // r8
  size_t v64; // r0
  int v65; // r3
  unsigned int v66; // r1
  unsigned int v67; // r0
  int v68; // r3
  unsigned int v69; // r1
  unsigned int v70; // r0
  unsigned int v71; // r3
  unsigned int v72; // r3
  __int64 v73; // r0
  int v74; // r3
  int v75; // r2
  int v76; // r1
  _DWORD *v77; // r2
  __int64 v78; // r2
  int v79; // r4
  _DWORD *v80; // r6
  unsigned int v81; // r1
  unsigned int v82; // r3
  int v83; // r1
  unsigned int v84; // r4
  int v85; // r9
  _DWORD *v86; // r5
  _DWORD *v87; // r8
  int v88; // r4
  char *v89; // r11
  unsigned int v90; // r2
  int v91; // r3
  _DWORD *v92; // r3
  unsigned int v93; // r2
  unsigned int v94; // r1
  bool v95; // cc
  int v96; // r2
  int v97; // r3
  int v98; // r3
  _DWORD *v99; // r0
  void *v100; // r0
  unsigned __int8 *v101; // r9
  unsigned int v102; // r8
  unsigned __int8 *s2; // [sp+Ch] [bp-8h]
  void *s2a; // [sp+Ch] [bp-8h]
  char *s2b; // [sp+Ch] [bp-8h]

  v1 = dword_6F39C;
  s2 = *(unsigned __int8 **)(a1[1] + 8);
  if ( dword_6F39C )
  {
    v2 = *(const char **)(a1[1] + 8);
    v3 = strlen(v2);
    v4 = -1640531527;
    v5 = -17973521;
    v6 = -1640531527;
    if ( v3 > 0xB )
    {
      v7 = (unsigned __int8 *)(v2 + 12);
      v102 = v3;
      v8 = -1640531527;
      do
      {
        v9 = *(v7 - 6);
        v102 -= 12;
        v10 = *(v7 - 7);
        v11 = *(v7 - 2);
        v101 = v7;
        v12 = *(v7 - 10);
        v7 += 12;
        v13 = v8 + (v9 << 16) + (v10 << 8) + *(v7 - 20) + (*(v7 - 17) << 24);
        v14 = (v11 << 16) + (*(v7 - 15) << 8) + *(v7 - 16) + (*(v7 - 13) << 24) + v5;
        v15 = ((v12 << 16) + (*(v7 - 23) << 8) + *(v7 - 24) + (*(v7 - 21) << 24) - v13 - v14 + v6) ^ (v14 >> 13);
        v16 = (v13 - v14 - v15) ^ (v15 << 8);
        v17 = (v14 - v15 - v16) ^ (v16 >> 13);
        v18 = (v15 - v16 - v17) ^ (v17 >> 12);
        v19 = (v16 - v17 - v18) ^ (v18 << 16);
        v20 = (v17 - v18 - v19) ^ (v19 >> 5);
        v6 = (v18 - v19 - v20) ^ (v20 >> 3);
        v8 = (v19 - v20 - v6) ^ (v6 << 10);
        v5 = (v20 - v6 - v8) ^ (v8 >> 15);
      }
      while ( v102 > 0xB );
      v4 = v8;
    }
    else
    {
      v101 = s2;
      v102 = v3;
    }
    v21 = v5 + v3;
    switch ( v102 )
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
        v21 += v101[10] << 24;
LABEL_9:
        v21 += v101[9] << 16;
LABEL_10:
        v21 += v101[8] << 8;
LABEL_11:
        v4 += v101[7] << 24;
LABEL_12:
        v4 += v101[6] << 16;
LABEL_13:
        v4 += v101[5] << 8;
LABEL_14:
        v4 += v101[4];
LABEL_15:
        v6 += v101[3] << 24;
LABEL_16:
        v6 += v101[2] << 16;
LABEL_17:
        v6 += v101[1] << 8;
LABEL_18:
        v6 += *v101;
        break;
      default:
        break;
    }
    v22 = *(_DWORD **)(dword_6F39C + 8);
    v23 = (v6 - v4 - v21) ^ (v21 >> 13);
    v24 = (v4 - v21 - v23) ^ (v23 << 8);
    v25 = (v21 - v23 - v24) ^ (v24 >> 13);
    v26 = (v23 - v24 - v25) ^ (v25 >> 12);
    v27 = (v24 - v25 - v26) ^ (v26 << 16);
    v28 = (v25 - v26 - v27) ^ (v27 >> 5);
    v29 = (v26 - v27 - v28) ^ (v28 >> 3);
    v30 = *(_DWORD *)(*v22
                    + 12
                    * (((v28 - v29 - ((v27 - v28 - v29) ^ (v29 << 10)))
                      ^ (((v27 - v28 - v29) ^ (v29 << 10)) >> 15))
                     & (v22[1] - 1)));
    if ( v30 )
    {
      v31 = -v22[5];
      v32 = v30 - v22[5];
      if ( v32 )
      {
        while ( *(_DWORD *)(v32 + 32) != v3 || memcmp(*(const void **)(v32 + 28), s2, v3) )
        {
          v33 = *(_DWORD *)(v32 + 24);
          if ( v33 )
          {
            v32 = v33 + v31;
            if ( v32 )
              continue;
          }
          goto LABEL_36;
        }
        v34 = *(_DWORD *)(v32 + 4) + 1;
        *(_DWORD *)(v32 + 4) = v34;
        a1[2] = v34;
LABEL_27:
        if ( !pthread_rwlock_wrlock(&stru_73CCC) )
          goto LABEL_28;
LABEL_81:
        sub_1BECC("add_cgpu", 11057);
      }
    }
LABEL_36:
    v37 = (char *)malloc(0x28u);
    v38 = s2;
    v39 = v37;
    v40 = v37 + 8;
    s2a = v37 + 8;
    v41 = *(unsigned int *)v38;
    *((_DWORD *)v37 + 7) = v37;
    *((_DWORD *)v37 + 4) = 0;
    *(_QWORD *)v37 = v41;
    a1[2] = HIDWORD(v41);
    *((_DWORD *)v37 + 8) = strlen(v37);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v1 + 8) + 16) + 8) = v39;
    v39[3] = *(_DWORD *)(*(_DWORD *)(v1 + 8) + 16) - *(_DWORD *)(*(_DWORD *)(v1 + 8) + 20);
    *(_DWORD *)(*(_DWORD *)(v1 + 8) + 16) = v40;
    v42 = *(_DWORD **)(v1 + 8);
  }
  else
  {
    v39 = malloc(0x28u);
    v98 = *(_DWORD *)s2;
    a1[2] = 0;
    v39[4] = 0;
    *v39 = v98;
    v39[1] = 0;
    v39[7] = v39;
    v39[8] = strlen((const char *)v39);
    v39[3] = 0;
    dword_6F39C = (int)v39;
    v99 = malloc(0x2Cu);
    v42 = v99;
    v39[2] = v99;
    if ( !v99 )
      goto LABEL_89;
    memset(v99 + 3, 0, 0x20u);
    s2a = v39 + 2;
    v42[4] = v39 + 2;
    v42[1] = 32;
    v42[2] = 5;
    v42[5] = 8;
    v100 = calloc(0x180u, 1u);
    *v42 = v100;
    if ( !v100 )
      goto LABEL_89;
    v1 = (int)v39;
    v42[10] = -1609490463;
  }
  v43 = -17973521;
  v44 = -1640531527;
  ++v42[3];
  v45 = *(_DWORD *)(v1 + 8);
  v39[9] = -17973521;
  v39[2] = v45;
  v46 = strlen((const char *)v39);
  v47 = v46;
  if ( v46 <= 0xB )
  {
    v49 = -1640531527;
    v54 = (unsigned __int8 *)v39;
  }
  else
  {
    v48 = (unsigned __int8 *)(v39 + 3);
    v49 = -1640531527;
    v50 = -17973521;
    do
    {
      v51 = *(v48 - 2);
      v47 -= 12;
      v52 = *(v48 - 3);
      v53 = *(v48 - 6);
      v54 = v48;
      v55 = *(v48 - 7);
      v48 += 12;
      v56 = (v51 << 16) + (v52 << 8) + *(v48 - 16) + (*(v48 - 13) << 24) + v50;
      v57 = (v53 << 16) + (v55 << 8) + *(v48 - 20) + (*(v48 - 17) << 24) + v44;
      v58 = ((*(v48 - 22) << 16) + (*(v48 - 23) << 8) + *(v48 - 24) + (*(v48 - 21) << 24) - v56 - v57 + v49)
          ^ (v56 >> 13);
      v59 = (v57 - v56 - v58) ^ (v58 << 8);
      v60 = (v56 - v58 - v59) ^ (v59 >> 13);
      v61 = (v58 - v59 - v60) ^ (v60 >> 12);
      v62 = (v59 - v60 - v61) ^ (v61 << 16);
      v63 = (v60 - v61 - v62) ^ (v62 >> 5);
      v49 = (v61 - v62 - v63) ^ (v63 >> 3);
      v44 = (v62 - v63 - v49) ^ (v49 << 10);
      v50 = (v63 - v49 - v44) ^ (v44 >> 15);
      v39[9] = v50;
    }
    while ( v47 > 0xB );
    v43 = (v63 - v49 - v44) ^ (v44 >> 15);
    v46 = strlen((const char *)v39);
  }
  v64 = v46 + v43;
  v39[9] = v64;
  switch ( v47 )
  {
    case 1u:
      goto LABEL_53;
    case 2u:
      goto LABEL_52;
    case 3u:
      goto LABEL_51;
    case 4u:
      goto LABEL_50;
    case 5u:
      goto LABEL_49;
    case 6u:
      goto LABEL_48;
    case 7u:
      goto LABEL_47;
    case 8u:
      goto LABEL_46;
    case 9u:
      goto LABEL_45;
    case 0xAu:
      goto LABEL_44;
    case 0xBu:
      v64 += v54[10] << 24;
      v39[9] = v64;
LABEL_44:
      v64 += v54[9] << 16;
      v39[9] = v64;
LABEL_45:
      v64 += v54[8] << 8;
      v39[9] = v64;
LABEL_46:
      v44 += v54[7] << 24;
LABEL_47:
      v44 += v54[6] << 16;
LABEL_48:
      v44 += v54[5] << 8;
LABEL_49:
      v44 += v54[4];
LABEL_50:
      v49 += v54[3] << 24;
LABEL_51:
      v49 += v54[2] << 16;
LABEL_52:
      v49 += v54[1] << 8;
LABEL_53:
      v49 += *v54;
      break;
    default:
      break;
  }
  v65 = (v49 - v44 - v64) ^ (v64 >> 13);
  v66 = (v44 - v64 - v65) ^ (v65 << 8);
  v67 = (v64 - v65 - v66) ^ (v66 >> 13);
  v68 = (v65 - v66 - v67) ^ (v67 >> 12);
  v69 = (v66 - v67 - v68) ^ (v68 << 16);
  v70 = (v67 - v68 - v69) ^ (v69 >> 5);
  v71 = v68 - v69 - v70;
  v72 = (v70 - (v71 ^ (v70 >> 3)) - ((v69 - v70 - (v71 ^ (v70 >> 3))) ^ ((v71 ^ (v70 >> 3)) << 10)))
      ^ (((v69 - v70 - (v71 ^ (v70 >> 3))) ^ ((v71 ^ (v70 >> 3)) << 10)) >> 15);
  v39[9] = v72;
  v73 = *(_QWORD *)*(_DWORD *)(v1 + 8);
  v74 = 12 * (v72 & (HIDWORD(v73) - 1));
  ++*(_DWORD *)(v73 + v74 + 4);
  HIDWORD(v73) = *(_DWORD *)(**(_DWORD **)(v1 + 8) + v74);
  v39[5] = 0;
  v39[6] = HIDWORD(v73);
  v75 = **(_DWORD **)(v1 + 8);
  v76 = *(_DWORD *)(v75 + v74);
  v77 = (_DWORD *)(v75 + v74);
  if ( v76 )
  {
    *(_DWORD *)(v76 + 12) = s2a;
    v77 = (_DWORD *)(**(_DWORD **)(v1 + 8) + v74);
  }
  *v77 = s2a;
  v78 = *(_QWORD *)(**(_DWORD **)(v1 + 8) + v74 + 4);
  if ( (unsigned int)v78 < 10 * (HIDWORD(v78) + 1) )
    goto LABEL_27;
  v79 = v39[2];
  if ( *(_DWORD *)(v79 + 36) == 1 )
    goto LABEL_27;
  v80 = calloc(24 * *(_DWORD *)(v79 + 4), 1u);
  if ( !v80 )
LABEL_89:
    exit(-1);
  v81 = *(_DWORD *)(v79 + 12);
  v82 = v81 >> (*(_QWORD *)(v79 + 8) + 1);
  if ( ((2 * *(_DWORD *)(v79 + 4) - 1) & v81) != 0 )
    ++v82;
  *(_DWORD *)(v79 + 24) = v82;
  *(_DWORD *)(v39[2] + 28) = 0;
  v83 = v39[2];
  v84 = *(_DWORD *)(v83 + 4);
  if ( v84 )
  {
    v85 = 0;
    for ( s2b = 0; (unsigned int)s2b < v84; ++s2b )
    {
      v86 = *(_DWORD **)(*(_DWORD *)v83 + v85);
      if ( v86 )
      {
        while ( 1 )
        {
          v87 = (_DWORD *)v86[4];
          v88 = 3 * ((2 * v84 - 1) & v86[7]);
          v89 = (char *)&v80[v88];
          v90 = *((_DWORD *)v89 + 1) + 1;
          *((_DWORD *)v89 + 1) = v90;
          if ( v90 > *(_DWORD *)(v83 + 24) )
          {
            ++*(_DWORD *)(v83 + 28);
            *((_DWORD *)v89 + 2) = sub_49878(*((_DWORD *)v89 + 1), *(_DWORD *)(v39[2] + 24));
          }
          v86[3] = 0;
          v86[4] = v80[v88];
          v91 = v80[v88];
          if ( v91 )
            *(_DWORD *)(v91 + 12) = v86;
          v80[v88] = v86;
          v83 = v39[2];
          if ( !v87 )
            break;
          v84 = *(_DWORD *)(v83 + 4);
          v86 = v87;
        }
        v84 = *(_DWORD *)(v83 + 4);
      }
      v85 += 12;
    }
  }
  free(*(void **)v83);
  *(_DWORD *)(v39[2] + 4) *= 2;
  ++*(_DWORD *)(v39[2] + 8);
  *(_DWORD *)v39[2] = v80;
  v92 = (_DWORD *)v39[2];
  v93 = v92[7];
  v94 = v92[3];
  v95 = v93 > v94 >> 1;
  if ( v93 <= v94 >> 1 )
    v96 = 0;
  else
    v96 = v92[8];
  if ( v95 )
    ++v96;
  v92[8] = v96;
  v97 = v39[2];
  if ( *(_DWORD *)(v97 + 32) > 1u )
    *(_DWORD *)(v97 + 36) = 1;
  if ( pthread_rwlock_wrlock(&stru_73CCC) )
    goto LABEL_81;
LABEL_28:
  dword_73110 = (int)realloc((void *)dword_73110, 4 * (dword_735E8 + dword_6F3A0 + 2));
  if ( pthread_rwlock_unlock(&stru_73CCC) )
    sub_1C70C("add_cgpu", 11059);
  off_6CB70();
  if ( pthread_mutex_lock(&stru_73A00) )
    sub_1BF10("add_cgpu", 11061);
  a1[58] = time(0);
  if ( pthread_mutex_unlock(&stru_73A00) )
    sub_1BF54("add_cgpu", 11063);
  off_6CB70();
  if ( byte_73220 )
  {
    v35 = dword_6F3A0 + dword_735E8;
    ++dword_6F3A0;
  }
  else
  {
    v35 = dword_735E8++;
  }
  *(_DWORD *)(dword_73110 + 4 * v35) = a1;
  if ( dword_735E8 - dword_732BC > dword_6F3A4 )
    dword_6F3A4 = dword_735E8 - dword_732BC;
  return 1;
}
