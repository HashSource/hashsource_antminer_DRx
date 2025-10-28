int __fastcall makeup_chip_addr_ae(_BYTE *a1, unsigned int a2)
{
  int result; // r0
  _BYTE *v5; // r2
  char v6; // r3

  result = sub_146690(256, a2);
  if ( a2 )
  {
    v5 = a1;
    v6 = 0;
    do
    {
      *v5++ = v6;
      v6 += result;
    }
    while ( &a1[a2] != v5 );
  }
  return result;
}
