int __fastcall sub_dev_init_hal(unsigned int a1)
{
  if ( a1 >= total_chain )
    puts("warning: get pcie fd error");
  return g_chain_info[2 * a1];
}
