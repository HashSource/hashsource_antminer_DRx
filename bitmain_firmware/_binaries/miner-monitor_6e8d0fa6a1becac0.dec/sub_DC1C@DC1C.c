_DWORD *__fastcall sub_DC1C(int a1, int a2)
{
  _DWORD *v3; // r4
  int v5; // r5

  v3 = *(_DWORD **)(a1 + 8);
  if ( !v3 )
    return 0;
  v5 = 0;
  while ( sub_C634(v3[8], a2) )
  {
    v3 = (_DWORD *)*v3;
    ++v5;
    if ( !v3 )
      return 0;
  }
  return sub_DBA4(a1, v5);
}
