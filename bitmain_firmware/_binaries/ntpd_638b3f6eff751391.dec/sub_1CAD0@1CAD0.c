unsigned __int16 *__fastcall sub_1CAD0(int a1, __int16 a2)
{
  int v2; // r2

  if ( (a2 & 0x200) != 0 )
    v2 = 2;
  else
    v2 = 1;
  if ( !sub_1CA7C((unsigned __int16 *)(a1 + 8), *(_DWORD *)(a1 + 64), v2) )
    sub_1B684(4);
  return sub_19AF8(0);
}
