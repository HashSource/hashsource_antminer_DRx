int __fastcall c2hex(unsigned __int8 a1)
{
  unsigned __int8 v2; // [sp+Fh] [bp+Fh]

  v2 = -1;
  if ( a1 <= 0x2Fu || a1 > 0x39u )
  {
    switch ( a1 )
    {
      case 'a':
      case 'A':
        return 10;
      case 'b':
      case 'B':
        return 11;
      case 'c':
      case 'C':
        return 12;
      case 'd':
      case 'D':
        return 13;
      case 'e':
      case 'E':
        return 14;
      case 'f':
      case 'F':
        return 15;
      default:
        printf("input value error: %c\n", a1);
        break;
    }
  }
  else
  {
    return a1 & 0xF;
  }
  return v2;
}
