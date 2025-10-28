int __fastcall sub_4B834(int a1)
{
  int v1; // r1

  if ( a1 <= 19 )
  {
    v1 = 20;
  }
  else
  {
    if ( a1 > 100 )
    {
      v1 = 100;
      goto LABEL_8;
    }
    v1 = a1;
  }
  if ( byte_78BD8 )
    v1 = 100;
LABEL_8:
  dword_93508 = 100000 * v1 / 100;
  byte_93C55 = v1;
  return sub_42570(33, (100 - a1) | (a1 << 16));
}
