_DWORD *__fastcall parse_value(double a1, json_error_t *a2)
{
  int v2; // r3
  double v3; // r0
  const lex_t *v7; // [sp+Ch] [bp+Ch]
  double v8; // [sp+10h] [bp+10h] BYREF
  _DWORD *v9; // [sp+1Ch] [bp+1Ch]

  v7 = (const lex_t *)LODWORD(a1);
  v2 = *(_DWORD *)(LODWORD(a1) + 52);
  if ( v2 == 257 )
  {
    if ( (BYTE4(a1) & 8) != 0 )
    {
      LODWORD(v3) = jsonp_strtod(LODWORD(a1) + 40, &v8);
      if ( LODWORD(v3) )
      {
        error_set(a2, v7, "real number overflow");
        return 0;
      }
      v9 = json_real(v3);
    }
    else
    {
      v9 = (_DWORD *)json_integer(*(_DWORD *)(LODWORD(a1) + 56), *(_DWORD *)(LODWORD(a1) + 60));
    }
    goto LABEL_29;
  }
  if ( v2 > 257 )
  {
    if ( v2 == 259 )
    {
      v9 = json_true();
    }
    else if ( v2 < 259 )
    {
      v9 = json_real(a1);
    }
    else if ( v2 == 260 )
    {
      v9 = json_false();
    }
    else
    {
      if ( v2 != 261 )
        goto LABEL_28;
      v9 = json_null();
    }
    goto LABEL_29;
  }
  if ( v2 == 91 )
  {
    v9 = parse_array((const lex_t *)LODWORD(a1), HIDWORD(a1), a2);
LABEL_29:
    if ( v9 )
      return v9;
    else
      return 0;
  }
  if ( v2 > 91 )
  {
    if ( v2 == 123 )
    {
      v9 = parse_object((const lex_t *)LODWORD(a1), HIDWORD(a1), a2);
    }
    else
    {
      if ( v2 != 256 )
        goto LABEL_28;
      v9 = json_string_nocheck(*(const char **)(LODWORD(a1) + 56));
    }
    goto LABEL_29;
  }
  if ( v2 != -1 )
  {
LABEL_28:
    error_set(a2, (const lex_t *)LODWORD(a1), "unexpected token");
    return 0;
  }
  error_set(a2, (const lex_t *)LODWORD(a1), "invalid token");
  return 0;
}
