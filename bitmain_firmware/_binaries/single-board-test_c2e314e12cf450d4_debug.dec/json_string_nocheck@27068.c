_DWORD *__fastcall json_string_nocheck(const char *a1)
{
  _DWORD *v4; // [sp+Ch] [bp+Ch]

  if ( !a1 )
    return 0;
  v4 = jsonp_malloc(0xCu);
  if ( !v4 )
    return 0;
  json_init(v4, 2);
  v4[2] = jsonp_strdup(a1);
  if ( v4[2] )
    return v4;
  jsonp_free(v4);
  return 0;
}
