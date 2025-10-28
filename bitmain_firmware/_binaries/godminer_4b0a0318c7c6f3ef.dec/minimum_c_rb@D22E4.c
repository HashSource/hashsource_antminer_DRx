_DWORD *__fastcall minimum_c_rb(int a1, _DWORD *a2)
{
  int v2; // r0

  v2 = a1 + 4;
  while ( *a2 != v2 )
    a2 = (_DWORD *)*a2;
  return a2;
}
