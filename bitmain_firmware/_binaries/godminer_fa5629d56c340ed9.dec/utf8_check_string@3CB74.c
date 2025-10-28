int __fastcall utf8_check_string(int a1, unsigned int a2)
{
  int v4; // r4
  unsigned int v5; // r5
  char *v6; // r0

  if ( !a2 )
    return 1;
  v4 = 0;
  while ( 1 )
  {
    v5 = utf8_check_first(*(unsigned __int8 *)(a1 + v4));
    v6 = (char *)(a1 + v4);
    if ( !v5 )
      break;
    if ( v5 > 1 )
    {
      if ( a2 - v4 < v5 )
        break;
      v4 = v5 + v4 - 1;
      if ( !utf8_check_full(v6, v5, 0) )
        break;
    }
    if ( a2 <= ++v4 )
      return 1;
  }
  return 0;
}
