void __fastcall lex_scan_string(int a1, json_error_t *a2)
{
  int v2; // r3
  size_t n; // [sp+10h] [bp+8h] BYREF
  char src[4]; // [sp+14h] [bp+Ch] BYREF
  int v7; // [sp+18h] [bp+10h]
  int32_t v8; // [sp+1Ch] [bp+14h]
  int j; // [sp+20h] [bp+18h]
  void *dest; // [sp+24h] [bp+1Ch]
  _BYTE *i; // [sp+28h] [bp+20h]
  int save; // [sp+2Ch] [bp+24h]

  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 52) = -1;
  save = lex_get_save((lex_t *)a1, a2);
  while ( 1 )
  {
    if ( save == 34 )
    {
      *(_DWORD *)(a1 + 56) = jsonp_malloc(*(_DWORD *)(a1 + 44) + 1);
      if ( !*(_DWORD *)(a1 + 56) )
        goto LABEL_79;
      dest = *(void **)(a1 + 56);
      for ( i = (_BYTE *)(strbuffer_value(a1 + 40) + 1); ; ++i )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( *i == 34 )
            {
              *(_BYTE *)dest = 0;
              *(_DWORD *)(a1 + 52) = 256;
              return;
            }
            if ( *i == 92 )
              break;
            *(_BYTE *)dest = *i;
            dest = (char *)dest + 1;
            ++i;
          }
          if ( *++i != 117 )
            break;
          v8 = decode_unicode_escape(i);
          i += 5;
          if ( v8 <= 55295 || v8 > 56319 )
          {
            if ( v8 > 56319 && v8 <= 57343 )
            {
LABEL_49:
              error_set(a2, (const lex_t *)a1, "invalid Unicode '\\u%04X'", v8);
              goto LABEL_79;
            }
            if ( !v8 )
            {
              error_set(a2, (const lex_t *)a1, "\\u0000 is not allowed");
              goto LABEL_79;
            }
          }
          else
          {
            if ( *i != 92 || i[1] != 117 )
              goto LABEL_49;
            v7 = decode_unicode_escape(++i);
            i += 5;
            if ( v7 <= 56319 || v7 > 57343 )
            {
              error_set(a2, (const lex_t *)a1, "invalid Unicode '\\u%04X\\u%04X'", v8, v7);
              goto LABEL_79;
            }
            v8 = ((v8 - 55296) << 10) + v7 - 56320 + 0x10000;
          }
          if ( utf8_encode(v8, src, &n) )
            _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x1AEu, "lex_scan_string");
          memcpy(dest, src, n);
          dest = (char *)dest + n;
        }
        v2 = (unsigned __int8)*i;
        if ( v2 == 102 )
        {
          *(_BYTE *)dest = 12;
        }
        else if ( (unsigned __int8)*i > 0x66u )
        {
          switch ( v2 )
          {
            case 'r':
              *(_BYTE *)dest = 13;
              break;
            case 't':
              *(_BYTE *)dest = 9;
              break;
            case 'n':
              *(_BYTE *)dest = 10;
              break;
            default:
              goto LABEL_74;
          }
        }
        else
        {
          if ( v2 == 92 )
            goto LABEL_68;
          if ( (unsigned __int8)*i <= 0x5Cu )
          {
            if ( v2 != 34 && v2 != 47 )
LABEL_74:
              _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x1BCu, "lex_scan_string");
LABEL_68:
            *(_BYTE *)dest = *i;
            goto LABEL_75;
          }
          if ( v2 != 98 )
            goto LABEL_74;
          *(_BYTE *)dest = 8;
        }
LABEL_75:
        dest = (char *)dest + 1;
      }
    }
    if ( save == -2 )
      goto LABEL_79;
    if ( save == -1 )
      break;
    if ( (unsigned int)save < 0x20 )
    {
      lex_unget_unsave((_DWORD *)a1, save);
      if ( save == 10 )
        error_set(a2, (const lex_t *)a1, "unexpected newline", 10);
      else
        error_set(a2, (const lex_t *)a1, "control character 0x%x", save);
      goto LABEL_79;
    }
    if ( save != 92 )
      goto LABEL_32;
    save = lex_get_save((lex_t *)a1, a2);
    if ( save == 117 )
    {
      save = lex_get_save((lex_t *)a1, a2);
      for ( j = 0; j <= 3; ++j )
      {
        if ( (save <= 47 || save > 57) && (save <= 64 || save > 70) && (save <= 96 || save > 102) )
          goto LABEL_18;
        save = lex_get_save((lex_t *)a1, a2);
      }
    }
    else
    {
      if ( save != 34
        && save != 92
        && save != 47
        && save != 98
        && save != 102
        && save != 110
        && save != 114
        && save != 116 )
      {
LABEL_18:
        error_set(a2, (const lex_t *)a1, "invalid escape");
        goto LABEL_79;
      }
LABEL_32:
      save = lex_get_save((lex_t *)a1, a2);
    }
  }
  error_set(a2, (const lex_t *)a1, "premature end of input");
LABEL_79:
  jsonp_free(*(void **)(a1 + 56));
}
