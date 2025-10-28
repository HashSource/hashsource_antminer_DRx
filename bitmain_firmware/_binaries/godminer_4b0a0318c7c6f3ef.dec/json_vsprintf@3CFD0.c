_DWORD *__fastcall json_vsprintf(char *format, __gnuc_va_list arg)
{
  int v3; // r0
  size_t v4; // r4
  char *v5; // r0
  char *v6; // r7

  v3 = vsnprintf(0, 0, format, arg);
  v4 = v3;
  if ( !v3 )
    return json_stringn("", 0);
  v5 = (char *)jsonp_malloc((void *)(v3 + 1));
  v6 = v5;
  if ( !v5 )
    return 0;
  vsnprintf(v5, v4 + 1, format, arg);
  if ( utf8_check_string((int)v6, v4) )
    return sub_3C864(v6, v4, 1);
  jsonp_free(v6);
  return 0;
}
