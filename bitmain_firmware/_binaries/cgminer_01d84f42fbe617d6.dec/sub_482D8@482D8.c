unsigned __int8 *__fastcall sub_482D8(unsigned __int8 *a1, unsigned int *a2, unsigned __int8 **a3)
{
  unsigned __int8 *v5; // r0

  v5 = sub_47F4C(a1, a2, a3);
  if ( !v5 )
    return 0;
  while ( *v5 != 45 )
  {
    v5 = sub_47F4C(v5, a2, a3);
    if ( !v5 )
      return 0;
  }
  --*a3;
  return v5 + 1;
}
