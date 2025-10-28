int __fastcall dev_init_pic_for_one_chain(int a1)
{
  int result; // r0

  result = platform_is_pic_mcu_en();
  if ( result )
  {
    if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
    {
      return sub_D2700(a1);
    }
    else
    {
      printf("Chain offset %d is invalid\n", a1);
      return -1;
    }
  }
  return result;
}
