int __fastcall hal_chain_reset_addr(int a1)
{
  int i; // [sp+Ch] [bp+Ch]

  if ( !conf_loaded )
    return -1;
  for ( i = 0; i <= 15; ++i )
  {
    if ( chains[4 * i] == a1 )
      return chains[4 * i + 3];
  }
  return -2;
}
