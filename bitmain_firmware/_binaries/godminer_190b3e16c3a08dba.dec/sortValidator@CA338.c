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
  int (*v29)(const void *, const void *); // r3
  char *v30; // r10
  int v31; // r8
  char *v32; // r5
  char *v33; // r11
  int v34; // r4
  char *v35; // r0
  _BYTE *v36; // r12
  char *v37; // lr
  char v38; // r3
  char v39; // t1
  char v40; // t1
  int v41; // r4
  char *v42; // r0
  int v43; // r4
  char *v44; // r1
  bool v45; // zf
  char *v46; // r3
  char *v47; // r2
  unsigned int *v48; // r9
  unsigned int v49; // t1
  int v50; // r10
  unsigned int *v51; // r9
  int v52; // r6
  unsigned int *v53; // r8
  char *v54; // r5
  int v55; // t1
  int v56; // r0
  int v57; // r1
  int v58; // r4
  unsigned int v59; // r4
  int v60; // r0
  void *v61; // r0
  char *v62; // r10
  size_t v63; // r9
  int v64; // r8
  char *v65; // r11
  char *v66; // r5
  int v67; // r4
  char *v68; // r0
  _BYTE *v69; // r12
  char *v70; // lr
  char v71; // r3
  char v72; // t1
  char v73; // t1
  int v74; // r4
  char *v75; // r0
  size_t v76; // r4
  char *v77; // r1
  char *v78; // r3
  int v79; // lr
  char *v80; // r6
  unsigned int v81; // r2
  unsigned int v82; // r3
  char *v83; // r0
  char *v84; // r4
  int v85; // r1
  void *v86; // r0
  void *v87; // r0
  int v88; // r1
  int v89; // r2
  int v90; // r3
  int v91; // r1
  int v92; // r2
  int v93; // r3
  char *v94; // r3
  int v95; // t1
  unsigned int v96; // [sp+Ch] [bp-5E4h]
  int v97; // [sp+Ch] [bp-5E4h]
  void *v98; // [sp+10h] [bp-5E0h]
  unsigned int v99; // [sp+10h] [bp-5E0h]
  int v100; // [sp+14h] [bp-5DCh]
  int v101; // [sp+14h] [bp-5DCh]
  unsigned int v102; // [sp+18h] [bp-5D8h]
  int v103; // [sp+1Ch] [bp-5D4h]
  int v104; // [sp+1Ch] [bp-5D4h]
  int v105; // [sp+20h] [bp-5D0h]
  char *ptr; // [sp+24h] [bp-5CCh]
  char *v107; // [sp+28h] [bp-5C8h]
  int v108; // [sp+28h] [bp-5C8h]
  unsigned int nmemb; // [sp+2Ch] [bp-5C4h]
  size_t nmemba; // [sp+2Ch] [bp-5C4h]
  size_t v111; // [sp+34h] [bp-5BCh]
  unsigned int *v112; // [sp+38h] [bp-5B8h]
  int v113; // [sp+3Ch] [bp-5B4h]
  int (*compar)(const void *, const void *); // [sp+44h] [bp-5ACh]
  signed int v115; // [sp+4Ch] [bp-5A4h]
  _BYTE s[30]; // [sp+50h] [bp-5A0h] BYREF
  char v117; // [sp+6Eh] [bp-582h] BYREF
  _BYTE v118[32]; // [sp+70h] [bp-580h] BYREF
  _BYTE v119[31]; // [sp+90h] [bp-560h] BYREF
  char v120; // [sp+AFh] [bp-541h] BYREF
  _BYTE src[1328]; // [sp+B0h] [bp-540h] BYREF
  char v122; // [sp+5ECh] [bp-4h] BYREF
  char v123; // [sp+5EFh] [bp-1h] BYREF
  _DWORD v124[508]; // [sp+5F0h] [bp+0h] BYREF
  int v125; // [sp+DECh] [bp+7FCh] BYREF
  _BYTE v126[2000]; // [sp+DF0h] [bp+800h] BYREF
  int v127; // [sp+15ECh] [bp+FFCh] BYREF

  v2 = a1[1];
  v4 = *a1;
  v5 = v2 + 1;
  v98 = (void *)a1[2];
  v6 = sub_12DB40(*a1, v2 + 1);
  compare_size = 3;
  v96 = v6;
  expandArray(a2, ((v6 + 1) << v2) / 8, (int)v124, 2048, v6 + 1, 1u);
  memset(s, 0, sizeof(s));
  ptr = (char *)malloc(0x4400u);
  v107 = (char *)malloc(0x4400u);
  memset(v118, 0, 0x1Eu);
  v7 = v124;
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
      if ( v9 == v124[v11] )
        goto LABEL_7;
    }
  }
  v14 = 0;
  v15 = (int *)&v122;
  v16 = v96 + 7;
  if ( (int)(v96 + 7) < 0 )
    v16 = v96 + 14;
  v17 = v5 * (v16 >> 3);
  v18 = ptr;
  v102 = sub_12DB40(512, v4);
  v100 = v4 / 8;
  v105 = v17 + 4;
  v103 = (int)(v102 * v4) / 8;
  do
  {
    v19 = v15[1];
    ++v15;
    v20 = sub_12DDD4(bswap32(v19), v102);
    v22 = v4 * v21;
    sub_CA16C(v98, v20, v126, v103);
    expandArray((int)&v126[v22 / 8], v4 / 8, (int)src, v17, v96, 0);
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
    v18 += v105;
  }
  while ( v15 != &v125 );
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
  LOWORD(v29) = -24228;
  v30 = v107;
  HIWORD(v29) = (unsigned int)&loc_CA1FC >> 16;
  v115 = v4;
  compar = v29;
  v113 = 9;
  nmemb = 512;
  while ( 1 )
  {
    v31 = 0;
    qsort(ptr, nmemb, v17 + v28, compar);
    v108 = 2 * (v17 + v28);
    v32 = &ptr[v17 + v28 + v17];
    v33 = &ptr[v17];
    nmemb = ((nmemb - 1) >> 1) + 1;
    do
    {
      v34 = 2 * v31;
      if ( v17 )
      {
        v35 = &v32[-v17];
        v36 = v118;
        v37 = &v33[~v17];
        do
        {
          v39 = *v35++;
          v38 = v39;
          v40 = *++v37;
          *v36++ = v38 ^ v40;
        }
        while ( v32 != v35 );
      }
      ++v31;
      v41 = (v17 + v28 + v28) * (v34 >> 1);
      v42 = &v30[v41];
      v43 = v41 + v17;
      memcpy(v42, v118, v17);
      v44 = v33;
      v33 += v108;
      memcpy(&v30[v43], v44, v28);
      memcpy(&v30[v43 + v28], v32, v28);
      v32 += v108;
    }
    while ( v31 != nmemb );
    v28 *= 2;
    v45 = v113-- == 1;
    compare_size += 3;
    if ( v45 )
      break;
    v46 = ptr;
    ptr = v30;
    v30 = v46;
  }
  v47 = &v30[v17 - 4];
  v48 = (unsigned int *)&v125;
  v107 = v30;
  do
  {
    v49 = *((_DWORD *)v47 + 1);
    v47 += 4;
    v48[1] = bswap32(v49);
    ++v48;
  }
  while ( &v127 != (int *)v48 );
  v50 = 0;
  v111 = v17;
  v112 = v48;
  do
  {
    v51 = (unsigned int *)v126;
    v52 = 0;
    do
    {
      v52 += 2 << v50;
      sort_pair(v51, 1 << v50);
      v51 += 2 << v50;
    }
    while ( v52 < 512 );
    ++v50;
  }
  while ( v50 != 9 );
  v53 = (unsigned int *)&v125;
  v54 = v107;
  do
  {
    v55 = v53[1];
    ++v53;
    v56 = sub_12DDD4(v55, v102);
    v58 = v115 * v57;
    sub_CA16C(v98, v56, src, v103);
    expandArray((int)&src[v58 / 8], v100, (int)v119, v111, v96, 0);
    v59 = *v53;
    memcpy(v54, v119, v111);
    *(_DWORD *)&v54[v111] = bswap32(v59);
    v60 = (int)v54;
    v54 += v105;
    v61 = abin2hex(v60, 34);
    free(v61);
  }
  while ( v53 != v112 );
  v62 = ptr;
  v63 = 4;
  v99 = 512;
  v104 = compare_size + 3;
  nmemba = compare_size + 30;
  while ( 1 )
  {
    v64 = 0;
    v101 = v111 + 2 * v63;
    v65 = &v107[v111];
    v66 = &v107[v111 + v101 - v63];
    v99 = ((v99 - 1) >> 1) + 1;
    v97 = 2 * (v101 - v63);
    do
    {
      v67 = 2 * v64;
      if ( v111 )
      {
        v68 = &v66[-v111];
        v69 = v118;
        v70 = &v65[~v111];
        do
        {
          v72 = *v68++;
          v71 = v72;
          v73 = *++v70;
          *v69++ = v71 ^ v73;
        }
        while ( v66 != v68 );
      }
      ++v64;
      v74 = v101 * (v67 >> 1);
      v75 = &v62[v74];
      v76 = v74 + v111;
      memcpy(v75, v118, v111);
      v77 = v65;
      v65 += v97;
      memcpy(&v62[v76], v77, v63);
      memcpy(&v62[v76 + v63], v66, v63);
      v66 += v97;
    }
    while ( v99 != v64 );
    v63 *= 2;
    compare_size = v104;
    v104 += 3;
    if ( nmemba == v104 )
      break;
    v78 = v107;
    v107 = v62;
    v62 = v78;
  }
  v79 = 0;
  v80 = &v62[v111];
  v81 = 0;
  v82 = 0;
  v83 = &v120;
  ptr = v62;
  do
  {
    if ( v82 <= 7 )
    {
      v84 = &v80[v79];
      v82 += 21;
      v85 = (unsigned __int8)v80[v79 + 3];
      v79 += 4;
      v81 = v85 | (v81 << 21) | ((unsigned __int8)v84[2] << 8) | ((v84[1] & 0x1F) << 16);
    }
    v82 -= 8;
    *++v83 = v81 >> v82;
  }
  while ( &v123 != v83 );
  v86 = abin2hex((int)src, 1344);
  free(v86);
  v87 = abin2hex((int)v62, v101);
  free(v87);
  v88 = *((_DWORD *)v62 + 1);
  v89 = *((_DWORD *)v62 + 2);
  v90 = *((_DWORD *)v62 + 3);
  *(_DWORD *)s = *(_DWORD *)v62;
  *(_DWORD *)&s[4] = v88;
  *(_DWORD *)&s[8] = v89;
  *(_DWORD *)&s[12] = v90;
  v91 = *((_DWORD *)v62 + 5);
  v92 = *((_DWORD *)v62 + 6);
  v93 = *((_DWORD *)v62 + 7);
  *(_DWORD *)&s[16] = *((_DWORD *)v62 + 4);
  *(_DWORD *)&s[20] = v91;
  *(_DWORD *)&s[24] = v92;
  *(_WORD *)&s[28] = v93;
  v94 = s;
  while ( 1 )
  {
    v95 = (unsigned __int8)*v94++;
    v12 = v95;
    if ( v95 )
      break;
    if ( &v117 == v94 )
      goto LABEL_8;
  }
  v12 = 3;
LABEL_8:
  free(ptr);
  free(v107);
  return v12;
}
