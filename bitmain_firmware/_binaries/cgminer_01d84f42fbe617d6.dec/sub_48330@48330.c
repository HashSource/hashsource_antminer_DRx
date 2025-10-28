unsigned __int8 *__fastcall sub_48330(unsigned int *a1)
{
  unsigned __int8 *result; // r0
  unsigned __int8 *v3; // [sp+4h] [bp-8h] BYREF

  v3 = 0;
  result = sub_47E64(a1, &v3);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = sub_47F4C(result, a1, &v3);
    if ( !result )
      return 0;
  }
  return result;
}
