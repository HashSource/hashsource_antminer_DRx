int check_chain()
{
  unsigned int v2; // [sp+4h] [bp+4h] BYREF
  unsigned __int8 v3; // [sp+8h] [bp+8h]

  printf("--- %s\n", "check_chain");
  if ( platform_init() )
  {
    puts("platform init failed!");
    return -1;
  }
  else
  {
    get_system_capability(&v2);
    if ( v2 == 1 )
    {
      gChain = v3;
      chain_info[2 * v3] = v3;
      chain_info[2 * (unsigned __int8)gChain + 1] = 0;
      printf("gChain = %d\n", (unsigned __int8)gChain);
      return 0;
    }
    else
    {
      if ( v2 <= 1 )
        puts("no hash board inserted");
      else
        puts("test zhiju only support 1 plug");
      return -1;
    }
  }
}
