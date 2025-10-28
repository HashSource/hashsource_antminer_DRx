int hal_chain_max_num()
{
  int i; // [sp+4h] [bp+4h]

  if ( !conf_loaded )
    return -1;
  for ( i = 0;
        i <= 15
     && (chains[4 * i] != 255 || chains[4 * i + 1] != 255 || chains[4 * i + 2] != 255 || chains[4 * i + 3] != 255);
        ++i )
  {
    ;
  }
  return i;
}
