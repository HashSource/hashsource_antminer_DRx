_DWORD *__fastcall sub_3C864(_BYTE *a1, size_t a2, int a3)
{
  _BYTE *v3; // r5
  _DWORD *result; // r0

  v3 = a1;
  if ( !a1 )
    return 0;
  if ( !a3 )
  {
    v3 = jsonp_strndup(a1, a2);
    if ( !v3 )
      return 0;
  }
  result = jsonp_malloc((void *)0x10);
  if ( result )
  {
    result[2] = v3;
    result[3] = a2;
    *result = 2;
    result[1] = 1;
  }
  else
  {
    jsonp_free(v3);
    return 0;
  }
  return result;
}
