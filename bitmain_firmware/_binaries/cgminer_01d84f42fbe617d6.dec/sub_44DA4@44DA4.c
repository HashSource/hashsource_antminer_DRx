unsigned int __fastcall sub_44DA4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r7
  int v5; // r0
  bool v6; // zf
  unsigned int v7; // r4
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf
  bool v12; // cc
  char *v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  char *v17; // r3
  int v19; // r0
  const char *v20; // r4
  int v21; // r0
  bool v22; // zf
  const char *v23; // r4
  int *v24; // r7
  __int64 v25; // r2
  int v26; // r0
  int v27; // r1
  unsigned int v28; // r4
  int v29; // r0
  bool v30; // zf
  bool v31; // zf
  bool v32; // zf
  __int64 v33; // r2
  bool v34; // zf
  int v35; // r8
  bool v36; // cc
  int v37; // r0
  _BYTE *v38; // r8
  unsigned __int8 *v39; // r7
  int v40; // r2
  unsigned int v41; // r2
  int v42; // r0
  int v43; // r2
  int v44; // r0
  int v45; // r0
  int v46; // [sp+8h] [bp-24h]
  int v47; // [sp+Ch] [bp-20h]
  _BYTE src[4]; // [sp+14h] [bp-18h] BYREF
  size_t n; // [sp+18h] [bp-14h] BYREF
  char *endptr; // [sp+1Ch] [bp-10h] BYREF
  __int64 v51; // [sp+20h] [bp-Ch] BYREF

  v2 = a1 + 10;
  sub_45EF8(a1 + 10);
  if ( a1[13] == 256 )
  {
    sub_45E0C(a1[14]);
    a1[14] = 0;
  }
  while ( 1 )
  {
    v5 = sub_44BA4((int)a1, a2);
    v6 = v5 == 32;
    if ( v5 != 32 )
      v6 = v5 == 9;
    v7 = v5;
    if ( !v6 )
    {
      v8 = v5 == 10;
      if ( v5 != 10 )
        v8 = v5 == 13;
      if ( !v8 )
        break;
    }
  }
  if ( v5 == -1 )
  {
    a1[13] = 0;
    return 0;
  }
  if ( v5 == -2 )
  {
LABEL_33:
    v7 = -1;
LABEL_34:
    a1[13] = v7;
    return v7;
  }
  sub_45FEC(v2, (unsigned __int8)v5);
  v9 = v7 == 123;
  if ( v7 != 123 )
    v9 = v7 == 125;
  if ( v9 )
    goto LABEL_34;
  v10 = v7 == 91;
  if ( v7 != 91 )
    v10 = v7 == 93;
  if ( v10 )
    goto LABEL_34;
  v11 = v7 == 58;
  if ( v7 != 58 )
    v11 = v7 == 44;
  if ( v11 )
    goto LABEL_34;
  if ( v7 != 34 )
  {
    v12 = v7 > 0x2D;
    if ( v7 != 45 )
      v12 = v7 - 48 > 9;
    if ( !v12 )
    {
      a1[13] = -1;
      if ( v7 == 45 )
        v7 = sub_44D74((int)a1, a2);
      if ( v7 == 48 )
      {
        v21 = sub_44D74((int)a1, a2);
        if ( (unsigned int)(v21 - 48) <= 9 )
          goto LABEL_97;
      }
      else
      {
        if ( v7 - 48 > 9 )
        {
          sub_44D28(a1, v7);
          return a1[13];
        }
        do
          v21 = sub_44D74((int)a1, a2);
        while ( (unsigned int)(v21 - 48) <= 9 );
      }
      v22 = v21 == 69;
      if ( v21 != 69 )
        v22 = v21 == 46;
      if ( v22 )
      {
        if ( v21 == 46 )
        {
          v45 = sub_44BA4((int)a1, a2);
          if ( (unsigned int)(v45 - 48) > 9 )
          {
            sub_44AEC(a1, v45);
            return a1[13];
          }
          sub_45FEC(v2, (unsigned __int8)v45);
          do
            v21 = sub_44D74((int)a1, a2);
          while ( (unsigned int)(v21 - 48) <= 9 );
        }
        if ( (v21 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_79;
      }
      else if ( v21 != 101 )
      {
        sub_44D28(a1, v21);
        v23 = (const char *)sub_45F0C(v2);
        v24 = _errno_location();
        *v24 = 0;
        v25 = strtoll(v23, &endptr, 10);
        if ( *v24 == 34 )
        {
          if ( v25 >= 0 )
            sub_448AC(a2, a1, "too big integer");
          else
            sub_448AC(a2, a1, "too big negative integer");
          return a1[13];
        }
        else
        {
          if ( endptr != &v23[a1[11]] )
            _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x206u, "lex_scan_number");
          *((_QWORD *)a1 + 7) = v25;
          v7 = 257;
          a1[13] = 257;
        }
        return v7;
      }
      v21 = sub_44D74((int)a1, a2);
      v34 = v21 == 43;
      if ( v21 != 43 )
        v34 = v21 == 45;
      if ( v34 )
        v21 = sub_44D74((int)a1, a2);
      if ( (unsigned int)(v21 - 48) <= 9 )
      {
        do
          v21 = sub_44D74((int)a1, a2);
        while ( (unsigned int)(v21 - 48) <= 9 );
LABEL_79:
        sub_44D28(a1, v21);
        if ( sub_46060(v2, &v51) )
        {
          sub_448AC(a2, a1, "real number overflow");
          return a1[13];
        }
        else
        {
          v33 = v51;
          v7 = 258;
          a1[13] = 258;
          *((_QWORD *)a1 + 7) = v33;
        }
        return v7;
      }
LABEL_97:
      sub_44D28(a1, v21);
      return a1[13];
    }
    if ( (v7 & 0xFFFFFFDF) - 65 <= 0x19 )
    {
      do
        v19 = sub_44D74((int)a1, a2);
      while ( (v19 & 0xFFFFFFDF) - 65 <= 0x19 );
      sub_44D28(a1, v19);
      v20 = (const char *)sub_45F0C(v2);
      if ( !strcmp(v20, "true") )
      {
        v7 = 259;
        a1[13] = 259;
        return v7;
      }
      if ( !strcmp(v20, "false") )
      {
        v7 = 260;
        a1[13] = 260;
        return v7;
      }
      if ( !strcmp(v20, "null") )
      {
        v7 = 261;
        a1[13] = 261;
        return v7;
      }
    }
    else
    {
      v13 = (char *)a1 + a1[4];
      v14 = (unsigned __int8)v13[8];
      if ( v13[8] )
      {
        do
        {
          sub_45FEC(v2, v14);
          v15 = a1[9];
          v16 = a1[4] + 1;
          a1[4] = v16;
          v17 = (char *)a1 + v16;
          a1[9] = v15 + 1;
          v14 = (unsigned __int8)v17[8];
        }
        while ( v17[8] );
      }
    }
    goto LABEL_33;
  }
  v26 = (int)a1;
  v27 = a2;
  a1[14] = 0;
  a1[13] = -1;
LABEL_58:
  v28 = sub_44D74(v26, v27);
LABEL_59:
  while ( v28 != 34 )
  {
    if ( v28 == -2 )
      goto LABEL_104;
    if ( v28 == -1 )
    {
      sub_448AC(a2, a1, "premature end of input");
      v37 = a1[14];
      goto LABEL_102;
    }
    v26 = (int)a1;
    if ( v28 <= 0x1F )
    {
      sub_44D28(a1, v28);
      if ( v28 == 10 )
        sub_448AC(a2, a1, "unexpected newline");
      else
        sub_448AC(a2, a1, "control character 0x%x", v28);
      v37 = a1[14];
      goto LABEL_102;
    }
    v27 = a2;
    if ( v28 != 92 )
      goto LABEL_58;
    v29 = sub_44D74((int)a1, a2);
    if ( v29 == 117 )
    {
      v35 = 4;
      v28 = sub_44D74((int)a1, a2);
      while ( 1 )
      {
        v36 = v28 - 65 > 5;
        if ( v28 - 65 > 5 )
          v36 = v28 - 48 > 9;
        if ( v36 && v28 - 97 > 5 )
          break;
        --v35;
        v28 = sub_44D74((int)a1, a2);
        if ( !v35 )
          goto LABEL_59;
      }
LABEL_149:
      sub_448AC(a2, a1, "invalid escape");
      v37 = a1[14];
      goto LABEL_102;
    }
    v30 = v29 == 34;
    if ( v29 != 34 )
      v30 = v29 == 92;
    if ( !v30 )
    {
      v31 = v29 == 47;
      if ( v29 != 47 )
        v31 = v29 == 98;
      if ( !v31 && (v29 & 0xFFFFFFF7) != 0x66 )
      {
        v32 = v29 == 114;
        if ( v29 != 114 )
          v32 = v29 == 116;
        if ( !v32 )
          goto LABEL_149;
      }
    }
    v28 = sub_44D74((int)a1, a2);
  }
  v37 = sub_45DE4(a1[11] + 1);
  v38 = (_BYTE *)v37;
  a1[14] = v37;
  if ( !v37 )
    goto LABEL_102;
  v39 = (unsigned __int8 *)(sub_45F0C(v2) + 1);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v40 = *v39;
        if ( v40 == 34 )
        {
          v7 = 256;
          *v38 = 0;
          a1[13] = 256;
          return v7;
        }
        if ( v40 == 92 )
          break;
        *v38++ = v40;
        ++v39;
      }
      v41 = v39[1];
      if ( v41 == 117 )
        break;
      if ( v41 == 102 )
      {
        *v38 = 12;
        goto LABEL_122;
      }
      if ( v41 > 0x66 )
      {
        switch ( v41 )
        {
          case 'r':
            *v38 = 13;
            break;
          case 't':
            *v38 = 9;
            break;
          case 'n':
            *v38 = 10;
            break;
          default:
            goto LABEL_117;
        }
      }
      else
      {
        if ( v41 == 92 )
          goto LABEL_135;
        if ( v41 <= 0x5C )
        {
          if ( v41 != 34 && v41 != 47 )
LABEL_117:
            _assert_fail(word_50574, "load.c", 0x1BCu, "lex_scan_string");
LABEL_135:
          *v38 = v41;
          goto LABEL_122;
        }
        if ( v41 != 98 )
          goto LABEL_117;
        *v38 = 8;
      }
