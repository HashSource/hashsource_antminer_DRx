unsigned __int8 *__fastcall sub_48280(unsigned int *a1, unsigned __int8 **a2)
{
  unsigned __int8 *v4; // r0

  v4 = sub_47E64(a1, a2);
  if ( !v4 )
    return 0;
  while ( *v4 != 45 )
  {
    v4 = sub_47F4C(v4, a1, a2);
    if ( !v4 )
      return 0;
  }
  --*a2;
  return v4 + 1;
}
