int __fastcall sub_BE54(int a1)
{
  if ( *(_BYTE *)(a1 + 97) )
    return 1;
  if ( *(_DWORD *)(a1 + 100) != 1 )
    return 1;
  if ( *(_BYTE *)(a1 + 640) )
    return *(unsigned __int8 *)(a1 + 641) ^ 1;
  return 0;
}
