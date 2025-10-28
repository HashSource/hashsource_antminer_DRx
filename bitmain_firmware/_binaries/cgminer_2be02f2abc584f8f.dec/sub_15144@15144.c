int __fastcall sub_15144(int a1)
{
  int v2; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( dword_739C4 == 4 )
    return 1;
  if ( dword_739C4 == 3 )
    return 1;
  if ( *(_BYTE *)(a1 + 640) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( a1 == sub_14838() )
    return 1;
  if ( *(_DWORD *)(a1 + 748) )
    return 1;
  if ( dword_739C4 )
    return (unsigned __int8)byte_73E7C;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 >= sub_14ED0() )
    return (unsigned __int8)byte_73E7C;
  return 1;
}
