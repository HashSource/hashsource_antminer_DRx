int __fastcall sub_1E394(int a1)
{
  int v3; // r4

  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 0;
  if ( (unsigned int)(dword_6DB74 - 3) <= 1 || *(_BYTE *)(a1 + 640) && *(_BYTE *)(a1 + 97) )
    return 1;
  if ( a1 == sub_1E098() )
    return 1;
  if ( *(_DWORD *)(a1 + 748) )
    return 1;
  if ( !dword_6DB74 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    if ( v3 < sub_1E1C4() )
      return 1;
  }
  return (unsigned __int8)byte_6DD4C;
}
