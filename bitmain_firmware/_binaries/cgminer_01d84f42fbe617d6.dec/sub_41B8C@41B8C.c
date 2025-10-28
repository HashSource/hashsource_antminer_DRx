int __fastcall sub_41B8C(int a1)
{
  int v1; // r0

  if ( (unsigned int)(a1 - 48) <= 9 )
    return a1 & 0xF;
  v1 = a1 & 0xDF;
  switch ( v1 )
  {
    case 'A':
      return 10;
    case 'B':
      return 11;
    case 'C':
      return 12;
    case 'D':
      return 13;
    case 'E':
      return 14;
    case 'F':
      return 15;
  }
  return 255;
}
