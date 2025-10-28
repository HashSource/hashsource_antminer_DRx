int __fastcall eth_sha3_256(int a1, unsigned int a2, int a3, unsigned int a4)
{
  _BOOL4 v5; // r3
  int v7; // r6
  char v8; // r3
  _DWORD *v9; // r1
  int v10; // r0
  char v11; // t1
  int v12; // r1
  int v13; // r2
  _DWORD *v14; // r9
  int *v15; // r8
  int v16; // r4
  int i; // lr
  int v18; // r0
  int v19; // r12
  int *v20; // r3
  int *v21; // lr
  int v22; // r0
  unsigned __int64 v23; // r8
  _BYTE *v24; // r4
  unsigned int v25; // r5
  _BYTE *v26; // r4
  int *v27; // r3
  int v28; // r10
  int v29; // r4
  int v30; // r5
  unsigned int v31; // r4
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
  _QWORD *v48; // r8
  _QWORD *v49; // r9
  _QWORD *v50; // r1
  __int64 *v51; // r0
  __int64 v52; // t1
  __int64 *v53; // r12
  int *v54; // r0
  int v55; // r1
  int v56; // r10
  int v57; // r2
  unsigned int v58; // r3
  _BYTE *v59; // r3
  int v60; // r11
  int v61; // r4
  _BYTE *v62; // r3
  int v63; // r2
  int v64; // r3
  int v65; // r0
  _DWORD *v66; // r3
  bool v67; // cc
  unsigned int v68; // r1
  bool v69; // zf
  char *v70; // r0
  int v71; // r12
  int v72; // r3
  char v73; // r1
  char v74; // t1
  char v75; // t1
  int v76; // r11
  int v77; // r2
  int v78; // r1
  _DWORD *v79; // r8
  int *v80; // r6
  int v81; // r4
  int v82; // lr
  int v83; // r9
  int v84; // r0
  int v85; // r12
  int *v86; // r3
  __int64 *v87; // r11
  int v88; // r12
  int *v89; // lr
  int v90; // r0
  int v91; // r2
  _BYTE *v92; // r1
  unsigned int v93; // r6
  unsigned int v94; // r8
  _BYTE *v95; // r1
  int *v96; // r3
  int v97; // r9
  int v98; // r10
  int v99; // r1
  int v100; // r6
  int v101; // r1
  unsigned __int8 *v102; // r6
  int v103; // r12
  unsigned int v104; // r4
  __int16 v105; // r5
  unsigned int v106; // r1
  unsigned __int8 *v107; // r10
  unsigned __int8 *v108; // r11
  __int16 v109; // t1
  int v110; // t1
  int v111; // r2
  int v112; // r0
  unsigned int v113; // r8
  int v114; // r3
  int v115; // r4
  int v116; // r12
  _QWORD *v117; // r6
  __int64 *v118; // lr
  _QWORD *v119; // r9
  _QWORD *v120; // r1
  __int64 *v121; // r0
  __int64 v122; // t1
  __int64 *v123; // r12
  int *v124; // r0
  int v125; // r1
  int v126; // r8
  int v127; // r2
  unsigned int v128; // r3
  _BYTE *v129; // r3
  int v130; // r10
  int v131; // r4
  _BYTE *v132; // r3
  int v133; // r2
  int v134; // r3
  int v135; // r0
  int v136; // r3
  char *v137; // r1
  int v138; // r3
  unsigned int v139; // r2
  char v140; // t1
  unsigned __int64 v142; // [sp+0h] [bp-12Ch]
  __int64 *v143; // [sp+8h] [bp-124h]
  void *v144; // [sp+Ch] [bp-120h]
  int v145; // [sp+10h] [bp-11Ch]
  int v146; // [sp+14h] [bp-118h]
  int j; // [sp+18h] [bp-114h]
  unsigned int v148; // [sp+1Ch] [bp-110h]
  unsigned __int8 *v149; // [sp+20h] [bp-10Ch]
  void *v150; // [sp+24h] [bp-108h]
  int v151; // [sp+28h] [bp-104h]
  unsigned int v152; // [sp+2Ch] [bp-100h]
  unsigned int v153; // [sp+30h] [bp-FCh]
  int v154; // [sp+34h] [bp-F8h]
  unsigned int v155; // [sp+38h] [bp-F4h] BYREF
  unsigned int v156; // [sp+3Ch] [bp-F0h]
  char v157; // [sp+5Fh] [bp-CDh] BYREF
  _DWORD s[50]; // [sp+60h] [bp-CCh] BYREF
  _BYTE v159[4]; // [sp+128h] [bp-4h] BYREF

  v153 = a2;
  v154 = a1;
  v151 = a3;
  v152 = a4;
  if ( a2 > 0x20 || !a1 )
    return -1;
  v5 = a4 != 0;
  if ( !a3 && v5 )
    return -1;
  memset(s, 0, sizeof(s));
  if ( a4 <= 0x87 )
  {
    v144 = &v155;
    v150 = &unk_1795C8;
    v149 = (unsigned __int8 *)&unk_1795E7;
  }
  else
  {
    v7 = -858993459;
    v8 = 0;
    v150 = &unk_1795C8;
    v144 = &v155;
    v149 = (unsigned __int8 *)&unk_1795E7;
    while ( 1 )
    {
      v9 = s;
      v10 = v151 - 1;
      while ( 1 )
      {
        v11 = *(_BYTE *)++v10;
        *(_BYTE *)v9 = v8 ^ v11;
        v9 = (_DWORD *)((char *)v9 + 1);
        if ( &s[34] == v9 )
          break;
        v8 = *(_BYTE *)v9;
      }
      memset(v144, 0, 0x28u);
      v12 = s[0];
      v13 = s[1];
      v146 = 1545488;
      j = 1;
      v148 = 0;
      v143 = (__int64 *)v159;
      while ( 1 )
      {
        v14 = v144;
        v15 = s;
        v16 = v12;
        for ( i = v13; ; i = v15[1] )
        {
          v18 = 0;
          v19 = 0;
          v20 = v15;
          *(_QWORD *)v14 = 0;
          v14 += 2;
          while ( 1 )
          {
            v20 += 10;
            v18 ^= v16;
            v19 ^= i;
            if ( v15 + 50 == v20 )
              break;
            v16 = *v20;
            i = v20[1];
          }
          *(v14 - 2) = v18;
          *(v14 - 1) = v19;
          v15 += 2;
          if ( s == v14 )
            break;
          v16 = *v15;
        }
        v21 = s;
        v22 = 1;
        LODWORD(v142) = v14;
        while ( 1 )
        {
          v23 = (unsigned int)(v22 + 3) * (unsigned __int64)(unsigned int)v7;
          v24 = &v159[8
                    * (v22 - 5 * ((unsigned int)(((unsigned int)v22 * (unsigned __int64)(unsigned int)v7) >> 32) >> 2))];
          v25 = *((_DWORD *)v24 - 60);
          LODWORD(v23) = *((_DWORD *)v24 - 59);
          v26 = &v159[8 * (v22 + 3 - 5 * (HIDWORD(v23) >> 2))];
          v27 = v21;
          HIDWORD(v23) = *((_DWORD *)v26 - 60);
          v28 = *((_DWORD *)v26 - 59);
          v29 = 2 * v25;
          v30 = ((2 * v23) | (v25 >> 31)) ^ v28;
          v31 = (v29 | ((unsigned int)v23 >> 31)) ^ HIDWORD(v23);
          while ( 1 )
          {
            *v27 = v12 ^ v31;
            v27[1] = v13 ^ v30;
            v27 += 10;
            if ( v27 == v21 + 50 )
              break;
            v12 = *v27;
            v13 = v27[1];
          }
          ++v22;
          v21 += 2;
          if ( v22 == 6 )
            break;
          v12 = *v21;
          v13 = v21[1];
        }
        v32 = (unsigned __int8 *)&unk_1795D0;
        v33 = 1;
        v34 = s[2];
        v35 = 10;
        v36 = s[3];
        v37 = (unsigned __int8 *)&unk_1795E8;
        v38 = v149;
        v145 = v7;
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
        v155 = v43;
        v47 = (__int64 *)s;
        v7 = v145;
        v48 = (_QWORD *)v142;
        v49 = v144;
        v156 = v36;
        do
        {
          v50 = v49;
          v51 = v47;
          do
          {
            v52 = *v51++;
            *v50++ = v52;
          }
          while ( v50 != v48 );
          v53 = v47;
          v54 = (int *)v49;
          v55 = 1;
          do
          {
            v56 = *v54;
            v57 = v54[1];
            ++v53;
            v54 += 2;
            v58 = v55 - 5 * ((unsigned int)(((unsigned int)v55 * (unsigned __int64)(unsigned int)v7) >> 32) >> 2);
            v142 = (unsigned int)++v55 * (unsigned __int64)(unsigned int)v7;
            v59 = &v159[8 * v58];
            v60 = *((_DWORD *)v59 - 60);
            v61 = *((_DWORD *)v59 - 59);
            v62 = &v159[8 * (v55 - 5 * (HIDWORD(v142) >> 2))];
            v63 = v57 ^ *((_DWORD *)v62 - 59) & ~v61;
            *((_DWORD *)v53 - 2) = v56 ^ *((_DWORD *)v62 - 60) & ~v60;
            *((_DWORD *)v53 - 1) = v63;
          }
          while ( v55 != 6 );
          v47 += 5;
        }
        while ( v143 != v47 );
        v64 = v146;
        v12 = j ^ s[0];
        s[0] ^= j;
        v13 = v148 ^ s[1];
        s[1] ^= v148;
        if ( v150 == (void *)v146 )
          break;
        v65 = *(_DWORD *)(v146 + 8);
        v146 += 8;
        v66 = *(_DWORD **)(v64 + 12);
        j = v65;
        v148 = (unsigned int)v66;
      }
      v67 = v152 - 136 > 0x87;
      v152 -= 136;
      v151 += 136;
      if ( !v67 )
        break;
      v8 = s[0];
    }
  }
  v68 = v152;
  v69 = v152 == 0;
  *((_BYTE *)s + v152) ^= 1u;
  HIBYTE(s[33]) = ~(HIBYTE(s[33]) ^ 0x7F);
  if ( !v69 )
  {
    v70 = &v157;
    v71 = v151 - 1;
    v72 = v151 + v68 - 1;
    do
    {
      v74 = *(_BYTE *)++v71;
      v73 = v74;
      v75 = *++v70;
      *v70 = v75 ^ v73;
    }
    while ( v72 != v71 );
  }
  v76 = -858993459;
  memset(v144, 0, 0x28u);
  v77 = s[0];
  v78 = s[1];
  v145 = 1545488;
  v146 = 1;
  for ( j = 0; ; j = v136 )
  {
    v79 = v144;
    v80 = s;
    v81 = v77;
    v82 = v78;
    v83 = v76;
    v148 = (unsigned int)s;
    while ( 1 )
    {
      v84 = 0;
      *(_QWORD *)v79 = 0;
      v79 += 2;
      v85 = 0;
      v86 = v80;
      v87 = (__int64 *)v83;
      while ( 1 )
      {
        v86 += 10;
        v84 ^= v81;
        v85 ^= v82;
        if ( v80 + 50 == v86 )
          break;
        v81 = *v86;
        v82 = v86[1];
      }
      *(v79 - 2) = v84;
      *(v79 - 1) = v85;
      v80 += 2;
      if ( s == v79 )
        break;
      v81 = *v80;
      v82 = v80[1];
    }
    v88 = v77;
    v89 = s;
    v90 = 1;
    v91 = v78;
    LODWORD(v142) = v79;
    while ( 1 )
    {
      v92 = &v159[8 * (v90 - 5 * ((unsigned int)(((unsigned int)v90 * (unsigned __int64)(unsigned int)v87) >> 32) >> 2))];
      v93 = *((_DWORD *)v92 - 60);
      v94 = *((_DWORD *)v92 - 59);
      v95 = &v159[8
                * (v90
                 + 3
                 - 5 * ((unsigned int)(((unsigned int)(v90 + 3) * (unsigned __int64)(unsigned int)v87) >> 32) >> 2))];
      v96 = v89;
      v97 = *((_DWORD *)v95 - 60);
      v98 = *((_DWORD *)v95 - 59);
      v99 = 2 * v93;
      v100 = ((2 * v94) | (v93 >> 31)) ^ v98;
      v101 = (v99 | (v94 >> 31)) ^ v97;
      while ( 1 )
      {
        *v96 = v88 ^ v101;
        v96 += 10;
        *(v96 - 9) = v91 ^ v100;
        if ( v89 + 50 == v96 )
          break;
        v88 = *v96;
        v91 = v96[1];
      }
      ++v90;
      v89 += 2;
      if ( v90 == 6 )
        break;
      v88 = *v89;
      v91 = v89[1];
    }
    v102 = (unsigned __int8 *)&unk_1795D0;
    v143 = v87;
    v103 = 1;
    v104 = s[2];
    v105 = 10;
    v106 = s[3];
    v107 = (unsigned __int8 *)&unk_1795E8;
    v108 = v149;
    while ( 1 )
    {
      v111 = -v103 & 0x3F;
      v112 = 2 * v105;
      v113 = s[v112];
      v114 = __PAIR64__(v106, v104) << v103 >> 32;
      v115 = (__PAIR64__(v106, v104) >> v111) | (v104 << v103);
      v116 = v114 | (v106 >> v111);
      v106 = s[v112 + 1];
      s[v112] = v115;
      v104 = v113;
      s[v112 + 1] = v116;
      if ( v108 == v102 )
        break;
      v109 = *++v102;
      v105 = v109;
      v110 = *++v107;
      v103 = v110;
    }
    v76 = (int)v143;
    v117 = (_QWORD *)v142;
    v118 = (__int64 *)s;
    v143 = (__int64 *)v159;
    v119 = v144;
    v155 = v113;
    v156 = v106;
    do
    {
      v120 = v119;
      v121 = v118;
      do
      {
        v122 = *v121++;
        *v120++ = v122;
      }
      while ( v117 != v120 );
      v123 = v118;
      v124 = (int *)v119;
      v125 = 1;
      do
      {
        v126 = *v124;
        v127 = v124[1];
        ++v123;
        v124 += 2;
        v128 = v125 - 5 * ((unsigned int)(((unsigned int)v125 * (unsigned __int64)(unsigned int)v76) >> 32) >> 2);
        v142 = (unsigned int)++v125 * (unsigned __int64)(unsigned int)v76;
        v129 = &v159[8 * v128];
        v130 = *((_DWORD *)v129 - 60);
        v131 = *((_DWORD *)v129 - 59);
        v132 = &v159[8 * (v125 - 5 * (HIDWORD(v142) >> 2))];
        v133 = v127 ^ *((_DWORD *)v132 - 59) & ~v131;
        *((_DWORD *)v123 - 2) = v126 ^ *((_DWORD *)v132 - 60) & ~v130;
        *((_DWORD *)v123 - 1) = v133;
      }
      while ( v125 != 6 );
      v118 += 5;
    }
    while ( v143 != v118 );
    v134 = v145;
    v77 = v146 ^ s[0];
    s[0] ^= v146;
    v78 = j ^ s[1];
    s[1] ^= j;
    if ( v150 == (void *)v145 )
      break;
    v135 = *(_DWORD *)(v145 + 8);
    v145 += 8;
    v136 = *(_DWORD *)(v134 + 12);
    v146 = v135;
  }
  if ( v153 )
  {
    v137 = (char *)v148;
    v138 = v154 - 1;
    v139 = v154 - 1 + v153;
    do
    {
      v140 = *v137++;
      *(_BYTE *)++v138 = v140;
    }
    while ( v139 != v138 );
  }
  return 0;
}
