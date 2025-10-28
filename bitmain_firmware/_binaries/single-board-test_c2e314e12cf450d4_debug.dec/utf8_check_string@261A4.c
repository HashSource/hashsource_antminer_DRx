int __fastcall utf8_check_string(const char *a1, signed int a2)
{
  signed int v4; // [sp+0h] [bp+0h]
  signed int v6; // [sp+8h] [bp+8h]
  int i; // [sp+Ch] [bp+Ch]

  v4 = a2;
  if ( a2 == -1 )
    v4 = strlen(a1);
  for ( i = 0; i < v4; ++i )
  {
    v6 = utf8_check_first(a1[i]);
    if ( !v6 )
      return 0;
    if ( v6 > 1 )
    {
      if ( i + v6 > v4 )
        return 0;
      if ( !utf8_check_full((char *)&a1[i], v6, 0) )
        return 0;
      i += v6 - 1;
    }
  }
  return 1;
}
