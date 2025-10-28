int __fastcall hs_header_padding(int result, int a2, int a3)
{
  int v3; // r1
  int i; // r12
  int v5; // r3

  if ( a3 )
  {
    v3 = a2 - 1;
    for ( i = 0; i != a3; ++i )
    {
      v5 = i & 0x1F;
      *(_BYTE *)++v3 = *(_BYTE *)(result + v5 + 68) ^ *(_BYTE *)(result + v5 + 36);
    }
  }
  return result;
}
