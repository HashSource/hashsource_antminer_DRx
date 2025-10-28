bool __fastcall sub_BD38(int a1, int a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a2 + 8);
  if ( v2 < v3 )
    return 1;
  if ( v2 == v3 )
    return *(_DWORD *)(a1 + 4) < *(_DWORD *)(a2 + 4);
  return 0;
}
