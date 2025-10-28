_DWORD *__fastcall json_loadf(int a1, unsigned int a2, json_error_t *a3)
{
  _BYTE v8[64]; // [sp+10h] [bp+10h] BYREF
  _DWORD *v9; // [sp+50h] [bp+50h]
  const char *v10; // [sp+54h] [bp+54h]

  if ( a1 == stdin )
    v10 = "<stdin>";
  else
    v10 = "<stream>";
  jsonp_error_init(a3, v10);
  if ( a1 )
  {
    if ( lex_init((int)v8, (int)fgetc, a1) )
    {
      return 0;
    }
    else
    {
      v9 = parse_json((const lex_t *)v8, a2, (int)a3);
      lex_close((int)v8);
      return v9;
    }
  }
  else
  {
    error_set(a3, 0, "wrong arguments");
    return 0;
  }
}
