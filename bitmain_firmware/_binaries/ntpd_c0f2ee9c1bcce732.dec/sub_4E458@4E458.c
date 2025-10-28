unsigned int __fastcall sub_4E458(unsigned int result, int a2, signed int a3)
{
  bool v4; // zf
  unsigned int v5; // r12

  v4 = result == 0;
  v5 = bswap32(result);
  ++dword_CB750;
  if ( !result )
    result = 4;
  *(_DWORD *)(a2 + 4 * (a3 / 4)) = v5;
  if ( !v4 )
  {
    result = sub_4DD08(result);
    if ( result )
      return sub_4CFA0(dword_CB748, dword_CB85C, a2, a3);
  }
  return result;
}
