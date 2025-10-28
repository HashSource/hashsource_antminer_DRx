int __fastcall sub_10124C(_DWORD *a1, _DWORD *a2, char *s2)
{
  int v3; // r3
  int v4; // r5
  char *v5; // r12
  int v6; // t1
  int v7; // r3
  int v9; // r4
  int v10; // r6

  v3 = (unsigned __int8)*s2;
  if ( *s2 )
  {
    v5 = s2;
    v4 = 5381;
    do
    {
      v4 = (33 * v4) ^ v3;
      v6 = (unsigned __int8)*++v5;
      v3 = v6;
    }
    while ( v6 );
  }
  else
  {
    v4 = 5381;
  }
  if ( !*a2 )
    return 0;
  v7 = (*a2 - 1) & v4;
  v9 = *(_DWORD *)(*a1 + 4 * v7);
  v10 = *a1 + 4 * v7;
  if ( v9 )
  {
    while ( *(_DWORD *)v9 != v4 || strcmp((const char *)(v9 + 12), s2) )
    {
      v10 = v9 + 8;
      v9 = *(_DWORD *)(v9 + 8);
      if ( !v9 )
        return v9;
    }
    return v10;
  }
  return v9;
}
