_DWORD *__fastcall sub_2A3E0(_DWORD *result, __int64 *a2)
{
  __int64 v2; // kr00_8
  int v3; // r2
  int v4; // r3
  __int64 v5; // r2

  v2 = *a2;
  v3 = *result - *(_DWORD *)a2;
  *(_DWORD *)a2 = v3;
  v4 = result[1] - HIDWORD(v2);
  *((_DWORD *)a2 + 1) = v4;
  if ( v4 < 0 )
  {
    LODWORD(v5) = v3 - 1;
    HIDWORD(v5) = v4 + 1000000;
    *a2 = v5;
  }
  return result;
}
