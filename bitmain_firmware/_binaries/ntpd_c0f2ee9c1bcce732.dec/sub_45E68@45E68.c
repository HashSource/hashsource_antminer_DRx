int __fastcall sub_45E68(char *a1)
{
  const unsigned __int16 **v2; // r0
  char *v3; // r3
  const unsigned __int16 *v4; // r12
  const unsigned __int16 **v5; // r5
  char *v6; // r0
  int v7; // r2
  int v8; // t1
  unsigned __int16 v9; // r1
  int v10; // r4
  unsigned int v11; // r7
  unsigned int v12; // r10
  int *v13; // r9
  int v14; // r11
  char *v15; // r6
  unsigned int v16; // r2
  const unsigned __int16 *v17; // r12
  char *v18; // r3
  unsigned int v19; // t1
  char *v21; // r0
  char *v22; // r8
  char *v23; // r0
  const char *v24; // r7
  const char *v25; // r6
  char *v26; // r0
  int v27; // r5
  char *v28; // r2
  int v29; // r0
  int v30; // r6
  size_t v31; // r0
  void *v32; // r3
  char **v33; // r1
  char *v34; // r2
  int v35; // r0
  int *v36; // r5
  int v37; // r0
  int v38; // r3
  int v39; // r0
  int v40; // r11
  int v41; // r3
  unsigned __int16 v42; // r2
  char *v43; // r6
  int v44; // t1
  char *v45; // r2
  int v46; // r0
  char *v47; // r2
  int v48; // r0
  char *v49; // r2
  int v50; // r0
  char *v51; // r2
  int v52; // r0
  int v53; // r2
  const unsigned __int16 *v54; // r0
  char *v55; // r3
  int v56; // t1
  const unsigned __int16 *v57; // r1
  char *v58; // r6
  int v59; // r3
  int v60; // t1
  bool v61; // zf
  int v62; // r12
  int v63; // r8
  signed int v64; // r0
  int v65; // r3
  bool v66; // cc
  int v67; // r0
  int v68; // r0
  __int16 v69; // r12
  const unsigned __int16 *v70; // [sp+0h] [bp-24h]
  int v71; // [sp+0h] [bp-24h]
  int v72; // [sp+4h] [bp-20h]
  char *v73; // [sp+8h] [bp-1Ch] BYREF
  char *v74; // [sp+Ch] [bp-18h] BYREF
  char *nptr; // [sp+10h] [bp-14h] BYREF
  char *i; // [sp+14h] [bp-10h] BYREF
  int v77; // [sp+18h] [bp-Ch] BYREF
  char v78[4]; // [sp+1Ch] [bp-8h] BYREF

  v2 = _ctype_b_loc();
  v3 = a1;
  v4 = *v2;
  v5 = v2;
  do
  {
    v6 = v3;
    v8 = (unsigned __int8)*v3++;
    v7 = v8;
    v9 = v4[v8];
    v10 = v9 & 0x2000;
  }
  while ( (v9 & 0x2000) != 0 );
  if ( v7 == 80 )
  {
    v21 = _strdup(v6 + 1);
    v22 = v21;
    if ( !v21 )
    {
      v10 = -1;
      *_errno_location() = 12;
      return v10;
    }
    v23 = strchr(v21, 84);
    v24 = v23;
    if ( v23 )
    {
      *v23 = v10;
      v25 = sub_442F0(v22);
      v24 = sub_442F0(v24 + 1);
    }
    else
    {
      v25 = v22;
    }
    v26 = strchr(v25, 45);
    if ( v26 )
    {
      v73 = (char *)v25;
      v27 = sub_45B18(0, &v73, v26, 31536000);
      v28 = strchr(++v73, 45);
      if ( v28 )
      {
        v29 = sub_45B18(v27, &v73, v28, 2592000);
        ++v73;
        v30 = v29;
        v31 = strlen(v73);
        v32 = &loc_15180;
        v33 = &v73;
        v34 = &v73[v31];
        v35 = v30;
LABEL_31:
        v10 = sub_45B18(v35, v33, v34, (int)v32);
LABEL_32:
        v36 = _errno_location();
        if ( !*v36 && v24 )
        {
          v37 = sub_45C04(v24);
          if ( v10 == -1 )
          {
            if ( !*v36 )
              *v36 = 22;
          }
          else if ( v10 > 0x7FFFFFFF - v37 )
          {
            v10 = -1;
            *v36 = 34;
          }
          else
          {
            v10 += v37;
          }
        }
        goto LABEL_38;
      }
    }
    else if ( strpbrk(v25, "YMWD") )
    {
      v74 = (char *)v25;
      v45 = strchr(v25, 89);
      if ( v45 )
      {
        v46 = sub_45B18(0, &v74, v45, 31536000);
        v25 = ++v74;
        v10 = v46;
      }
      else
      {
        v10 = 0;
      }
      v47 = strchr(v25, 77);
      if ( v47 )
      {
        v48 = sub_45B18(v10, &v74, v47, 2592000);
        v25 = ++v74;
        v10 = v48;
      }
      v49 = strchr(v25, 87);
      if ( v49 )
      {
        v50 = sub_45B18(v10, &v74, v49, (int)&unk_93A80);
        v25 = ++v74;
        v10 = v50;
      }
      v51 = strchr(v25, 68);
      if ( v51 )
      {
        v52 = sub_45B18(v10, &v74, v51, (int)&loc_15180);
        v25 = ++v74;
        v10 = v52;
      }
      v53 = *(unsigned __int8 *)v25;
      v54 = *v5;
      if ( ((*v5)[v53] & 0x2000) != 0 )
      {
        v55 = (char *)(v25 + 1);
        do
        {
          v74 = v55;
          v56 = (unsigned __int8)*v55++;
          v53 = v56;
        }
        while ( (v54[v56] & 0x2000) != 0 );
      }
      if ( !v53 )
        goto LABEL_32;
    }
    else if ( strlen(v25) == 8 )
    {
      v67 = *(_DWORD *)v25;
      i = (char *)&v77;
      v77 = v67;
      v78[0] = 0;
      v68 = sub_45B18(0, &i, v78, 31536000);
      LOWORD(v77) = *((_WORD *)v25 + 2);
      i = (char *)&v77;
      BYTE2(v77) = 0;
      v35 = sub_45B18(v68, &i, (char *)&v77 + 2, 2592000);
      v69 = *((_WORD *)v25 + 3);
      v32 = &loc_15180;
      v33 = &i;
      v34 = (char *)&v77 + 2;
      i = (char *)&v77;
      LOWORD(v77) = v69;
      BYTE2(v77) = 0;
      goto LABEL_31;
    }
    v10 = -1;
    *_errno_location() = 22;
LABEL_38:
    free(v22);
    return v10;
  }
  if ( v7 == 84 )
    return sub_45C04(v6 + 1);
  if ( (v9 & 0x800) == 0 )
  {
    v10 = -1;
    *_errno_location() = 22;
    return v10;
  }
  v11 = v9 & 0x2000;
  v12 = v11;
  nptr = v6;
  v13 = _errno_location();
  while ( 1 )
  {
    *v13 = v12;
    v14 = strtol(nptr, &nptr, 10);
    if ( *v13 )
      goto LABEL_42;
    v15 = nptr;
    v16 = (unsigned __int8)*nptr;
    if ( v16 == 58 )
      break;
    v17 = *v5;
    if ( ((*v5)[v16] & 0x2000) != 0 )
    {
      v18 = nptr + 1;
      do
      {
        nptr = v18;
        v15 = v18;
        v19 = (unsigned __int8)*v18++;
        v16 = v19;
      }
      while ( (v17[v19] & 0x2000) != 0 );
    }
    if ( v16 == 100 )
      goto LABEL_88;
    if ( v16 > 0x64 )
    {
      if ( v16 == 109 )
      {
        if ( v11 > 5 )
          goto LABEL_42;
        v38 = 60;
        v11 = 6;
      }
      else
      {
        if ( v16 <= 0x6D )
        {
          if ( v16 != 104 || v11 > 4 )
            goto LABEL_42;
          v38 = 3600;
          v11 = 5;
          goto LABEL_45;
        }
        if ( v16 != 115 )
        {
          if ( v16 != 121 )
            goto LABEL_42;
LABEL_77:
          if ( v11 )
            goto LABEL_42;
          v38 = 31536000;
          v11 = 1;
          goto LABEL_45;
        }
        v38 = 1;
        v11 = 7;
      }
    }
    else
    {
      if ( v16 != 77 )
      {
        if ( v16 <= 0x4D )
        {
          if ( !v16 )
          {
            if ( v10 != -1 )
            {
LABEL_19:
              if ( 0x7FFFFFFF - v14 < v10 )
              {
                v10 = -1;
                *v13 = 34;
              }
              else
              {
                v10 += v14;
              }
              return v10;
            }
LABEL_105:
            *v13 = 22;
            return v10;
          }
          if ( v16 != 68 )
            goto LABEL_42;
LABEL_88:
          if ( v11 > 3 )
            goto LABEL_42;
          v38 = (int)&loc_15180;
          v11 = 4;
          goto LABEL_45;
        }
        if ( v16 == 87 )
        {
          if ( v11 > 2 )
            goto LABEL_42;
          v38 = (int)&unk_93A80;
          v11 = 3;
          goto LABEL_45;
        }
        if ( v16 != 89 )
          goto LABEL_42;
        goto LABEL_77;
      }
      if ( v11 > 1 )
        goto LABEL_42;
      v38 = 2592000;
      v11 = 2;
    }
LABEL_45:
    if ( v10 == -1 )
    {
      *v13 = 22;
    }
    else
    {
      v72 = v38;
      v70 = v17;
      v39 = sub_5A928(0x7FFFFFFF, v38);
      v17 = v70;
      if ( v14 > v39 || (v40 = v14 * v72, v10 > 0x7FFFFFFF - v40) )
      {
        v10 = -1;
        *v13 = 34;
      }
      else
      {
        v10 += v40;
      }
    }
    nptr = v15 + 1;
    v41 = (unsigned __int8)v15[1];
    v42 = v17[v41];
    if ( (v42 & 0x2000) != 0 )
    {
      v43 = v15 + 2;
      do
      {
        nptr = v43;
        v44 = (unsigned __int8)*v43++;
        v41 = v44;
        v42 = v17[v44];
      }
      while ( (v42 & 0x2000) != 0 );
    }
    if ( !v41 )
      return v10;
    if ( (v42 & 0x800) == 0 || v11 == 7 )
      goto LABEL_42;
  }
  if ( v11 > 5 )
  {
LABEL_42:
    v10 = -1;
    *v13 = 22;
    return v10;
  }
  v62 = 35791394;
  v63 = 3;
  *v13 = *v13;
  for ( i = v15; ; v15 = i )
  {
    v59 = (unsigned __int8)*v15;
    if ( v59 != 58 )
      break;
    if ( !--v63 )
      break;
    v71 = v62;
    v64 = strtoul(v15 + 1, &i, 10);
    v65 = 0x7FFFFFFF - 60 * v14;
    v62 = v71;
    if ( *v13 )
      goto LABEL_119;
    if ( v64 == -1 )
      goto LABEL_118;
    v66 = v14 <= v71;
    v14 = v64 + 60 * v14;
    if ( !v66 || v64 > v65 )
    {
      *v13 = 34;
      goto LABEL_119;
    }
  }
  v57 = *v5;
  if ( ((*v5)[v59] & 0x2000) != 0 )
  {
    v58 = v15 + 1;
    do
    {
      i = v58;
      v60 = (unsigned __int8)*v58++;
      v59 = v60;
    }
    while ( (v57[v60] & 0x2000) != 0 );
  }
  if ( v59 )
  {
LABEL_118:
    *v13 = 22;
LABEL_119:
    v14 = -1;
    goto LABEL_103;
  }
  v61 = v14 == 3600;
  if ( v14 >= 3600 )
    v61 = v11 == 5;
  if ( v61 )
    goto LABEL_42;
LABEL_103:
  if ( v10 != -1 )
    goto LABEL_19;
  if ( !*v13 )
    goto LABEL_105;
  return v10;
}
