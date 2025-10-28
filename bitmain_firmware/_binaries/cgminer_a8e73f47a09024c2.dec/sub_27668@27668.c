int sub_27668()
{
  char s1; // [sp+7h] [bp-5h] BYREF

  pthread_setcanceltype(1, 0);
  sub_34684("Input");
  if ( byte_7AEDD )
  {
    do
    {
      s1 = wgetch((WINDOW *)stdscr);
      if ( !strncasecmp(&s1, "q", 1u) )
        sub_184A8();
      if ( !strncasecmp(&s1, "d", 1u) )
      {
        sub_25A0C();
      }
      else if ( !strncasecmp(&s1, "p", 1u) )
      {
        sub_2696C();
      }
      else if ( !strncasecmp(&s1, "s", 1u) )
      {
        sub_26178();
      }
    }
    while ( !byte_80CC0 );
    sub_1585C();
  }
  return 0;
}
