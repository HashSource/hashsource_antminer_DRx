int __fastcall sub_3B268(int a1)
{
  if ( a1 == 115200 )
    return 4098;
  if ( a1 <= 115200 )
  {
    if ( a1 == 19200 )
      return 14;
    if ( a1 > 19200 )
    {
      if ( a1 != 38400 )
      {
        if ( a1 == 57600 )
          return 4097;
        return 0;
      }
      return 15;
    }
    if ( a1 == 9600 )
      return 13;
    return 0;
  }
  if ( (_UNKNOWN *)a1 == &unk_70800 )
    return 4100;
  if ( a1 <= (int)&unk_70800 )
  {
    if ( a1 == 230400 )
      return 4099;
    return 0;
  }
  if ( a1 != 921600 )
  {
    if ( a1 == 3000000 )
      return 4109;
    return 0;
  }
  return 4103;
}
