int __fastcall sub_5579C(_DWORD *a1, int a2)
{
  _DWORD *v4; // r8
  unsigned int v5; // r6
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf
  unsigned int v11; // r0
  unsigned int v12; // r6
  int v13; // r0
  int v14; // r7
  bool v15; // cc
  bool v16; // zf
  bool v17; // zf
  bool v18; // zf
  _BYTE *v19; // r6
  unsigned __int8 *i; // r7
  unsigned int v21; // r3
  int v22; // r0
  int v23; // r8
  int v24; // r0
  int v25; // r3
  bool v26; // cc
  int j; // r1
  bool v28; // zf
  const char *v29; // r6
  int *v30; // r7
  __int64 v31; // r0
  int v32; // r1
  int v33; // r0
  bool v34; // zf
  unsigned __int8 m; // r1
  int k; // r1
  const char *v37; // r5
  int v38; // r3
  int v39; // r3
  _BYTE src[4]; // [sp+Ch] [bp-10h] BYREF
  __int64 n; // [sp+10h] [bp-Ch] BYREF

  v4 = a1 + 10;
  sub_56A80(a1 + 10);
  if ( a1[13] == 256 )
  {
    sub_569A0(a1[14]);
    a1[14] = 0;
  }
  while ( 1 )
  {
    v5 = sub_55700((int)a1, a2);
    v6 = v5 == 32;
    if ( v5 != 32 )
      v6 = v5 == 9;
    if ( !v6 )
    {
      v7 = v5 == 10;
      if ( v5 != 10 )
        v7 = v5 == 13;
      if ( !v7 )
        break;
    }
  }
  if ( v5 == -1 )
  {
    a1[13] = 0;
    return a1[13];
  }
  if ( v5 == -2 )
  {
    a1[13] = -1;
    return a1[13];
  }
  sub_5570C((int)a1, v5);
  v8 = v5 == 123;
  if ( v5 != 123 )
    v8 = v5 == 125;
  if ( v8 )
    goto LABEL_23;
  v9 = v5 == 91;
  if ( v5 != 91 )
    v9 = v5 == 93;
  if ( v9 )
    goto LABEL_23;
  v10 = v5 == 58;
  if ( v5 != 58 )
    v10 = v5 == 44;
  if ( v10 )
  {
LABEL_23:
    a1[13] = v5;
    return a1[13];
  }
  if ( v5 == 34 )
  {
    a1[14] = 0;
    a1[13] = -1;
    v11 = sub_55720((int)a1, a2);
    v12 = v11;
    if ( v11 != 34 )
    {
      if ( v11 == -2 )
        goto LABEL_102;
      if ( v11 == -1 )
      {
LABEL_32:
        sub_552A0(a2, a1, "premature end of input");
        goto LABEL_102;
      }
      if ( v11 <= 0x1F )
      {
LABEL_34:
        sub_55750(a1, v12);
        if ( v12 == 10 )
          sub_552A0(a2, a1, "unexpected newline");
        else
          sub_552A0(a2, a1, "control character 0x%x", v12);
        goto LABEL_102;
      }
      while ( 1 )
      {
        if ( v12 == 92 )
        {
          v13 = sub_55720((int)a1, a2);
          if ( v13 == 117 )
          {
            v12 = sub_55720((int)a1, a2);
            v14 = 4;
            while ( 1 )
            {
              v15 = v12 - 65 > 5;
              if ( v12 - 65 > 5 )
                v15 = v12 - 48 > 9;
              if ( v15 && v12 - 97 > 5 )
                break;
              v12 = sub_55720((int)a1, a2);
              if ( !--v14 )
                goto LABEL_60;
            }
LABEL_45:
            sub_552A0(a2, a1, "invalid escape");
LABEL_102:
            sub_569A0(a1[14]);
            return a1[13];
          }
          v16 = v13 == 34;
          if ( v13 != 34 )
            v16 = v13 == 92;
          if ( !v16 )
          {
            v17 = v13 == 47;
            if ( v13 != 47 )
              v17 = v13 == 98;
            if ( !v17 && (v13 & 0xFFFFFFF7) != 0x66 )
            {
              v18 = v13 == 114;
              if ( v13 != 114 )
                v18 = v13 == 116;
              if ( !v18 )
                goto LABEL_45;
            }
          }
        }
        v12 = sub_55720((int)a1, a2);
LABEL_60:
        switch ( v12 )
        {
          case 0x22u:
            goto LABEL_61;
          case 0xFFFFFFFE:
            goto LABEL_102;
          case 0xFFFFFFFF:
            goto LABEL_32;
        }
        if ( v12 <= 0x1F )
          goto LABEL_34;
      }
    }
LABEL_61:
    v19 = (_BYTE *)sub_56978(a1[11] + 1);
    a1[14] = v19;
    if ( !v19 )
      goto LABEL_102;
    for ( i = (unsigned __int8 *)(sub_56A94(v4) + 1); ; i += 2 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v25 = *i;
          if ( v25 == 34 )
          {
            *v19 = 0;
            a1[13] = 256;
            return a1[13];
          }
          if ( v25 == 92 )
            break;
          *v19++ = v25;
          ++i;
        }
        v21 = i[1];
        if ( v21 != 117 )
          break;
        v22 = sub_55410(i + 1);
        v23 = v22;
        if ( (unsigned int)(v22 - 55296) > 0x3FF )
        {
          if ( (unsigned int)(v22 - 56320) <= 0x3FF )
            goto LABEL_74;
          if ( !v22 )
          {
            sub_552A0(a2, a1, "\\u0000 is not allowed");
            goto LABEL_102;
          }
          i += 6;
        }
        else
        {
          if ( i[6] != 92 || i[7] != 117 )
          {
LABEL_74:
            sub_552A0(a2, a1, "invalid Unicode '\\u%04X'", v22);
            goto LABEL_102;
          }
          v24 = sub_55410(i + 7);
          i += 12;
          if ( (unsigned int)(v24 - 56320) > 0x3FF )
          {
            sub_552A0(a2, a1, "invalid Unicode '\\u%04X\\u%04X'", v23, v24);
            goto LABEL_102;
          }
          v23 = v24 + ((v23 - 55296) << 10) + 9216;
        }
        if ( sub_56E04(v23, src, &n) )
          _assert_fail(word_6187C, "load.c", 0x1AEu, "lex_scan_string");
        memcpy(v19, src, n);
        v19 += n;
      }
      if ( v21 == 102 )
      {
        *v19 = 12;
      }
      else if ( v21 > 0x66 )
      {
        switch ( v21 )
        {
          case 'r':
            *v19 = 13;
            break;
          case 't':
            *v19 = 9;
            break;
          case 'n':
            *v19 = 10;
            break;
          default:
            goto LABEL_98;
        }
      }
      else
      {
        if ( v21 == 92 )
          goto LABEL_94;
        if ( v21 <= 0x5C )
        {
          if ( v21 != 34 && v21 != 47 )
LABEL_98:
            _assert_fail(word_6187C, "load.c", 0x1BCu, "lex_scan_string");
LABEL_94:
          *v19 = v21;
          goto LABEL_99;
        }
        if ( v21 != 98 )
          goto LABEL_98;
        *v19 = 8;
      }
LABEL_99:
      ++v19;
    }
  }
  v26 = v5 > 0x2D;
  if ( v5 != 45 )
    v26 = v5 - 48 > 9;
  if ( !v26 )
  {
    a1[13] = -1;
    if ( v5 == 45 )
      v5 = sub_55720((int)a1, a2);
    if ( v5 == 48 )
    {
      j = sub_55720((int)a1, a2);
      if ( (unsigned int)(j - 48) <= 9 )
      {
LABEL_110:
        sub_55750(a1, j);
        return a1[13];
      }
    }
    else
    {
      if ( v5 - 48 > 9 )
      {
        sub_55750(a1, v5);
        return a1[13];
      }
      for ( j = sub_55720((int)a1, a2); (unsigned int)(j - 48) <= 9; j = sub_55720((int)a1, a2) )
        ;
    }
    v28 = j == 69;
    if ( j != 69 )
      v28 = j == 46;
    if ( v28 )
    {
      if ( j == 46 )
      {
        v32 = sub_55700((int)a1, a2);
        if ( (unsigned int)(v32 - 48) > 9 )
        {
          sub_554C4(a1, v32);
          return a1[13];
        }
        sub_5570C((int)a1, v32);
        for ( j = sub_55720((int)a1, a2); (unsigned int)(j - 48) <= 9; j = sub_55720((int)a1, a2) )
          ;
      }
      if ( (j & 0xFFFFFFDF) != 0x45 )
      {
LABEL_141:
        sub_55750(a1, j);
        if ( sub_56C04(v4, &n) )
        {
          sub_552A0(a2, a1, "real number overflow");
        }
        else
        {
          a1[13] = 258;
          *((_QWORD *)a1 + 7) = n;
        }
        return a1[13];
      }
    }
    else if ( j != 101 )
    {
      sub_55750(a1, j);
      v29 = (const char *)sub_56A94(v4);
      v30 = _errno_location();
      *v30 = 0;
      v31 = strtoll(v29, (char **)&n, 10);
      if ( *v30 == 34 )
      {
        if ( v31 >= 0 )
          sub_552A0(a2, a1, "too big integer", HIDWORD(v31));
        else
          sub_552A0(a2, a1, "too big negative integer", HIDWORD(v31));
      }
      else
      {
        if ( (const char *)n != &v29[a1[11]] )
          _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x206u, "lex_scan_number");
        a1[13] = 257;
        *((_QWORD *)a1 + 7) = v31;
      }
      return a1[13];
    }
    v33 = sub_55720((int)a1, a2);
    j = v33;
    v34 = v33 == 43;
    if ( v33 != 43 )
      v34 = v33 == 45;
    if ( v34 )
      j = sub_55720((int)a1, a2);
    if ( (unsigned int)(j - 48) > 9 )
      goto LABEL_110;
    for ( j = sub_55720((int)a1, a2); (unsigned int)(j - 48) <= 9; j = sub_55720((int)a1, a2) )
      ;
    goto LABEL_141;
  }
  if ( (v5 & 0xFFFFFFDF) - 65 <= 0x19 )
  {
    for ( k = sub_55720((int)a1, a2); (k & 0xFFFFFFDF) - 65 <= 0x19; k = sub_55720((int)a1, a2) )
      ;
    sub_55750(a1, k);
    v37 = (const char *)sub_56A94(v4);
    if ( !strcmp(v37, "true") )
    {
      a1[13] = 259;
    }
    else if ( !strcmp(v37, "false") )
    {
      a1[13] = 260;
    }
    else
    {
      if ( !strcmp(v37, "null") )
        v38 = 261;
      else
        v38 = -1;
      a1[13] = v38;
    }
  }
  else
  {
    for ( m = *((_BYTE *)a1 + a1[4] + 8); m; m = *((_BYTE *)a1 + v39 + 8) )
    {
      sub_5570C((int)a1, m);
      v39 = a1[4] + 1;
      a1[4] = v39;
      ++a1[9];
    }
    a1[13] = -1;
  }
  return a1[13];
}
