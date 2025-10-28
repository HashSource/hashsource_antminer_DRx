_DWORD *__fastcall json_loads(int a1, unsigned int a2, json_error_t *a3)
{
  _DWORD v8[2]; // [sp+10h] [bp+10h] BYREF
  _BYTE v9[68]; // [sp+18h] [bp+18h] BYREF
  _DWORD *v10; // [sp+5Ch] [bp+5Ch]

  jsonp_error_init(a3, "<string>");
  if ( a1 )
  {
    v8[0] = a1;
    v8[1] = 0;
    if ( lex_init((int)v9, (int)string_get, (int)v8) )
    {
      return 0;
    }
    else
    {
      v10 = parse_json((const lex_t *)v9, a2, (int)a3);
      lex_close((int)v9);
      return v10;
    }
  }
  else
  {
    error_set(a3, 0, "wrong arguments");
    return 0;
  }
}
