int sub_1858C()
{
  double v0; // d0
  int v1; // r8
  const unsigned __int16 **v2; // r5
  int v3; // r4
  double v4; // r0
  int v5; // r10
  int v6; // r3
  int v7; // r2
  int v8; // r0
  int v9; // r8
  int v10; // r2
  char *v11; // r0
  int v12; // r0
  bool v13; // zf
  int v15; // r0
  int v16; // r4
  int v17; // r12
  unsigned int v18; // r3
  _BOOL4 v19; // r2
  char *v20; // r1
  int v21; // r3
  const unsigned __int16 *v22; // r6
  int v23; // r3
  char *v24; // r1
  int v25; // r2
  int v26; // r4
  int v27; // r5
  int v28; // r2
  int v29; // r3
  bool v30; // zf
  char *v31; // r2
  int v32; // t1
  int *v33; // r4
  bool v34; // zf
  int *v35; // r4
  int v36; // [sp+Ch] [bp-8h]

  v36 = 0;
LABEL_2:
  while ( 2 )
  {
    v1 = sub_183F0();
    if ( v1 == -1 )
    {
LABEL_57:
      v1 = dword_794D8;
      if ( !dword_794D8 )
        return v1;
      v1 = dword_CA57C;
      if ( !dword_CA57C )
        return v1;
      sub_183C8((FILE **)dword_C9CA0[dword_CA57C]);
      dword_CA668 = dword_C9CA0[--dword_CA57C];
      goto LABEL_7;
    }
    while ( 1 )
    {
      v2 = _ctype_b_loc();
      if ( ((*v2)[v1] & 0x2000) == 0 )
        break;
      if ( !dword_794F4 )
      {
        if ( v1 == 59 )
          goto LABEL_6;
        goto LABEL_2;
      }
      if ( v1 == 10 )
        goto LABEL_6;
      v1 = sub_183F0();
      if ( v1 == -1 )
        goto LABEL_57;
    }
    if ( dword_794F4 )
    {
      if ( v1 != 10 )
        goto LABEL_15;
      goto LABEL_6;
    }
    if ( v1 == 59 )
    {
LABEL_6:
      dword_7CF48 = 0;
LABEL_7:
      v3 = 0;
      goto LABEL_8;
    }
LABEL_15:
    if ( strchr("{}(),;|=", v1) && !dword_7CF48 )
    {
      dword_7CF48 = v1 == 61;
      v10 = 0;
      v3 = 0;
      nptr = v1;
      byte_CA679[0] = 0;
LABEL_35:
      if ( v1 != 410 )
      {
LABEL_36:
        if ( dword_7CF4C > 3 )
        {
          v11 = sub_1821C(v1, SHIDWORD(v4), v10);
          printf("yylex: lexeme '%s' -> %s\n", &nptr, v11);
        }
        goto LABEL_10;
      }
LABEL_8:
      v1 = 410;
      if ( dword_7CF4C > 3 )
        puts("\t<end of command>");
LABEL_10:
      if ( !v3 )
        LODWORD(dbl_CA670) = v1;
      return v1;
    }
    v5 = 0;
    sub_18488(v1);
    v6 = dword_CA668;
    v7 = *(_DWORD *)(dword_CA668 + 12);
    *(_DWORD *)(dword_CA668 + 20) = *(_DWORD *)(dword_CA668 + 8);
    *(_DWORD *)(v6 + 24) = v7;
LABEL_23:
    v8 = sub_183F0();
    v9 = v8;
    if ( v8 == -1 )
      goto LABEL_52;
    *(&nptr + v5) = v8;
    if ( ((*v2)[v8] & 0x2000) != 0 )
    {
      if ( v8 == 34 )
      {
        while ( 1 )
        {
LABEL_39:
          v12 = sub_183F0();
          if ( v12 == -1 )
          {
            v36 = 1;
            sub_18488(10);
            goto LABEL_28;
          }
          v13 = v12 == 10;
          if ( v12 != 10 )
            v13 = v12 == 34;
          if ( v13 )
            break;
          *(&nptr + v5) = v12;
          if ( (unsigned int)++v5 > 0x400 )
            goto LABEL_44;
        }
        v9 = v12;
        if ( v12 == 34 )
        {
          v36 = 1;
          v9 = sub_183F0();
LABEL_51:
          if ( v9 == -1 )
          {
LABEL_52:
            sub_18488(10);
            goto LABEL_28;
          }
        }
        else
        {
          v36 = 1;
        }
      }
LABEL_27:
      sub_18488(v9);
LABEL_28:
      *(&nptr + v5) = 0;
      if ( !v5 )
        continue;
      v10 = dword_7CF48;
      if ( dword_7CF48 || v36 )
      {
        HIDWORD(v4) = (unsigned __int8)nptr;
        if ( nptr != 45 )
          goto LABEL_32;
        if ( byte_CA679[0] == 52 )
        {
          v1 = 312;
          v3 = 0;
        }
        else
        {
          if ( byte_CA679[0] != 54 )
          {
LABEL_32:
            if ( dword_7CF48 == 1 )
              dword_7CF48 = 0;
            goto LABEL_34;
          }
          v1 = 314;
          v3 = 0;
        }
        goto LABEL_36;
      }
      if ( !nptr )
      {
LABEL_76:
        v19 = nptr == 45;
        v20 = &nptr + v19;
        v21 = (unsigned __int8)*(&nptr + v19);
        if ( *(&nptr + v19) )
        {
          v22 = *v2;
          while ( 1 )
          {
            v23 = v22[v21] & 0x800;
            if ( !v23 )
              break;
            v21 = (unsigned __int8)*++v20;
            if ( !v21 )
              goto LABEL_106;
          }
          if ( nptr == 43 )
            v19 = 1;
          v24 = &nptr + v19;
          v25 = (unsigned __int8)*(&nptr + v19);
          if ( !v25 )
            goto LABEL_34;
          while ( (v22[v25] & 0x800) != 0 )
          {
            v25 = (unsigned __int8)v24[1];
            ++v23;
            ++v24;
            if ( !v25 )
              goto LABEL_34;
          }
          if ( v25 != 46 )
            goto LABEL_34;
          v26 = v24 - &nptr + 1;
          v27 = (unsigned __int8)v24[1];
          if ( v24[1] )
          {
            while ( (v22[v27] & 0x800) != 0 )
            {
              ++v26;
              ++v23;
              v27 = (unsigned __int8)*(&nptr + v26);
              if ( !*(&nptr + v26) )
                goto LABEL_112;
            }
            if ( !v23 || (*_ctype_tolower_loc())[v27] != 101 )
              goto LABEL_34;
            v28 = v26 + 1;
            v29 = (unsigned __int8)*(&nptr + v26 + 1);
            v30 = v29 == 43;
            if ( v29 != 43 )
              v30 = v29 == 45;
            if ( v30 )
            {
              v28 = v26 + 2;
              v29 = (unsigned __int8)*(&nptr + v26 + 2);
            }
            if ( v29 )
            {
              v31 = &nptr + v28;
              while ( (v22[v29] & 0x800) != 0 )
              {
                v32 = (unsigned __int8)*++v31;
                v29 = v32;
                if ( !v32 )
                  goto LABEL_113;
              }
              goto LABEL_34;
            }
          }
          else
          {
LABEL_112:
            if ( !v23 )
            {
LABEL_34:
              v3 = 1;
              v1 = sub_1823C();
              goto LABEL_35;
            }
          }
LABEL_113:
          v35 = _errno_location();
          *v35 = 0;
          v4 = strtod(&nptr, 0);
          dbl_CA670 = v0;
          if ( v0 == 0.0 && *v35 == 34 )
          {
            sub_4FE78(3, "Double too large to represent: %s", &nptr);
            exit(1);
          }
          v1 = 286;
          v3 = 1;
        }
        else
        {
LABEL_106:
          v33 = _errno_location();
          *v33 = 0;
          LODWORD(dbl_CA670) = strtol(&nptr, 0, 10);
          if ( !LODWORD(dbl_CA670) )
          {
            v34 = *v33 == 22;
            if ( *v33 != 22 )
              v34 = *v33 == 34;
            if ( v34 )
            {
              sub_4FE78(3, "Integer cannot be represented: %s", &nptr);
              exit(1);
            }
          }
          v1 = 309;
          v3 = 1;
        }
        goto LABEL_36;
      }
      v16 = 0;
      HIDWORD(v4) = (unsigned __int8)nptr;
      v1 = 742;
      v17 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v18 = (unsigned int)*(&off_61628 + v1 + 166);
          if ( (unsigned __int8)v18 == HIDWORD(v4) )
            break;
          v1 = v18 >> 21;
          if ( !(v18 >> 21) )
            goto LABEL_76;
        }
        v3 = (unsigned __int8)byte_CA679[v16];
        if ( !v3 )
        {
          v10 = (v18 >> 8) & 3;
          if ( v10 != 3 )
            break;
        }
        ++v17;
        v1 = (v18 >> 10) & 0x7FF;
        v16 = v17;
        HIDWORD(v4) = (unsigned __int8)*(&nptr + v17);
        if ( !*(&nptr + v17) || !v1 )
          goto LABEL_76;
      }
      dword_7CF48 = (v18 >> 8) & 3;
      goto LABEL_35;
    }
    break;
  }
  if ( dword_794F4 )
  {
    if ( v8 == 10 )
      goto LABEL_27;
  }
  else if ( v8 == 59 )
  {
    goto LABEL_27;
  }
  if ( v8 == 34 )
    goto LABEL_39;
  if ( !dword_7CF48 && strchr("{}(),;|=", v8) )
    goto LABEL_51;
  if ( v9 == 35 )
  {
    while ( 1 )
    {
      v15 = sub_183F0();
      if ( v15 == -1 )
        goto LABEL_52;
      if ( v15 == 10 )
      {
        v9 = 10;
        goto LABEL_27;
      }
    }
  }
  if ( ++v5 != 1025 )
    goto LABEL_23;
LABEL_44:
  byte_CA6AA = 0;
  sub_4FE78(
    3,
    "configuration item on line %d longer than limit of %lu, began with '%s'",
    *(_DWORD *)(dword_CA668 + 8),
    1024,
    &nptr);
  if ( dword_794D8 )
    exit(1024);
  v1 = 0;
  LODWORD(dbl_CA670) = 0;
  return v1;
}
