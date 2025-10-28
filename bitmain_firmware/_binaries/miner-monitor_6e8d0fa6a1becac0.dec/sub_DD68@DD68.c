_DWORD *sub_DD68()
{
  _DWORD *result; // r0

  result = sub_C540();
  if ( result )
    result[3] = 2;
  return result;
}
