_DWORD *__fastcall sub_DDB0(int a1)
{
  _DWORD *result; // r0

  result = sub_C540();
  if ( result )
    result[3] = a1 != 0;
  return result;
}
