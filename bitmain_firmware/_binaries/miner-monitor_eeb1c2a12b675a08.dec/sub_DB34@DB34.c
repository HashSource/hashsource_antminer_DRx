_DWORD *__fastcall sub_DB34(int a1, int *a2)
{
  _DWORD *result; // r0
  _DWORD *v4; // r2

  result = sub_C5B4(a2);
  v4 = *(_DWORD **)(a1 + 8);
  if ( result )
  {
    if ( v4 )
    {
      while ( *v4 )
        v4 = (_DWORD *)*v4;
      *v4 = result;
      result[1] = v4;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = result;
    }
  }
  return result;
}
