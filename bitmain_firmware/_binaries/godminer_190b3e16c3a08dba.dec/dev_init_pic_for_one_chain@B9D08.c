int __fastcall dev_init_pic_for_one_chain(int a1)
{
  int result; // r0
  const char *v3; // r0

  result = platform_is_pic_mcu_en();
  if ( result )
  {
    if ( LOBYTE(g_chain_info[2 * a1 + 1]) )
    {
      return sub_B9BB0(a1);
    }
    else
    {
      LOWORD(v3) = -7764;
      HIWORD(v3) = (unsigned int)"ux_KDA_2110" >> 16;
      printf(v3, a1);
      return -1;
    }
  }
  return result;
}
