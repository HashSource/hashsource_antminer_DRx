int __fastcall sub_D1B4(int result, int a2, int a3)
{
  bool v4; // zf
  unsigned int v5; // r12

  v4 = result == 0;
  v5 = bswap32(result);
  ++dword_240B8;
  if ( !result )
    result = 4;
  *(_DWORD *)(a2 + 4 * (a3 / 4)) = v5;
  if ( !v4 )
  {
    result = sub_CA64(result);
    if ( result )
      return sub_F890(dword_240B0, dword_241C4, a2, a3);
  }
  return result;
}
