_DWORD *sub_DD80()
{
  _DWORD *result; // r0

  result = sub_C540();
  if ( result )
    result[3] = 1;
  return result;
}
