int __fastcall sortValidator(int *a1, int a2)
{
  int v2; // r4
  signed int v4; // r11
  int v5; // r6
  int v6; // r0
  int *v7; // r12
  int v8; // r0
  int v9; // r1
  int v10; // t1
  int v11; // r3
  int v12; // r4
  int v14; // r4
  int *v15; // r10
  int v16; // r3
  int v17; // r6
  char *v18; // r9
  unsigned int v19; // t1
  int v20; // r0
  int v21; // r1
  int v22; // r5
  char *v23; // r2
  _BYTE *i; // r1
  char v25; // t1
  _BYTE *j; // r3
  int v27; // t1
  size_t v28; // r9
  char *v29; // r10
  int v30; // r8
  char *v31; // r5
  char *v32; // r11
  int v33; // r4
  char *v34; // r0
  _BYTE *v35; // r12
  char *v36; // lr
  char v37; // r3
  char v38; // t1
  char v39; // t1
  int v40; // r4
  char *v41; // r0
  int v42; // r4
  char *v43; // r1
  bool v44; // zf
  char *v45; // r3
  char *v46; // r2
  unsigned int *v47; // r9
  unsigned int v48; // t1
  int v49; // r10
  unsigned int *v50; // r9
  int v51; // r6
  unsigned int *v52; // r8
  char *v53; // r5
  int v54; // t1
  int v55; // r0
  int v56; // r1
  int v57; // r4
  unsigned int v58; // r4
  int v59; // r0
  void *v60; // r0
  char *v61; // r10
  size_t v62; // r9
  int v63; // r8
  char *v64; // r11
  char *v65; // r5
  int v66; // r4
  char *v67; // r0
  _BYTE *v68; // r12
  char *v69; // lr
  char v70; // r3
  char v71; // t1
  char v72; // t1
  int v73; // r4
  char *v74; // r0
  size_t v75; // r4
  char *v76; // r1
  char *v77; // r3
  int v78; // lr
  char *v79; // r6
  unsigned int v80; // r2
  unsigned int v81; // r3
  char *v82; // r0
  char *v83; // r4
  int v84; // r1
  void *v85; // r0
  void *v86; // r0
  int v87; // r1
  int v88; // r2
  int v89; // r3
  int v90; // r1
  int v91; // r2
  int v92; // r3
  char *v93; // r3
  int v94; // t1
  unsigned int v95; // [sp+Ch] [bp-5E4h]
  int v96; // [sp+Ch] [bp-5E4h]
  void *v97; // [sp+10h] [bp-5E0h]
  unsigned int v98; // [sp+10h] [bp-5E0h]
  int v99; // [sp+14h] [bp-5DCh]
  int v100; // [sp+14h] [bp-5DCh]
  unsigned int v101; // [sp+18h] [bp-5D8h]
  int v102; // [sp+1Ch] [bp-5D4h]
  int v103; // [sp+1Ch] [bp-5D4h]
  int v104; // [sp+20h] [bp-5D0h]
  char *ptr; // [sp+24h] [bp-5CCh]
  char *v106; // [sp+28h] [bp-5C8h]
  int v107; // [sp+28h] [bp-5C8h]
  unsigned int nmemb; // [sp+2Ch] [bp-5C4h]
  size_t nmemba; // [sp+2Ch] [bp-5C4h]
  size_t v110; // [sp+34h] [bp-5BCh]
  unsigned int *v111; // [sp+38h] [bp-5B8h]
  int v112; // [sp+3Ch] [bp-5B4h]
  signed int v113; // [sp+4Ch] [bp-5A4h]
  _BYTE s[30]; // [sp+50h] [bp-5A0h] BYREF
  char v115; // [sp+6Eh] [bp-582h] BYREF
  _BYTE v116[32]; // [sp+70h] [bp-580h] BYREF
  _BYTE v117[31]; // [sp+90h] [bp-560h] BYREF
  char v118; // [sp+AFh] [bp-541h] BYREF
  _BYTE src[1328]; // [sp+B0h] [bp-540h] BYREF
  char v120; // [sp+5ECh] [bp-4h] BYREF
  char v121; // [sp+5EFh] [bp-1h] BYREF
  _DWORD v122[508]; // [sp+5F0h] [bp+0h] BYREF
  int v123; // [sp+DECh] [bp+7FCh] BYREF
  _BYTE v124[2000]; // [sp+DF0h] [bp+800h] BYREF
  int v125; // [sp+15ECh] [bp+FFCh] BYREF

  v2 = a1[1];
  v4 = *a1;
  v5 = v2 + 1;
  v97 = (void *)a1[2];
  v6 = sub_146690(*a1, v2 + 1);
  compare_size = 3;
  v95 = v6;
  expandArray(a2, ((v6 + 1) << v2) / 8, (int)v122, 2048, v6 + 1, 1u);
  memset(s, 0, sizeof(s));
  ptr = (char *)malloc(0x4400u);
  v106 = (char *)malloc(0x4400u);
  memset(v116, 0, 0x1Eu);
  v7 = v122;
  v8 = 0;
  while ( ++v8 != 512 )
  {
    v9 = *v7;
    v10 = v7[1];
    ++v7;
    if ( v9 == v10 )
    {
LABEL_7:
      v12 = 1;
      goto LABEL_8;
    }
    v11 = v8;
    while ( ++v11 != 512 )
    {
      if ( v9 == v122[v11] )
        goto LABEL_7;
    }
  }
  v14 = 0;
  v15 = (int *)&v120;
  v16 = v95 + 7;
  if ( (int)(v95 + 7) < 0 )
    v16 = v95 + 14;
  v17 = v5 * (v16 >> 3);
  v18 = ptr;
  v101 = sub_146690(512, v4);
  v99 = v4 / 8;
  v104 = v17 + 4;
  v102 = (int)(v101 * v4) / 8;
  do
  {
    v19 = v15[1];
    ++v15;
    v20 = sub_146924(bswap32(v19), v101);
    v22 = v4 * v21;
    sub_E2CBC(v97, v20, v124, v102);
    expandArray((int)&v124[v22 / 8], v4 / 8, (int)src, v17, v95, 0);
    if ( v17 )
    {
      v23 = src;
      for ( i = s; ; LOBYTE(v14) = *i )
      {
        v25 = *v23++;
        *i++ = v14 ^ v25;
        if ( v23 == &src[v17] )
          break;
      }
      v14 = s[0];
    }
    memcpy(v18, src, v17);
    *(_DWORD *)&v18[v17] = *v15;
    v18 += v104;
  }
  while ( v15 != &v123 );
  for ( j = s; ; ++j )
  {
    if ( v14 )
    {
      v12 = 2;
      goto LABEL_8;
    }
    if ( j == &s[29] )
      break;
    v27 = (unsigned __int8)j[1];
    v14 = v27;
  }
  v28 = 4;
  memset(s, 0, sizeof(s));
  v29 = v106;
  v113 = v4;
  v112 = 9;
  nmemb = 512;
  while ( 1 )
  {
    v30 = 0;
    qsort(ptr, nmemb, v17 + v28, sub_E2CAC);
    v107 = 2 * (v17 + v28);
    v31 = &ptr[v17 + v28 + v17];
    v32 = &ptr[v17];
    nmemb = ((nmemb - 1) >> 1) + 1;
    do
    {
      v33 = 2 * v30;
      if ( v17 )
      {
        v34 = &v31[-v17];
        v35 = v116;
        v36 = &v32[~v17];
        do
        {
          v38 = *v34++;
          v37 = v38;
          v39 = *++v36;
          *v35++ = v37 ^ v39;
        }
        while ( v31 != v34 );
      }
      ++v30;
      v40 = (v17 + v28 + v28) * (v33 >> 1);
      v41 = &v29[v40];
      v42 = v40 + v17;
      memcpy(v41, v116, v17);
      v43 = v32;
      v32 += v107;
      memcpy(&v29[v42], v43, v28);
      memcpy(&v29[v42 + v28], v31, v28);
      v31 += v107;
    }
    while ( v30 != nmemb );
    v28 *= 2;
    v44 = v112-- == 1;
    compare_size += 3;
    if ( v44 )
      break;
    v45 = ptr;
    ptr = v29;
    v29 = v45;
  }
  v46 = &v29[v17 - 4];
  v47 = (unsigned int *)&v123;
  v106 = v29;
  do
  {
    v48 = *((_DWORD *)v46 + 1);
    v46 += 4;
    v47[1] = bswap32(v48);
    ++v47;
  }
  while ( &v125 != (int *)v47 );
  v49 = 0;
  v110 = v17;
  v111 = v47;
  do
  {
    v50 = (unsigned int *)v124;
    v51 = 0;
    do
    {
      v51 += 2 << v49;
      sort_pair(v50, 1 << v49);
      v50 += 2 << v49;
    }
    while ( v51 < 512 );
    ++v49;
  }
  while ( v49 != 9 );
  v52 = (unsigned int *)&v123;
  v53 = v106;
  do
  {
    v54 = v52[1];
    ++v52;
    v55 = sub_146924(v54, v101);
    v57 = v113 * v56;
    sub_E2CBC(v97, v55, src, v102);
    expandArray((int)&src[v57 / 8], v99, (int)v117, v110, v95, 0);
    v58 = *v52;
    memcpy(v53, v117, v110);
    *(_DWORD *)&v53[v110] = bswap32(v58);
    v59 = (int)v53;
    v53 += v104;
    v60 = abin2hex(v59, 34);
    free(v60);
  }
  while ( v52 != v111 );
  v61 = ptr;
  v62 = 4;
  v98 = 512;
  v103 = compare_size + 3;
  nmemba = compare_size + 30;
  while ( 1 )
  {
    v63 = 0;
    v100 = v110 + 2 * v62;
    v64 = &v106[v110];
    v65 = &v106[v110 + v100 - v62];
    v98 = ((v98 - 1) >> 1) + 1;
    v96 = 2 * (v100 - v62);
    do
    {
      v66 = 2 * v63;
      if ( v110 )
      {
        v67 = &v65[-v110];
        v68 = v116;
        v69 = &v64[~v110];
        do
        {
          v71 = *v67++;
          v70 = v71;
          v72 = *++v69;
          *v68++ = v70 ^ v72;
        }
        while ( v65 != v67 );
      }
      ++v63;
      v73 = v100 * (v66 >> 1);
      v74 = &v61[v73];
      v75 = v73 + v110;
      memcpy(v74, v116, v110);
      v76 = v64;
      v64 += v96;
      memcpy(&v61[v75], v76, v62);
      memcpy(&v61[v75 + v62], v65, v62);
      v65 += v96;
    }
    while ( v98 != v63 );
    v62 *= 2;
    compare_size = v103;
    v103 += 3;
    if ( nmemba == v103 )
      break;
    v77 = v106;
    v106 = v61;
    v61 = v77;
  }
  v78 = 0;
  v79 = &v61[v110];
  v80 = 0;
  v81 = 0;
  v82 = &v118;
  ptr = v61;
  do
  {
    if ( v81 <= 7 )
    {
      v83 = &v79[v78];
      v81 += 21;
      v84 = (unsigned __int8)v79[v78 + 3];
      v78 += 4;
      v80 = v84 | (v80 << 21) | ((unsigned __int8)v83[2] << 8) | ((v83[1] & 0x1F) << 16);
    }
    v81 -= 8;
    *++v82 = v80 >> v81;
  }
  while ( &v121 != v82 );
  v85 = abin2hex((int)src, 1344);
  free(v85);
  v86 = abin2hex((int)v61, v100);
  free(v86);
  v87 = *((_DWORD *)v61 + 1);
  v88 = *((_DWORD *)v61 + 2);
  v89 = *((_DWORD *)v61 + 3);
  *(_DWORD *)s = *(_DWORD *)v61;
  *(_DWORD *)&s[4] = v87;
  *(_DWORD *)&s[8] = v88;
  *(_DWORD *)&s[12] = v89;
  v90 = *((_DWORD *)v61 + 5);
  v91 = *((_DWORD *)v61 + 6);
  v92 = *((_DWORD *)v61 + 7);
  *(_DWORD *)&s[16] = *((_DWORD *)v61 + 4);
  *(_DWORD *)&s[20] = v90;
  *(_DWORD *)&s[24] = v91;
  *(_WORD *)&s[28] = v92;
  v93 = s;
  while ( 1 )
  {
    v94 = (unsigned __int8)*v93++;
    v12 = v94;
    if ( v94 )
      break;
    if ( &v115 == v93 )
      goto LABEL_8;
  }
  v12 = 3;
LABEL_8:
  free(ptr);
  free(v106);
  return v12;
}
