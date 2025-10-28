char *__fastcall sub_C83C(size_t a1, int a2, int a3)
{
  size_t v3; // r10
  int v4; // r8
  char *v5; // r0
  char *v6; // r11
  double v8; // d8
  char *v9; // r0
  _DWORD *v10; // r6
  int i; // r5
  int v12; // r4
  const char **v13; // r0
  _DWORD *v14; // r11
  int v15; // r6
  const char **v16; // r7
  size_t v17; // r0
  int v18; // r3
  size_t v19; // r0
  const char *v20; // r0
  const char **v21; // r10
  int v22; // r5
  char *v23; // r0
  const char *v24; // t1
  size_t v25; // r7
  int j; // r5
  int v27; // r4
  int v28; // r3
  int **v29; // r5
  int v30; // r3
  int v31; // r6
  const char *v32; // r4
  const char *v33; // r0
  bool v34; // zf
  size_t v35; // r9
  int v36; // r5
  int v37; // r6
  double v39; // r0
  double v40; // d16
  bool v41; // zf
  char *v42; // r0
  _BYTE *v43; // r3
  _BYTE *v44; // r8
  char *v45; // r11
  const char **v46; // r6
  int v47; // r7
  char *v48; // r10
  char *v49; // r11
  const char *v50; // t1
  char *v51; // r0
  int v52; // r10
  const char **v53; // r4
  const char **v54; // r11
  char *v55; // r5
  char *v56; // r2
  size_t v57; // r0
  char *v58; // r7
  size_t v59; // r0
  char v60; // r3
  bool v61; // zf
  char *v62; // t1
  char *v63; // t1
  char *v64; // r7
  size_t v65; // r0
  char *v67; // [sp+4h] [bp-28h]
  const char **ptr; // [sp+8h] [bp-24h]
  int v69; // [sp+Ch] [bp-20h]
  int v70; // [sp+Ch] [bp-20h]
  int v71; // [sp+10h] [bp-1Ch]
  int v72; // [sp+10h] [bp-1Ch]
  const char **v73; // [sp+14h] [bp-18h]
  int v74; // [sp+14h] [bp-18h]
  char *s; // [sp+18h] [bp-14h]
  int v76; // [sp+1Ch] [bp-10h]
  char *v77; // [sp+1Ch] [bp-10h]
  int v78; // [sp+20h] [bp-Ch]

  v3 = a1;
  v4 = a3;
  if ( !a1 )
    return 0;
  switch ( *(_BYTE *)(a1 + 12) )
  {
    case 0:
      return (char *)sub_C574("false");
    case 1:
      return (char *)sub_C574("true");
    case 2:
      return (char *)sub_C574("null");
    case 3:
      v8 = *(double *)(a1 + 24);
      if ( fabs((double)*(int *)(a1 + 20) - v8) > 2.22044605e-16 || v8 > 2147483650.0 || v8 < -2147483650.0 )
      {
        LODWORD(v39) = off_1B374(0x40u);
        v6 = (char *)LODWORD(v39);
        if ( !LODWORD(v39) )
          return 0;
        floor(v39);
        v40 = fabs(v8);
        if ( fabs(v8 - v8) > 2.22044605e-16 || v40 >= 1.0e60 )
        {
          if ( v40 >= 0.000001 && v40 <= 1000000000.0 )
            sprintf(v6, "%f", v8);
          else
            sprintf(v6, "%e", v8);
        }
        else
        {
          sprintf(v6, "%.0f", v8);
        }
      }
      else
      {
        v9 = (char *)off_1B374(0x15u);
        v6 = v9;
        if ( !v9 )
          return 0;
        sprintf(v9, "%d", *(_DWORD *)(v3 + 20));
      }
      return v6;
    case 4:
      return sub_C69C(*(unsigned __int8 **)(a1 + 16));
    case 5:
      v10 = *(_DWORD **)(a1 + 8);
      if ( v10 )
      {
        for ( i = 0; ; ++i )
        {
          v10 = (_DWORD *)*v10;
          v12 = i + 1;
          if ( !v10 )
            break;
        }
        v13 = (const char **)off_1B374(4 * v12);
        ptr = v13;
        if ( !v13 )
          return 0;
        memset(v13, 0, 4 * v12);
        v14 = *(_DWORD **)(v3 + 8);
        if ( v14 )
        {
          v15 = 5;
          v73 = ptr - 1;
          v16 = ptr - 1;
          while ( 1 )
          {
            v20 = (const char *)sub_C83C(v14, a2 + 1, v4);
            v16[1] = v20;
            ++v16;
            if ( !v20 )
              break;
            v17 = strlen(v20);
            v14 = (_DWORD *)*v14;
            if ( v4 )
              v18 = 3;
            else
              v18 = 2;
            v15 += v18 + v17;
            v19 = v15;
            if ( !v14 )
              goto LABEL_87;
          }
LABEL_28:
          v21 = v73;
          v22 = 0;
          do
          {
            v24 = v21[1];
            ++v21;
            v23 = (char *)v24;
            ++v22;
            if ( v24 )
              off_1B378(v23);
          }
          while ( v22 < v12 );
          goto LABEL_32;
        }
        v19 = 5;
LABEL_87:
        v45 = (char *)off_1B374(v19);
        if ( !v45 )
        {
          v73 = ptr - 1;
          goto LABEL_28;
        }
        v46 = ptr;
        v47 = 0;
        v67 = v45;
        *v45 = 91;
        v48 = v45 + 1;
        v45[1] = 0;
        do
        {
          strcpy(v48, *v46);
          v50 = *v46++;
          v49 = (char *)v50;
          v48 += strlen(v50);
          if ( i != v47 )
          {
            *v48 = 44;
            if ( v4 )
            {
              v48[1] = 32;
              v48 += 2;
            }
            else
            {
              ++v48;
            }
            *v48 = 0;
            v49 = (char *)*(v46 - 1);
          }
          ++v47;
          off_1B378(v49);
        }
        while ( v47 < v12 );
        v6 = v67;
        off_1B378(ptr);
        *v48 = 93;
        v48[1] = 0;
      }
      else
      {
        v5 = (char *)off_1B374(3u);
        v6 = v5;
        if ( !v5 )
          return 0;
        strcpy(v5, "[]");
      }
      return v6;
    case 6:
      v25 = *(_DWORD *)(a1 + 8);
      if ( !v25 )
      {
        v41 = a3 == 0;
        if ( a3 )
          a3 = a2;
        else
          a1 = 3;
        if ( !v41 )
          a1 = a3 + 4;
        v42 = (char *)off_1B374(a1);
        v6 = v42;
        if ( v42 )
        {
          *v42 = 123;
          if ( v4 )
          {
            v42[1] = 10;
            v43 = v42 + 2;
            if ( a2 > 1 )
            {
              v44 = &v43[a2 - 1];
              do
                *v43++ = 9;
              while ( v43 != v44 );
            }
          }
          else
          {
            v43 = v42 + 1;
          }
          *v43 = 125;
          v43[1] = 0;
          return v6;
        }
        return 0;
      }
      for ( j = 0; ; ++j )
      {
        v25 = *(_DWORD *)v25;
        v27 = j + 1;
        if ( !v25 )
          break;
      }
      ptr = (const char **)off_1B374(4 * v27);
      if ( !ptr )
        return 0;
      s = (char *)off_1B374(4 * v27);
      if ( s )
      {
        v74 = a2 + 1;
        memset(ptr, 0, 4 * v27);
        memset(s, 0, 4 * v27);
        if ( v4 )
          v28 = a2;
        else
          v25 = 7;
        if ( v4 )
          v25 = v28 + 8;
        if ( *(_DWORD *)(v3 + 8) )
        {
          v78 = j;
          v29 = *(int ***)(v3 + 8);
          v30 = v4 ? a2 + 3 : 0;
          v31 = 0;
          v69 = 0;
          v71 = v30 + 2;
          v76 = v27;
          do
          {
            v32 = sub_C69C((unsigned __int8 *)v29[8]);
            *(_DWORD *)&s[v31 * 4] = v32;
            v33 = (const char *)sub_C83C(v29, v74, v4);
            v34 = v33 == 0;
            if ( v33 )
              v34 = v32 == 0;
            ptr[v31] = v33;
            if ( v34 )
            {
              v69 = 1;
            }
            else
            {
              v35 = strlen(v33);
              v25 += v71 + v35 + strlen(v32);
            }
            v29 = (int **)*v29;
            ++v31;
          }
          while ( v29 );
          v27 = v76;
          j = v78;
          if ( v69 )
            goto LABEL_56;
        }
        v51 = (char *)off_1B374(v25);
        if ( !v51 )
        {
LABEL_56:
          v36 = 0;
          v37 = 0;
          do
          {
            ++v37;
            if ( *(_DWORD *)&s[v36 * 4] )
              ((void (*)(void))off_1B378)();
            if ( ptr[v36++] )
              ((void (*)(void))off_1B378)();
          }
          while ( v37 < v27 );
          v6 = 0;
          off_1B378(s);
          off_1B378(ptr);
        }
        else
        {
          if ( !v4 )
            v25 = (size_t)(v51 + 1);
          *v51 = 123;
          if ( v4 )
          {
            v25 = (size_t)(v51 + 2);
            v51[1] = 10;
          }
          v77 = v51;
          v52 = 0;
          v70 = v27;
          v72 = j;
          v53 = ptr - 1;
          v54 = (const char **)s;
          v55 = (char *)v25;
          *(_BYTE *)v25 = 0;
          do
          {
            if ( v4 )
            {
              if ( v74 > 0 )
              {
                v56 = &v55[v74];
                do
                  *v55++ = 9;
                while ( v55 != v56 );
              }
              strcpy(v55, *v54);
              v57 = strlen(*v54);
              v55[v57] = 58;
              v58 = &v55[v57 + 2];
              v55[v57 + 1] = 9;
            }
            else
            {
              strcpy(v55, *v54);
              v65 = strlen(*v54);
              v55[v65] = 58;
              v58 = &v55[v65 + 1];
            }
            strcpy(v58, v53[1]);
            v59 = strlen(v53[1]);
            v61 = v72 == v52++;
            if ( !v61 )
              v60 = 44;
            v55 = &v58[v59];
            if ( !v61 )
            {
              v58[v59] = v60;
              ++v55;
            }
            if ( v4 )
              *v55++ = 10;
            *v55 = 0;
            v62 = (char *)*v54++;
            off_1B378(v62);
            v63 = (char *)v53[1];
            ++v53;
            off_1B378(v63);
          }
          while ( v52 < v70 );
          v64 = v55;
          v6 = v77;
          off_1B378(s);
          off_1B378(ptr);
          if ( v4 && a2 > 0 )
          {
            do
              *v64++ = 9;
            while ( v64 != &v55[a2] );
          }
          *v64 = 125;
          v64[1] = 0;
        }
      }
      else
      {
LABEL_32:
        v6 = 0;
        off_1B378(ptr);
      }
      return v6;
    default:
      return 0;
  }
}
