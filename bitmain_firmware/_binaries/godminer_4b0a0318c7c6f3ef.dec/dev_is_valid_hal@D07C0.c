int __fastcall dev_is_valid_hal(int a1)
{
  return LOBYTE(g_chain_info[2 * a1 + 1]);
}
