int __fastcall chain_reset(char a1)
{
  chain_reset_low(a1);
  usleep(0x186A0u);
  return chain_reset_high(a1);
}
