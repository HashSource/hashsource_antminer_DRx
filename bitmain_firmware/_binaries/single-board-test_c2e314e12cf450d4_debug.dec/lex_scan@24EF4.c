int __fastcall lex_scan(int a1, json_error_t *a2)
{
  char *s1; // [sp+8h] [bp+8h]
  int v6; // [sp+Ch] [bp+Ch]
  int save; // [sp+Ch] [bp+Ch]

  strbuffer_clear((strbuffer_t *)(a1 + 40));
  if ( *(_DWORD *)(a1 + 52) == 256 )
  {
    jsonp_free(*(void **)(a1 + 56));
    *(_DWORD *)(a1 + 56) = 0;
  }
  do
  {
    do
      v6 = lex_get((lex_t *)a1, a2);
    while ( v6 == 32 );
  }
  while ( v6 == 9 || v6 == 10 || v6 == 13 );
  if ( v6 == -1 )
  {
    *(_DWORD *)(a1 + 52) = 0;
  }
  else if ( v6 == -2 )
  {
    *(_DWORD *)(a1 + 52) = -1;
  }
  else
  {
    lex_save((lex_t *)a1, v6);
    if ( v6 == 123 || v6 == 125 || v6 == 91 || v6 == 93 || v6 == 58 || v6 == 44 )
    {
      *(_DWORD *)(a1 + 52) = v6;
    }
    else if ( v6 == 34 )
    {
      lex_scan_string(a1, a2);
    }
    else if ( v6 > 47 && v6 <= 57 || v6 == 45 )
    {
      lex_scan_number(a1, v6, a2);
    }
    else if ( (v6 <= 64 || v6 > 90) && (v6 <= 96 || v6 > 122) )
    {
      lex_save_cached((lex_t *)a1);
      *(_DWORD *)(a1 + 52) = -1;
    }
    else
    {
      do
      {
        do
          save = lex_get_save((lex_t *)a1, a2);
        while ( save > 64 && save <= 90 );
      }
      while ( save > 96 && save <= 122 );
      lex_unget_unsave((_DWORD *)a1, save);
      s1 = (char *)strbuffer_value(a1 + 40);
      if ( !strcmp(s1, "true") )
      {
        *(_DWORD *)(a1 + 52) = 259;
      }
      else if ( !strcmp(s1, "false") )
      {
        *(_DWORD *)(a1 + 52) = 260;
      }
      else if ( !strcmp(s1, "null") )
      {
        *(_DWORD *)(a1 + 52) = 261;
      }
      else
      {
        *(_DWORD *)(a1 + 52) = -1;
      }
    }
  }
  return *(_DWORD *)(a1 + 52);
}
