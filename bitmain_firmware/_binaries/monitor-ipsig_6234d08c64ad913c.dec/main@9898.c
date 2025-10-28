void __fastcall __noreturn main(int a1, char **a2, char **a3)
{
  printf("monitor-ipsig compile %s--%s\n", "Dec 11 2017", "11:14:27");
  sub_9120();
  while ( 1 )
  {
    if ( sub_980C() == 1 )
    {
      do
      {
        puts("Key Down!!!!!");
        sub_92C8();
      }
      while ( sub_94C8() != 1 );
    }
    else
    {
      usleep(0x61A80u);
    }
  }
}
