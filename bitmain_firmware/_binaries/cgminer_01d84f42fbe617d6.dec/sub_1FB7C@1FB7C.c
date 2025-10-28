int __fastcall sub_1FB7C(int a1)
{
  int v3; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( dword_611AC == 4 || dword_611AC == 3 || *(_BYTE *)(a1 + 632) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( a1 == sub_1D644() )
    return 1;
  if ( *(_DWORD *)(a1 + 700) )
    return 1;
  if ( !dword_611AC )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 < sub_1F70C() )
      return 1;
  }
  return (unsigned __int8)byte_612D0;
}
