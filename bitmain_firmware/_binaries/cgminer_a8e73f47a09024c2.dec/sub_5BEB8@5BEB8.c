int __fastcall sub_5BEB8(_DWORD *a1, unsigned int a2)
{
  if ( !a1 )
    return 0;
  if ( *a1 != 1 )
    return 0;
  if ( a1[3] <= a2 )
    return 0;
  return *(_DWORD *)(a1[4] + 4 * a2);
}
