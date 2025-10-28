int __fastcall sub_15324(int a1)
{
  int v2; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( dword_7AA24 == 4 )
    return 1;
  if ( dword_7AA24 == 3 )
    return 1;
  if ( *(_BYTE *)(a1 + 640) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( a1 == sub_14A18() )
    return 1;
  if ( *(_DWORD *)(a1 + 748) )
    return 1;
  if ( dword_7AA24 )
    return (unsigned __int8)byte_7AEDC;
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 >= sub_150B0() )
    return (unsigned __int8)byte_7AEDC;
  return 1;
}
