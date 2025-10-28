int __fastcall sub_58970(char a1, int a2, int a3, int (__fastcall *a4)(__int16 *, int, int), int a5)
{
  int v7; // r8
  int v8; // r4
  int result; // r0

  v7 = a1 & 0x1F;
  if ( (a1 & 0x1F) != 0 )
  {
    if ( a4(&word_6E448, 1, a5) )
      return -1;
    if ( a2 > 0 )
    {
      v8 = 0;
      while ( 1 )
      {
        result = a4((__int16 *)"                                ", v7, a5);
        if ( result )
          break;
        if ( ++v8 == a2 )
          return result;
      }
      return -1;
    }
    return 0;
  }
  else if ( a3 )
  {
    if ( (a1 & 0x20) != 0 )
      return 0;
    else
      return a4((__int16 *)" ", 1, a5);
  }
  else
  {
    return 0;
  }
}
