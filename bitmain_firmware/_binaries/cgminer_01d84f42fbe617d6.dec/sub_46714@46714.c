_DWORD *__fastcall sub_46714(_DWORD *a1)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r0
  _DWORD *result; // r0

  if ( !a1 || *a1 )
    return 0;
  v2 = a1 + 2;
  v1 = v2 + 3;
  result = (_DWORD *)v2[4];
  if ( result == v1 )
    return 0;
  return result;
}
