int __fastcall Lcd_Fill(char a1)
{
  char i; // r6
  int v3; // r5
  unsigned __int8 v4; // r4
  int result; // r0

  for ( i = 0x80; ; i = v4 )
  {
    LOBYTE(v3) = 0x80;
    do
    {
      v4 = i;
      do
      {
        SendCommad(54);
        SendCommad(v3);
        SendCommad(v4);
        SendData(a1);
        SendData(a1);
        ++v4;
        result = SendCommad(48);
      }
      while ( v4 != (unsigned __int8)(i + 8) );
      v3 = (unsigned __int8)(v3 + 1);
    }
    while ( v3 != 160 );
    if ( v4 == 144 )
      break;
  }
  return result;
}
