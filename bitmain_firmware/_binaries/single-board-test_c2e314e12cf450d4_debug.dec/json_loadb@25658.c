_DWORD *__fastcall json_loadb(int a1, int a2, unsigned int a3, json_error_t *a4)
{
  _DWORD v10[3]; // [sp+14h] [bp+14h] BYREF
  _BYTE v11[68]; // [sp+20h] [bp+20h] BYREF
  _DWORD *v12; // [sp+64h] [bp+64h]

  jsonp_error_init(a4, "<buffer>");
  if ( a1 )
  {
    v10[0] = a1;
    v10[2] = 0;
    v10[1] = a2;
    if ( lex_init((int)v11, (int)buffer_get, (int)v10) )
    {
      return 0;
    }
    else
    {
      v12 = parse_json((const lex_t *)v11, a3, (int)a4);
      lex_close((int)v11);
      return v12;
    }
  }
  else
  {
    error_set(a4, 0, "wrong arguments");
    return 0;
  }
}
