int __fastcall sub_2BF0C(int a1)
{
  int result; // r0

  sub_2BEF8(a1);
  *(_BYTE *)(a1 + 643) = 0;
  *(_BYTE *)(a1 + 641) = 0;
  result = *(_DWORD *)(a1 + 588);
  if ( result )
    result = close(result);
  *(_DWORD *)(a1 + 588) = 0;
  return result;
}
