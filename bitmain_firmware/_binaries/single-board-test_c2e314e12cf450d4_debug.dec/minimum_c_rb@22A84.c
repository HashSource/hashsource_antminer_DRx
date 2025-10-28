_DWORD *__fastcall minimum_c_rb(int a1, _DWORD *a2)
{
  while ( *a2 != a1 + 4 )
    a2 = (_DWORD *)*a2;
  return a2;
}
