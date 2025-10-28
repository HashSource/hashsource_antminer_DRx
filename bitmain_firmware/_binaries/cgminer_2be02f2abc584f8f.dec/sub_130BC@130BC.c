int __fastcall sub_130BC(int a1, int a2)
{
  int result; // r0

  if ( !a1 )
    return 0;
  result = *(_DWORD *)(a1 + 412);
  if ( *(_DWORD *)(a1 + 400) == a2 )
    return a1;
  while ( result && *(_DWORD *)(result + 400) != a2 )
    result = *(_DWORD *)(result + 412);
  return result;
}
