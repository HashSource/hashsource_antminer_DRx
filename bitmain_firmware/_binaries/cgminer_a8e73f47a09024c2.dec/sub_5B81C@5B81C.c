int __fastcall sub_5B81C(int a1)
{
  if ( (a1 & 0x80) == 0 )
    return 1;
  if ( (a1 ^ 0x80u) <= 0x3F )
    return 0;
  if ( (unsigned __int8)(a1 + 64) <= 1u )
    return 0;
  if ( (unsigned __int8)(a1 + 62) <= 0x1Du )
    return 2;
  if ( (unsigned __int8)(a1 + 32) <= 0xFu )
    return 3;
  if ( (unsigned __int8)(a1 + 16) > 4u )
    return 0;
  return 4;
}
