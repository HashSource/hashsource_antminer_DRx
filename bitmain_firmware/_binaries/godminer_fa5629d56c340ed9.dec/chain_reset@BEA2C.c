int __fastcall chain_reset(char a1)
{
  chain_reset_low(a1);
  usleep((__useconds_t)&stru_18698.st_size);
  return chain_reset_high(a1);
}
