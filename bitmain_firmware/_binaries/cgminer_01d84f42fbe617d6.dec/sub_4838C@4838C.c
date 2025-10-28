unsigned __int8 *__fastcall sub_4838C(unsigned __int8 *a1, unsigned int *a2)
{
  unsigned __int8 *result; // r0
  int v4; // [sp+4h] [bp-8h] BYREF

  v4 = 1;
  result = sub_47F4C(a1, a2, (unsigned __int8 **)&v4);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = sub_47F4C(result, a2, (unsigned __int8 **)&v4);
    if ( !result )
      return 0;
  }
  return result;
}
