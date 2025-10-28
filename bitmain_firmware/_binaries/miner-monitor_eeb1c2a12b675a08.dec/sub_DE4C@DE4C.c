_DWORD *sub_DE4C()
{
  _DWORD *result; // r0

  result = sub_C540();
  if ( result )
    result[3] = 6;
  return result;
}
