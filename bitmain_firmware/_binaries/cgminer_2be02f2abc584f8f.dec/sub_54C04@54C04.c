int __fastcall sub_54C04(int a1, int *a2, char *s2, int a4)
{
  int v7; // r4

  v7 = *a2;
  if ( *a2 == a1 + 12 && v7 == a2[1] )
    return 0;
  while ( *(_DWORD *)(v7 - 4) != a4 || strcmp((const char *)(v7 + 16), s2) )
  {
    if ( a2[1] == v7 )
      return 0;
    v7 = *(_DWORD *)(v7 + 4);
  }
  return v7 - 4;
}
