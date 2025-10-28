unsigned int __fastcall sub_37304(int a1, int a2)
{
  const void **v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  int v12; // r0
  const char *v13; // r4
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r4
  int v18; // r0
  bool v19; // zf
  unsigned int v20; // r0
  bool v21; // zf
  double v22; // r2
  char i; // r1
  int v24; // r3
  int v25; // r2
  int v26; // r8
  unsigned int v27; // r3
  unsigned int v28; // r4
  bool v29; // cc
  unsigned int v30; // r0
  _BYTE *v31; // r8
  unsigned __int8 *j; // r4
  int v33; // r3
  unsigned int v34; // r3
  int v35; // r0
  int v36; // r11
  int v37; // r0
  const char *v38; // r7
  int *v39; // r4
  __int64 v40; // r0
  unsigned __int64 v41; // r8
  unsigned int v42; // r1
  int v43; // r2
  const char *v44; // r3
  char arg[4]; // [sp+0h] [bp-1Ch]
  int v46; // [sp+Ch] [bp-10h]
  double endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = (const void **)(a1 + 40);
  strbuffer_clear(a1 + 40);
  if ( *(_DWORD *)(a1 + 60) == 256 )
  {
    jsonp_free(*(void **)(a1 + 64));
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 68) = 0;
  }
  do
  {
    v5 = *(_DWORD *)(a1 + 20);
    if ( !v5 )
      v5 = sub_37144(a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    *(_DWORD *)(a1 + 60) = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_37;
  fh_buffer_putc(v2, v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_40;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_40;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      *(_DWORD *)(a1 + 60) = -1;
      if ( v5 == 45 )
      {
        v30 = sub_372AC(a1, a2);
        if ( v30 == 48 )
        {
LABEL_60:
          v20 = sub_372AC(a1, a2);
          if ( v20 - 48 <= 9 )
          {
LABEL_61:
            sub_372EC((_DWORD *)a1, v20);
            return *(_DWORD *)(a1 + 60);
          }
LABEL_63:
          if ( (*(_DWORD *)(a1 + 52) & 8) == 0 )
          {
            v21 = (v20 & 0xFFFFFFDF) == 69;
            if ( (v20 & 0xFFFFFFDF) != 0x45 )
              v21 = v20 == 46;
            if ( !v21 )
            {
              if ( v20 + 2 > 1 )
                sub_372EC((_DWORD *)a1, v20);
              v38 = (const char *)strbuffer_value((int)v2);
              v39 = _errno_location();
              *v39 = 0;
              v40 = strtoll(v38, (char **)&endptr, 10);
              v41 = v40;
              if ( *v39 == 34 )
              {
                if ( v40 < 0 )
                {
                  sub_36F4C(a2, (_DWORD *)a1, 15, "too big negative integer");
                }
                else
                {
                  *v39 = 0;
                  v41 = strtoull(v38, (char **)&endptr, 10);
                  if ( *v39 == 34 )
                  {
                    sub_36F4C(a2, (_DWORD *)a1, 15, "too big integer");
                    return *(_DWORD *)(a1 + 60);
                  }
                }
              }
              v8 = 257;
              *(_QWORD *)(a1 + 64) = v41;
              *(_DWORD *)(a1 + 60) = 257;
              return v8;
            }
          }
          if ( v20 == 46 )
          {
            v42 = *(_DWORD *)(a1 + 20);
            if ( !v42 )
              v42 = sub_37144(a1, a2);
            if ( v42 - 48 > 9 )
            {
              if ( v42 < 0xFFFFFFFE )
              {
                sub_370E8((_DWORD *)a1, v42);
                return *(_DWORD *)(a1 + 60);
              }
              return *(_DWORD *)(a1 + 60);
            }
            fh_buffer_putc(v2, v42);
            do
              v20 = sub_372AC(a1, a2);
            while ( v20 - 48 <= 9 );
          }
          if ( (v20 & 0xFFFFFFDF) != 0x45 )
          {
LABEL_70:
            if ( v20 + 2 > 1 )
              sub_372EC((_DWORD *)a1, v20);
            if ( !jsonp_strtod((const char **)v2, &endptr) )
            {
              v22 = endptr;
              v8 = 258;
              *(_DWORD *)(a1 + 60) = 258;
              *(double *)(a1 + 64) = v22;
              return v8;
            }
            sub_36F4C(a2, (_DWORD *)a1, 15, "real number overflow");
            return *(_DWORD *)(a1 + 60);
          }
          v20 = sub_372AC(a1, a2);
          if ( ((v20 - 43) & 0xFFFFFFFD) == 0 )
            v20 = sub_372AC(a1, a2);
          if ( v20 - 48 <= 9 )
          {
            do
              v20 = sub_372AC(a1, a2);
            while ( v20 - 48 <= 9 );
            goto LABEL_70;
          }
          if ( v20 < 0xFFFFFFFE )
            goto LABEL_61;
          return *(_DWORD *)(a1 + 60);
        }
        if ( v30 - 48 > 9 )
        {
          if ( v30 < 0xFFFFFFFE )
            sub_372EC((_DWORD *)a1, v30);
          return *(_DWORD *)(a1 + 60);
        }
      }
      else if ( v5 == 48 )
      {
        goto LABEL_60;
      }
      do
        v20 = sub_372AC(a1, a2);
      while ( v20 - 48 <= 9 );
      goto LABEL_63;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 <= 0x19 )
    {
      do
        v12 = sub_372AC(a1, a2);
      while ( (v12 & 0xFFFFFFDF) - 65 <= 0x19 );
      if ( (unsigned int)(v12 + 2) > 1 )
        sub_372EC((_DWORD *)a1, v12);
      v13 = (const char *)strbuffer_value((int)v2);
      if ( !strcmp(v13, "true") )
      {
        v8 = 259;
        *(_DWORD *)(a1 + 60) = 259;
        return v8;
      }
      if ( strcmp(v13, "false") )
      {
        if ( !strcmp(v13, "null") )
        {
          v8 = 261;
          *(_DWORD *)(a1 + 60) = 261;
          return v8;
        }
        goto LABEL_37;
      }
      v5 = 260;
LABEL_40:
      *(_DWORD *)(a1 + 60) = v5;
      return v5;
    }
    for ( i = *(_BYTE *)(a1 + *(_DWORD *)(a1 + 16) + 8); i; i = *(_BYTE *)(a1 + v24 + 8) )
    {
      fh_buffer_putc(v2, i);
      v24 = *(_DWORD *)(a1 + 16) + 1;
      v25 = *(_DWORD *)(a1 + 36) + 1;
      *(_DWORD *)(a1 + 16) = v24;
      *(_DWORD *)(a1 + 36) = v25;
    }
LABEL_37:
    v8 = -1;
    *(_DWORD *)(a1 + 60) = -1;
    return v8;
  }
  *(_DWORD *)(a1 + 64) = v10;
  *(_DWORD *)(a1 + 60) = -1;
LABEL_42:
  v15 = a2;
  v16 = a1;
  while ( 1 )
  {
    v17 = sub_372AC(v16, v15);
LABEL_44:
    if ( v17 == 34 )
    {
      v31 = jsonp_malloc((void *)(*(_DWORD *)(a1 + 44) + 1));
      if ( !v31 )
        goto LABEL_57;
      *(_DWORD *)(a1 + 64) = v31;
      for ( j = (unsigned __int8 *)(strbuffer_value((int)v2) + 1); ; j += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = *j;
            if ( v33 == 34 )
            {
              *v31 = 0;
              v8 = 256;
              v43 = *(_DWORD *)(a1 + 64);
              *(_DWORD *)(a1 + 60) = 256;
              *(_DWORD *)(a1 + 68) = &v31[-v43];
              return v8;
            }
            if ( v33 == 92 )
              break;
            *v31 = v33;
            ++j;
            ++v31;
          }
          v34 = j[1];
          if ( v34 != 117 )
            break;
          v35 = sub_36E40((int)(j + 1));
          v36 = v35;
          if ( v35 < 0 )
          {
            LOWORD(v44) = (unsigned __int16)"invalid Unicode escape '%.6s'";
            *(_DWORD *)arg = j;
LABEL_146:
            HIWORD(v44) = (unsigned int)"invalid Unicode escape '%.6s'" >> 16;
            sub_36F4C(a2, (_DWORD *)a1, 8, v44, *(_DWORD *)arg);
            goto LABEL_57;
          }
          v46 = v35 - 55296;
          if ( (unsigned int)(v35 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v35 - 56320) < 0x400 )
              goto LABEL_153;
            j += 6;
          }
          else
          {
            if ( j[6] != 92 || j[7] != 117 )
            {
LABEL_153:
              sub_36F4C(a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X'", v35);
              goto LABEL_57;
            }
            v37 = sub_36E40((int)(j + 7));
            if ( v37 < 0 )
            {
              LOWORD(v44) = 8596;
              *(_DWORD *)arg = j + 6;
              goto LABEL_146;
            }
            j += 12;
            if ( (unsigned int)(v37 - 56320) >= 0x400 )
            {
              sub_36F4C(a2, (_DWORD *)a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v36, v37);
              goto LABEL_57;
            }
            v36 = v37 - 56320 + (v46 << 10) + 0x10000;
          }
          utf8_encode(v36, v31, &endptr);
          v31 += LODWORD(endptr);
        }
        if ( v34 == 98 )
        {
          *v31 = 8;
          goto LABEL_109;
        }
        if ( v34 <= 0x62 )
        {
          if ( v34 == 47 || v34 == 92 || v34 == 34 )
            goto LABEL_108;
        }
        else
        {
          if ( v34 == 110 )
          {
            *v31 = 10;
            goto LABEL_109;
          }
          if ( v34 <= 0x6E )
          {
            if ( v34 == 102 )
              *v31 = 12;
          }
          else
          {
            if ( v34 == 114 )
            {
              *v31 = 13;
              goto LABEL_109;
            }
            if ( v34 == 116 )
            {
              LOBYTE(v34) = 9;
LABEL_108:
              *v31 = v34;
            }
          }
        }
LABEL_109:
        ++v31;
      }
    }
    if ( v17 == -2 )
      goto LABEL_57;
    if ( v17 == -1 )
    {
      sub_36F4C(a2, (_DWORD *)a1, 6, "premature end of input");
      goto LABEL_57;
    }
    if ( v17 <= 0x1F )
      break;
    v15 = a2;
    v16 = a1;
    if ( v17 == 92 )
    {
      v18 = sub_372AC(a1, a2);
      if ( v18 == 117 )
      {
        v26 = 4;
        v17 = sub_372AC(a1, a2);
        while ( 1 )
        {
          v27 = v17 & 0xFFFFFFDF;
          v28 = v17 - 48;
          v27 -= 65;
          v29 = v27 > 5;
          if ( v27 > 5 )
            v29 = v28 > 9;
          if ( v29 )
            break;
          --v26;
          v17 = sub_372AC(a1, a2);
          if ( !v26 )
            goto LABEL_44;
        }
LABEL_56:
        sub_36F4C(a2, (_DWORD *)a1, 8, "invalid escape");
        goto LABEL_57;
      }
      v19 = v18 == 92;
      if ( v18 != 92 )
        v19 = (v18 & 0xFFFFFFBF) == 34;
      if ( !v19 && v18 != 47 && (v18 & 0xFFFFFFF7) != 0x66 && ((v18 - 114) & 0xFFFFFFFD) != 0 )
        goto LABEL_56;
      goto LABEL_42;
    }
  }
  sub_372EC((_DWORD *)a1, v17);
  if ( v17 == 10 )
    sub_36F4C(a2, (_DWORD *)a1, 8, "unexpected newline");
  else
    sub_36F4C(a2, (_DWORD *)a1, 8, "control character 0x%x", v17);
LABEL_57:
  jsonp_free(*(void **)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  return v8;
}
