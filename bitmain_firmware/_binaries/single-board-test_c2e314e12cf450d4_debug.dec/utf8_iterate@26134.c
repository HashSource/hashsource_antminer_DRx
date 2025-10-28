char *__fastcall utf8_iterate(char *a1, _DWORD *a2)
{
  int v6; // [sp+8h] [bp+8h] BYREF
  int v7; // [sp+Ch] [bp+Ch]

  if ( !*a1 )
    return a1;
  v7 = utf8_check_first(*a1);
  if ( v7 <= 0 )
    return 0;
  if ( v7 == 1 )
  {
    v6 = (unsigned __int8)*a1;
  }
  else if ( !utf8_check_full(a1, v7, &v6) )
  {
    return 0;
  }
  if ( a2 )
    *a2 = v6;
  return &a1[v7];
}
