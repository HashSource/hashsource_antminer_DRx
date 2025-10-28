const char *__fastcall sub_490BC(int a1, unsigned int *a2)
{
  const char *result; // r0
  size_t v4; // [sp+4h] [bp-8h] BYREF

  v4 = 1;
  result = sub_48E68(a1, a2, &v4);
  if ( !result )
    return 0;
  while ( *result == 45 )
  {
    result = sub_48E68((int)result, a2, &v4);
    if ( !result )
      return 0;
  }
  return result;
}
