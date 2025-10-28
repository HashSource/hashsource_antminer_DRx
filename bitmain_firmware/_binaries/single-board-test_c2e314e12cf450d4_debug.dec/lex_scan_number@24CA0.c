int __fastcall lex_scan_number(int a1, int a2, json_error_t *a3)
{
  int save; // [sp+8h] [bp+8h]
  int v7; // [sp+8h] [bp+8h]
  double v9; // [sp+10h] [bp+10h] BYREF
  char *endptr; // [sp+1Ch] [bp+1Ch] BYREF
  __int64 v11; // [sp+20h] [bp+20h]
  char *nptr; // [sp+2Ch] [bp+2Ch]

  save = a2;
  *(_DWORD *)(a1 + 52) = -1;
  if ( a2 == 45 )
    save = lex_get_save((lex_t *)a1, a3);
  if ( save == 48 )
  {
    save = lex_get_save((lex_t *)a1, a3);
    if ( save > 47 && save <= 57 )
    {
LABEL_6:
      lex_unget_unsave((_DWORD *)a1, save);
      return -1;
    }
  }
  else
  {
    if ( save <= 47 || save > 57 )
      goto LABEL_6;
    do
      save = lex_get_save((lex_t *)a1, a3);
    while ( save > 47 && save <= 57 );
  }
  if ( save == 46 || save == 69 || save == 101 )
  {
    if ( save == 46 )
    {
      v7 = lex_get((lex_t *)a1, a3);
      if ( v7 <= 47 || v7 > 57 )
      {
        lex_unget((_DWORD *)a1, v7);
        return -1;
      }
      lex_save((lex_t *)a1, v7);
      for ( save = lex_get_save((lex_t *)a1, a3); save > 47 && save <= 57; save = lex_get_save((lex_t *)a1, a3) )
        ;
    }
    if ( save == 69 || save == 101 )
    {
      save = lex_get_save((lex_t *)a1, a3);
      if ( save == 43 || save == 45 )
        save = lex_get_save((lex_t *)a1, a3);
      if ( save <= 47 || save > 57 )
        goto LABEL_6;
      do
        save = lex_get_save((lex_t *)a1, a3);
      while ( save > 47 && save <= 57 );
    }
    lex_unget_unsave((_DWORD *)a1, save);
    if ( jsonp_strtod(a1 + 40, &v9) )
    {
      error_set(a3, (const lex_t *)a1, "real number overflow");
      return -1;
    }
    *(_DWORD *)(a1 + 52) = 258;
    *(double *)(a1 + 56) = v9;
    return 0;
  }
  else
  {
    lex_unget_unsave((_DWORD *)a1, save);
    nptr = (char *)strbuffer_value(a1 + 40);
    *_errno_location() = 0;
    v11 = strtoll(nptr, &endptr, 10);
    if ( *_errno_location() == 34 )
    {
      if ( v11 >= 0 )
        error_set(a3, (const lex_t *)a1, "too big integer");
      else
        error_set(a3, (const lex_t *)a1, "too big negative integer");
      return -1;
    }
    if ( &nptr[*(_DWORD *)(a1 + 44)] != endptr )
      _assert_fail(
        "end == saved_text + lex->saved_text.length",
        "3rdparty/jansson-2.6/src/load.c",
        0x206u,
        "lex_scan_number");
    *(_DWORD *)(a1 + 52) = 257;
    *(_QWORD *)(a1 + 56) = v11;
    return 0;
  }
}
