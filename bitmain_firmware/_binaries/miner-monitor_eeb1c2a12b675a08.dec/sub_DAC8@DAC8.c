_DWORD *__fastcall sub_DAC8(_DWORD *result, const char *a2, int a3)
{
  _DWORD *v4; // r5
  void *v6; // r0
  _DWORD *v7; // r1

  v4 = result;
  if ( a3 )
  {
    v6 = *(void **)(a3 + 32);
    if ( v6 )
      off_1B378(v6);
    result = sub_C574(a2);
    v7 = (_DWORD *)v4[2];
    if ( !v7 )
      v4[2] = a3;
    *(_DWORD *)(a3 + 32) = result;
    if ( v7 )
    {
      while ( *v7 )
        v7 = (_DWORD *)*v7;
      *v7 = a3;
      *(_DWORD *)(a3 + 4) = v7;
    }
  }
  return result;
}