LABEL_122:
      ++v38;
      v39 += 2;
    }
    v42 = sub_44A44(v39 + 1);
    v43 = v42;
    if ( (unsigned int)(v42 - 55296) > 0x3FF )
      break;
    if ( v39[6] != 92 || v39[7] != 117 )
    {
LABEL_103:
      sub_448AC(a2, a1, "invalid Unicode '\\u%04X'", v42);
      goto LABEL_104;
    }
    v46 = v42 - 55296;
    v47 = v42;
    v44 = sub_44A44(v39 + 7);
    v39 += 12;
    if ( (unsigned int)(v44 - 56320) > 0x3FF )
    {
      sub_448AC(a2, a1, "invalid Unicode '\\u%04X\\u%04X'", v47, v44);
      goto LABEL_104;
    }
    v43 = v44 - 56320 + (v46 << 10) + 0x10000;
LABEL_131:
    if ( sub_46254(v43, src, &n) )
      _assert_fail(word_50574, "load.c", 0x1AEu, "lex_scan_string");
    memcpy(v38, src, n);
    v38 += n;
  }
  if ( (unsigned int)(v42 - 56320) <= 0x3FF )
    goto LABEL_103;
  if ( v42 )
  {
    v39 += 6;
    goto LABEL_131;
  }
  sub_448AC(a2, a1, "\\u0000 is not allowed");
LABEL_104:
  v37 = a1[14];
LABEL_102:
  sub_45E0C(v37);
  return a1[13];
}
