int __fastcall chain_reset_low_hal(int a1)
{
  chain_reset_low(g_chain_info[2 * a1]);
  return 0;
}
