_DWORD *sub_DE34()
{
  _DWORD *result; // r0

  result = sub_C540();
  if ( result )
    result[3] = 5;
  return result;
}
