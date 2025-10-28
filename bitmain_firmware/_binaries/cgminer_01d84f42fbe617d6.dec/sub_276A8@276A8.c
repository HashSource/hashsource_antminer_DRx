int sub_276A8()
{
  char s1[5]; // [sp+7h] [bp-5h] BYREF

  pthread_setcanceltype(1, 0);
  sub_2F02C("Input");
  if ( byte_612F8 )
  {
    do
    {
      while ( 1 )
      {
        s1[0] = wgetch((WINDOW *)stdscr);
        if ( !strncasecmp(s1, "q", 1u) )
          sub_17328();
        if ( strncasecmp(s1, "d", 1u) )
          break;
        sub_25D2C();
        if ( byte_640B8 )
          goto LABEL_10;
      }
      if ( !strncasecmp(s1, "p", 1u) )
      {
        sub_26B74();
      }
      else if ( !strncasecmp(s1, "s", 1u) )
      {
        sub_263D4();
      }
    }
    while ( !byte_640B8 );
LABEL_10:
    sub_19060();
  }
  return 0;
}
