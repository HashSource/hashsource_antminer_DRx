int sub_27458()
{
  char s1; // [sp+7h] [bp-5h] BYREF

  pthread_setcanceltype(1, 0);
  sub_34604("Input");
  if ( byte_73E7D )
  {
    do
    {
      s1 = wgetch((WINDOW *)stdscr);
      if ( !strncasecmp(&s1, "q", 1u) )
        sub_182C8();
      if ( !strncasecmp(&s1, "d", 1u) )
      {
        sub_257FC();
      }
      else if ( !strncasecmp(&s1, "p", 1u) )
      {
        sub_2675C();
      }
      else if ( !strncasecmp(&s1, "s", 1u) )
      {
        sub_25F68();
      }
    }
    while ( !byte_79BE0 );
    sub_1567C();
  }
  return 0;
}
