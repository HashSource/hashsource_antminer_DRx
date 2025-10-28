int __fastcall eth_sha3_512(int a1, unsigned int a2, int a3, unsigned int a4)
{
  _BOOL4 v5; // r3
  char v7; // r3
  _DWORD *v8; // r1
  int v9; // r0
  char v10; // t1
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r9
  int *v14; // r8
  int v15; // r4
  int j; // lr
  int v17; // r0
  int v18; // r12
  int *v19; // r3
  int *v20; // lr
  unsigned int v21; // r0
  _BYTE *v22; // r4
  unsigned int v23; // r5
  unsigned int v24; // r8
  _BYTE *v25; // r4
  int *v26; // r3
  int v27; // r9
  int v28; // r10
  int v29; // r4
  int v30; // r5
  int v31; // r4
  unsigned __int8 *v32; // r8
  int v33; // r0
  unsigned int v34; // r4
  __int16 v35; // r5
  unsigned int v36; // r2
  unsigned __int8 *v37; // r11
  unsigned __int8 *v38; // r10
  __int16 v39; // t1
  int v40; // t1
  int v41; // r1
  int v42; // r12
  unsigned int v43; // r9
  int v44; // r3
  int v45; // r4
  int v46; // r0
  __int64 *v47; // lr
  _QWORD *v48; // r1
  __int64 *v49; // r0
  __int64 v50; // t1
  __int64 *v51; // r12
  int *v52; // r0
  unsigned int v53; // r1
  int v54; // r10
  int v55; // r2
  unsigned int v56; // r3
  _BYTE *v57; // r3
  int v58; // r11
  int v59; // r4
  _BYTE *v60; // r3
  int v61; // r2
  int v62; // r3
  int v63; // r0
  _DWORD *v64; // r3
  bool v65; // cc
  unsigned int v66; // r1
  bool v67; // zf
  _BYTE *v68; // r0
  int v69; // r12
  int v70; // r3
  char v71; // r1
  char v72; // t1
  char v73; // t1
  int v74; // r11
  int v75; // r2
  int v76; // r1
  _DWORD *v77; // r8
  int *v78; // r6
  int v79; // r4
  int v80; // lr
  int v81; // r9
  int v82; // r0
  int v83; // r12
  int *v84; // r3
  int v85; // r11
  int v86; // r12
  int *v87; // lr
  int v88; // r0
  int v89; // r2
  _BYTE *v90; // r1
  unsigned int v91; // r6
  unsigned int v92; // r8
  _BYTE *v93; // r1
  int *v94; // r3
  int v95; // r9
  int v96; // r10
  int v97; // r1
  int v98; // r6
  int v99; // r1
  unsigned __int8 *v100; // r6
  int v101; // r12
  unsigned int v102; // r4
  __int16 v103; // r5
  unsigned int v104; // r1
  unsigned __int8 *v105; // r10
  unsigned __int8 *v106; // r11
  __int16 v107; // t1
  int v108; // t1
  int v109; // r2
  int v110; // r0
  unsigned int v111; // r8
  int v112; // r3
  int v113; // r4
  int v114; // r12
  __int64 *v115; // lr
  _QWORD *v116; // r1
  __int64 *v117; // r0
  __int64 v118; // t1
  __int64 *v119; // r12
  int *v120; // r0
  int v121; // r1
  int v122; // r8
  int v123; // r2
  unsigned int v124; // r3
  _BYTE *v125; // r3
  int v126; // r10
  int v127; // r4
  _BYTE *v128; // r3
  int v129; // r2
  int v130; // r3
  int v131; // r0
  char *v132; // r1
  int v133; // r3
  unsigned int v134; // r2
  char v135; // t1
  _QWORD *v137; // [sp+0h] [bp-12Ch]
  _QWORD *v138; // [sp+0h] [bp-12Ch]
  int v139; // [sp+8h] [bp-124h]
  int v140; // [sp+10h] [bp-11Ch]
  int v141; // [sp+14h] [bp-118h]
  int v142; // [sp+14h] [bp-118h]
  int k; // [sp+18h] [bp-114h]
  unsigned int i; // [sp+1Ch] [bp-110h]
  void *v145; // [sp+20h] [bp-10Ch]
  unsigned __int8 *v146; // [sp+24h] [bp-108h]
  int v147; // [sp+28h] [bp-104h]
  unsigned int v148; // [sp+2Ch] [bp-100h]
  unsigned int v149; // [sp+30h] [bp-FCh]
  int v150; // [sp+34h] [bp-F8h]
  _DWORD v151[10]; // [sp+38h] [bp-F4h] BYREF
  _DWORD s[50]; // [sp+60h] [bp-CCh] BYREF
  _BYTE v153[4]; // [sp+128h] [bp-4h] BYREF

  v149 = a2;
  v150 = a1;
  v147 = a3;
  v148 = a4;
  if ( a2 > 0x40 || !a1 )
    return -1;
  v5 = a4 != 0;
  if ( !a3 && v5 )
    return -1;
  memset(s, 0, sizeof(s));
  if ( a4 <= 0x47 )
  {
    v145 = &unk_17AEF0;
    v146 = (unsigned __int8 *)&unk_17AF0F;
  }
  else
  {
    v7 = 0;
    v145 = &unk_17AEF0;
    v146 = (unsigned __int8 *)&unk_17AF0F;
    while ( 1 )
    {
      v8 = s;
      v9 = v147 - 1;
      while ( 1 )
      {
        v10 = *(_BYTE *)++v9;
        *(_BYTE *)v8 = v7 ^ v10;
        v8 = (_DWORD *)((char *)v8 + 1);
        if ( &s[18] == v8 )
          break;
        v7 = *(_BYTE *)v8;
      }
      memset(v151, 0, sizeof(v151));
      v11 = s[0];
      v12 = s[1];
      v141 = 1551928;
      k = 1;
      for ( i = 0; ; i = (unsigned int)v64 )
      {
        v13 = v151;
        v14 = s;
        v15 = v11;
        for ( j = v12; ; j = v14[1] )
        {
          v17 = 0;
          v18 = 0;
          v19 = v14;
          *(_QWORD *)v13 = 0;
          v13 += 2;
          while ( 1 )
          {
            v19 += 10;
            v17 ^= v15;
            v18 ^= j;
            if ( v14 + 50 == v19 )
              break;
            v15 = *v19;
            j = v19[1];
          }
          *(v13 - 2) = v17;
          *(v13 - 1) = v18;
          v14 += 2;
          if ( s == v13 )
            break;
          v15 = *v14;
        }
        v20 = s;
        v21 = 1;
        v137 = v13;
        while ( 1 )
        {
          v22 = &v153[8 * (v21 % 5)];
          v23 = *((_DWORD *)v22 - 60);
          v24 = *((_DWORD *)v22 - 59);
          v25 = &v153[8 * ((v21 + 3) % 5)];
          v26 = v20;
          v27 = *((_DWORD *)v25 - 60);
          v28 = *((_DWORD *)v25 - 59);
          v29 = 2 * v23;
          v30 = ((2 * v24) | (v23 >> 31)) ^ v28;
          v31 = (v29 | (v24 >> 31)) ^ v27;
          while ( 1 )
          {
            *v26 = v11 ^ v31;
            v26[1] = v12 ^ v30;
            v26 += 10;
            if ( v26 == v20 + 50 )
              break;
            v11 = *v26;
            v12 = v26[1];
          }
          ++v21;
          v20 += 2;
          if ( v21 == 6 )
            break;
          v11 = *v20;
          v12 = v20[1];
        }
        v32 = (unsigned __int8 *)&unk_17AEF8;
        v33 = 1;
        v34 = s[2];
        v35 = 10;
        v36 = s[3];
        v37 = (unsigned __int8 *)&unk_17AF10;
        v38 = v146;
        while ( 1 )
        {
          v41 = -v33 & 0x3F;
          v42 = 2 * v35;
          v43 = s[v42];
          v44 = __PAIR64__(v36, v34) << v33 >> 32;
          v45 = (__PAIR64__(v36, v34) >> v41) | (v34 << v33);
          v46 = v44 | (v36 >> v41);
          v36 = s[v42 + 1];
          s[v42] = v45;
          v34 = v43;
          s[v42 + 1] = v46;
          if ( v38 == v32 )
            break;
          v39 = *++v32;
          v35 = v39;
          v40 = *++v37;
          v33 = v40;
        }
        v151[0] = v43;
        v47 = (__int64 *)s;
        v151[1] = v36;
        do
        {
          v48 = v151;
          v49 = v47;
          do
          {
            v50 = *v49++;
            *v48++ = v50;
          }
          while ( v48 != v137 );
          v51 = v47;
          v52 = v151;
          v53 = 1;
          do
          {
            v54 = *v52;
            v55 = v52[1];
            ++v51;
            v52 += 2;
            v56 = v53 % 5;
            ++v53;
            v57 = &v153[8 * v56];
            v58 = *((_DWORD *)v57 - 60);
            v59 = *((_DWORD *)v57 - 59);
            v60 = &v153[8 * (v53 % 5)];
            v61 = v55 ^ *((_DWORD *)v60 - 59) & ~v59;
            *((_DWORD *)v51 - 2) = v54 ^ *((_DWORD *)v60 - 60) & ~v58;
            *((_DWORD *)v51 - 1) = v61;
          }
          while ( v53 != 6 );
          v47 += 5;
        }
        while ( v153 != (_BYTE *)v47 );
        v62 = v141;
        v11 = k ^ s[0];
        s[0] ^= k;
        v12 = i ^ s[1];
        s[1] ^= i;
        if ( v145 == (void *)v141 )
          break;
        v63 = *(_DWORD *)(v141 + 8);
        v141 += 8;
        v64 = *(_DWORD **)(v62 + 12);
        k = v63;
      }
      v65 = v148 - 72 > 0x47;
      v148 -= 72;
      v147 += 72;
      if ( !v65 )
        break;
      v7 = s[0];
    }
  }
  v66 = v148;
  v67 = v148 == 0;
  *((_BYTE *)s + v148) ^= 1u;
  HIBYTE(s[17]) = ~(HIBYTE(s[17]) ^ 0x7F);
  if ( !v67 )
  {
    v68 = (char *)&v151[9] + 3;
    v69 = v147 - 1;
    v70 = v147 + v66 - 1;
    do
    {
      v72 = *(_BYTE *)++v69;
      v71 = v72;
      v73 = *++v68;
      *v68 = v73 ^ v71;
    }
    while ( v70 != v69 );
  }
  v74 = -858993459;
  memset(v151, 0, sizeof(v151));
  v75 = s[0];
  v76 = s[1];
  v140 = 1551928;
  v142 = 1;
  for ( k = 0; ; k = *(_DWORD *)(v130 + 12) )
  {
    v77 = v151;
    v78 = s;
    v79 = v75;
    v80 = v76;
    v81 = v74;
    i = (unsigned int)s;
    while ( 1 )
    {
      v82 = 0;
      *(_QWORD *)v77 = 0;
      v77 += 2;
      v83 = 0;
      v84 = v78;
      v85 = v81;
      while ( 1 )
      {
        v84 += 10;
        v82 ^= v79;
        v83 ^= v80;
        if ( v78 + 50 == v84 )
          break;
        v79 = *v84;
        v80 = v84[1];
      }
      *(v77 - 2) = v82;
      *(v77 - 1) = v83;
      v78 += 2;
      if ( s == v77 )
        break;
      v79 = *v78;
      v80 = v78[1];
    }
    v86 = v75;
    v87 = s;
    v88 = 1;
    v89 = v76;
    v138 = v77;
    while ( 1 )
    {
      v90 = &v153[8 * (v88 - 5 * ((unsigned int)(((unsigned int)v88 * (unsigned __int64)(unsigned int)v85) >> 32) >> 2))];
      v91 = *((_DWORD *)v90 - 60);
      v92 = *((_DWORD *)v90 - 59);
      v93 = &v153[8
                * (v88
                 + 3
                 - 5 * ((unsigned int)(((unsigned int)(v88 + 3) * (unsigned __int64)(unsigned int)v85) >> 32) >> 2))];
      v94 = v87;
      v95 = *((_DWORD *)v93 - 60);
      v96 = *((_DWORD *)v93 - 59);
      v97 = 2 * v91;
      v98 = ((2 * v92) | (v91 >> 31)) ^ v96;
      v99 = (v97 | (v92 >> 31)) ^ v95;
      while ( 1 )
      {
        *v94 = v86 ^ v99;
        v94 += 10;
        *(v94 - 9) = v89 ^ v98;
        if ( v87 + 50 == v94 )
          break;
        v86 = *v94;
        v89 = v94[1];
      }
      ++v88;
      v87 += 2;
      if ( v88 == 6 )
        break;
      v86 = *v87;
      v89 = v87[1];
    }
    v100 = (unsigned __int8 *)&unk_17AEF8;
    v139 = v85;
    v101 = 1;
    v102 = s[2];
    v103 = 10;
    v104 = s[3];
    v105 = (unsigned __int8 *)&unk_17AF10;
    v106 = v146;
    while ( 1 )
    {
      v109 = -v101 & 0x3F;
      v110 = 2 * v103;
      v111 = s[v110];
      v112 = __PAIR64__(v104, v102) << v101 >> 32;
      v113 = (__PAIR64__(v104, v102) >> v109) | (v102 << v101);
      v114 = v112 | (v104 >> v109);
      v104 = s[v110 + 1];
      s[v110] = v113;
      v102 = v111;
      s[v110 + 1] = v114;
      if ( v106 == v100 )
        break;
      v107 = *++v100;
      v103 = v107;
      v108 = *++v105;
      v101 = v108;
    }
    v74 = v139;
    v115 = (__int64 *)s;
    v151[0] = v111;
    v151[1] = v104;
    do
    {
      v116 = v151;
      v117 = v115;
      do
      {
        v118 = *v117++;
        *v116++ = v118;
      }
      while ( v138 != v116 );
      v119 = v115;
      v120 = v151;
      v121 = 1;
      do
      {
        v122 = *v120;
        v123 = v120[1];
        ++v119;
        v120 += 2;
        v124 = v121 - 5 * ((unsigned int)(((unsigned int)v121 * (unsigned __int64)(unsigned int)v139) >> 32) >> 2);
        ++v121;
        v125 = &v153[8 * v124];
        v126 = *((_DWORD *)v125 - 60);
        v127 = *((_DWORD *)v125 - 59);
        v128 = &v153[8
                   * (v121 - 5
                           * ((unsigned int)(((unsigned int)v121 * (unsigned __int64)(unsigned int)v139) >> 32) >> 2))];
        v129 = v123 ^ *((_DWORD *)v128 - 59) & ~v127;
        *((_DWORD *)v119 - 2) = v122 ^ *((_DWORD *)v128 - 60) & ~v126;
        *((_DWORD *)v119 - 1) = v129;
      }
      while ( v121 != 6 );
      v115 += 5;
    }
    while ( v153 != (_BYTE *)v115 );
    v130 = v140;
    v75 = v142 ^ s[0];
    s[0] ^= v142;
    v76 = k ^ s[1];
    s[1] ^= k;
    if ( v145 == (void *)v140 )
      break;
    v131 = *(_DWORD *)(v140 + 8);
    v140 += 8;
    v142 = v131;
  }
  if ( v149 )
  {
    v132 = (char *)i;
    v133 = v150 - 1;
    v134 = v150 - 1 + v149;
    do
    {
      v135 = *v132++;
      *(_BYTE *)++v133 = v135;
    }
    while ( v134 != v133 );
  }
  return 0;
}
