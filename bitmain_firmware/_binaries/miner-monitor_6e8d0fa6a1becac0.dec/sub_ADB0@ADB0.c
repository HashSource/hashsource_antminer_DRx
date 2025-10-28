int sub_ADB0()
{
  int v0; // r0
  unsigned int v2; // r0

  v0 = ((int (*)(void))sub_E8DC)();
  if ( v0 )
  {
    if ( v0 == -1 )
      return -1;
    else
      return 1;
  }
  else
  {
    puts("OFF LINE !!!!Please Wait!!! in recv_serpkg_struct() in client");
    do
    {
      while ( dword_1B380 )
      {
        if ( ((int (*)(void))sub_E8DC)() > 0 )
          return 1;
      }
      v2 = sleep(0x1Eu);
    }
    while ( sub_E8DC(v2) <= 0 );
    return 1;
  }
}
