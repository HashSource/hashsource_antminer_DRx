int __fastcall hardreset_hal(int a1)
{
  usleep(0x493E0u);
  chain_reset_low(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  chain_reset_high(g_chain_info[2 * a1]);
  sleep(1u);
  chain_reset_low(g_chain_info[2 * a1]);
  usleep(0x493E0u);
  chain_reset_high(g_chain_info[2 * a1]);
  return 0;
}
