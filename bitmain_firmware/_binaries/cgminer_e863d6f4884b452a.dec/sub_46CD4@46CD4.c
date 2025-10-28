unsigned int __fastcall sub_46CD4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  char *v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r2
  int v17; // r0
  const char *v18; // r4
  int v19; // r0
  bool v20; // zf
  int v21; // r1
  __int64 v22; // r2
  int v23; // r1
  int v24; // r0
  unsigned int v25; // r4
  int v26; // r0
  bool v27; // zf
  unsigned int v28; // r3
  const char *v29; // r4
  int *v30; // r7
  __int64 v31; // r0
  _BYTE *v32; // r4
  unsigned __int8 *i; // r7
  int v34; // r3
  unsigned int v35; // r3
  const char *v36; // r2
  int v37; // r8
  unsigned int v38; // r3
  unsigned int v39; // r4
  bool v40; // cc
  int v41; // r0
  int v42; // r1
  int v43; // r0
  unsigned __int8 *v44; // r11
  int v45; // r3
  int v46; // r0
  const char *v47; // r2
  int v48; // [sp+8h] [bp-1Ch]
  int v49; // [sp+Ch] [bp-18h]
  char src[4]; // [sp+14h] [bp-10h] BYREF
  __int64 endptr; // [sp+18h] [bp-Ch] BYREF

  v2 = a1 + 10;
  sub_478E0(a1 + 10);
  if ( a1[13] == 256 )
  {
    sub_47860(a1[14]);
    a1[14] = 0;
  }
  do
  {
    v5 = a1[5];
    if ( !v5 )
      v5 = sub_46B84((int)a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    a1[13] = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_31;
  sub_479A0(v2, (unsigned __int8)v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_34;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_34;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      a1[13] = -1;
      if ( v5 == 45 )
      {
        v41 = sub_46C74((int)a1, a2);
        v42 = v41;
        if ( v41 != 48 )
        {
          if ( (unsigned int)(v41 - 48) > 9 )
          {
LABEL_110:
            sub_46C98(a1, v42);
            return a1[13];
          }
          goto LABEL_42;
        }
      }
      else if ( v5 != 48 )
      {
        do
LABEL_42:
          v19 = sub_46C74((int)a1, a2);
        while ( (unsigned int)(v19 - 48) <= 9 );
        goto LABEL_43;
      }
      v19 = sub_46C74((int)a1, a2);
      if ( (unsigned int)(v19 - 48) <= 9 )
      {
LABEL_112:
        v42 = v19;
        goto LABEL_110;
      }
LABEL_43:
      v20 = v19 == 46;
      if ( v19 != 46 )
        v20 = v19 == 69;
      if ( v20 )
      {
        if ( v19 == 46 )
        {
          v21 = a1[5];
          if ( !v21 )
            v21 = sub_46B84((int)a1, a2);
          if ( (unsigned int)(v21 - 48) > 9 )
          {
            sub_46B08(a1, v21);
            return a1[13];
          }
          sub_479A0(v2, (unsigned __int8)v21);
          do
            v19 = sub_46C74((int)a1, a2);
          while ( (unsigned int)(v19 - 48) <= 9 );
        }
        if ( (v19 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_54;
      }
      else if ( v19 != 101 )
      {
        sub_46C98(a1, v19);
        v29 = (const char *)sub_478EC(v2);
        v30 = _errno_location();
        *v30 = 0;
        v31 = strtoll(v29, (char **)&endptr, 10);
        if ( *v30 == 34 )
        {
          if ( v31 >= 0 )
            LOWORD(v47) = -21736;
          else
            LOWORD(v47) = -21764;
          HIWORD(v47) = 5;
          sub_469A4(a2, (int)a1, v47, HIDWORD(v31));
          return a1[13];
        }
        else
        {
          if ( (const char *)endptr != &v29[a1[11]] )
            _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x206u, "lex_scan_number");
          v8 = 257;
          *((_QWORD *)a1 + 7) = v31;
          a1[13] = 257;
        }
        return v8;
      }
      v19 = sub_46C74((int)a1, a2);
      if ( ((v19 - 43) & 0xFFFFFFFD) == 0 )
        v19 = sub_46C74((int)a1, a2);
      if ( (unsigned int)(v19 - 48) <= 9 )
      {
        do
          v19 = sub_46C74((int)a1, a2);
        while ( (unsigned int)(v19 - 48) <= 9 );
LABEL_54:
        sub_46C98(a1, v19);
        if ( sub_479D0(v2, &endptr) )
        {
          sub_469A4(a2, (int)a1, "real number overflow");
          return a1[13];
        }
        else
        {
          v22 = endptr;
          v8 = 258;
          a1[13] = 258;
          *((_QWORD *)a1 + 7) = v22;
        }
        return v8;
      }
      goto LABEL_112;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      v12 = (char *)a1 + a1[4];
      v13 = (unsigned __int8)v12[8];
      if ( v12[8] )
      {
        do
        {
          sub_479A0(v2, v13);
          v14 = a1[4] + 1;
          v15 = a1[9] + 1;
          a1[4] = v14;
          a1[9] = v15;
          v13 = *((unsigned __int8 *)a1 + v14 + 8);
        }
        while ( *((_BYTE *)a1 + v14 + 8) );
      }
      goto LABEL_31;
    }
    do
      v17 = sub_46C74((int)a1, a2);
    while ( (v17 & 0xFFFFFFDF) - 65 <= 0x19 );
    sub_46C98(a1, v17);
    v18 = (const char *)sub_478EC(v2);
    if ( !strcmp(v18, "true") )
    {
      v8 = 259;
      a1[13] = 259;
      return v8;
    }
    if ( strcmp(v18, "false") )
    {
      if ( !strcmp(v18, "null") )
      {
        v8 = 261;
        a1[13] = 261;
        return v8;
      }
LABEL_31:
      v8 = -1;
      a1[13] = -1;
      return v8;
    }
    v5 = 260;
LABEL_34:
    a1[13] = v5;
    return v5;
  }
  a1[13] = -1;
  a1[14] = v10;
LABEL_57:
  v23 = a2;
  v24 = (int)a1;
  while ( 1 )
  {
    v25 = sub_46C74(v24, v23);
LABEL_59:
    if ( v25 == 34 )
    {
      v32 = (_BYTE *)sub_47850(a1[11] + 1);
      a1[14] = v32;
      if ( !v32 )
        goto LABEL_72;
      for ( i = (unsigned __int8 *)(sub_478EC(v2) + 1); ; i += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v34 = *i;
            if ( v34 == 34 )
            {
              *v32 = 0;
              v8 = 256;
              a1[13] = 256;
              return v8;
            }
            if ( v34 == 92 )
              break;
            *v32 = v34;
            ++i;
            ++v32;
          }
          v35 = i[1];
          if ( v35 != 117 )
            break;
          v43 = sub_46A84(i + 1);
          v44 = i + 6;
          v45 = v43;
          v49 = v43 - 55296;
          if ( (unsigned int)(v43 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v43 - 56320) < 0x400 )
              goto LABEL_143;
            if ( !v43 )
            {
              sub_469A4(a2, (int)a1, "\\u0000 is not allowed", 0);
              goto LABEL_72;
            }
          }
          else
          {
            if ( i[6] != 92 || i[7] != 117 )
            {
LABEL_143:
              sub_469A4(a2, (int)a1, "invalid Unicode '\\u%04X'", v43);
              goto LABEL_72;
            }
            v48 = v43;
            v46 = sub_46A84(i + 7);
            v44 = i + 12;
            if ( (unsigned int)(v46 - 56320) >= 0x400 )
            {
              sub_469A4(a2, (int)a1, "invalid Unicode '\\u%04X\\u%04X'", v48, v46);
              goto LABEL_72;
            }
            v45 = v46 - 56320 + (v49 << 10) + 0x10000;
          }
          if ( sub_47B14(v45, src, &endptr) )
            _assert_fail((const char *)&word_513BC, "load.c", 0x1AEu, "lex_scan_string");
          i = v44;
          memcpy(v32, src, endptr);
          v32 += endptr;
        }
        if ( v35 == 98 )
        {
          *v32 = 8;
        }
        else
        {
          if ( v35 <= 0x62 )
          {
            if ( v35 != 47 && v35 != 92 && v35 != 34 )
LABEL_121:
              _assert_fail((const char *)&word_513BC, "load.c", 0x1BCu, "lex_scan_string");
            goto LABEL_116;
          }
          if ( v35 == 110 )
          {
            *v32 = 10;
          }
          else
          {
            if ( v35 <= 0x6E )
            {
              if ( v35 != 102 )
                goto LABEL_121;
              LOBYTE(v35) = 12;
LABEL_116:
              *v32 = v35;
              goto LABEL_96;
            }
            if ( v35 == 114 )
            {
              *v32 = 13;
            }
            else
            {
              if ( v35 != 116 )
                goto LABEL_121;
              *v32 = 9;
            }
          }
        }
LABEL_96:
        ++v32;
      }
    }
    if ( v25 == -2 )
      goto LABEL_72;
    if ( v25 == -1 )
    {
      sub_469A4(a2, (int)a1, "premature end of input", 0);
      goto LABEL_72;
    }
    if ( v25 <= 0x1F )
      break;
    v23 = a2;
    v24 = (int)a1;
    if ( v25 == 92 )
    {
      v26 = sub_46C74((int)a1, a2);
      if ( v26 == 117 )
      {
        v37 = 4;
        v25 = sub_46C74((int)a1, a2);
        while ( 1 )
        {
          v38 = v25 & 0xFFFFFFDF;
          v39 = v25 - 48;
          v28 = v38 - 65;
          v40 = v28 > 5;
          if ( v28 > 5 )
            v40 = v39 > 9;
          if ( v40 )
            break;
          --v37;
          v25 = sub_46C74((int)a1, a2);
          if ( !v37 )
            goto LABEL_59;
        }
LABEL_71:
        sub_469A4(a2, (int)a1, "invalid escape", v28);
        goto LABEL_72;
      }
      v27 = v26 == 92;
      if ( v26 != 92 )
        v27 = (v26 & 0xFFFFFFBF) == 34;
      if ( !v27 && v26 != 47 && (v26 & 0xFFFFFFF7) != 0x66 )
      {
        v28 = (v26 - 114) & 0xFFFFFFFD;
        if ( v28 )
          goto LABEL_71;
      }
      goto LABEL_57;
    }
  }
  sub_46C98(a1, v25);
  if ( v25 == 10 )
    LOWORD(v36) = -21908;
  else
    LOWORD(v36) = -21888;
  HIWORD(v36) = 5;
  sub_469A4(a2, (int)a1, v36, v25);
LABEL_72:
  sub_47860(a1[14]);
  return a1[13];
}
