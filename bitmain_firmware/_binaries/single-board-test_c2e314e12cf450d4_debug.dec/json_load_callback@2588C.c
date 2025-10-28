_DWORD *__fastcall json_load_callback(int a1, int a2, unsigned int a3, json_error_t *a4)
{
  json_error_t *v6; // [sp+0h] [bp+0h]
  unsigned int v7; // [sp+4h] [bp+4h]
  int v8; // [sp+8h] [bp+8h]
  int v9; // [sp+Ch] [bp+Ch]
  _DWORD s[260]; // [sp+10h] [bp+10h] BYREF
  _BYTE v11[68]; // [sp+420h] [bp+420h] BYREF
  _DWORD *v12; // [sp+464h] [bp+464h]

  v9 = a1;
  v8 = a2;
  v7 = a3;
  v6 = a4;
  memset(s, 0, sizeof(s));
  s[258] = v9;
  s[259] = v8;
  jsonp_error_init(v6, "<callback>");
  if ( v9 )
  {
    if ( lex_init((int)v11, (int)callback_get, (int)s) )
    {
      return 0;
    }
    else
    {
      v12 = parse_json((const lex_t *)v11, v7, (int)v6);
      lex_close((int)v11);
      return v12;
    }
  }
  else
  {
    error_set(v6, 0, "wrong arguments");
    return 0;
  }
}
