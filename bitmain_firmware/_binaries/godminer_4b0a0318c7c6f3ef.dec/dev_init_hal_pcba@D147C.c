int dev_init_hal_pcba()
{
  int v0; // r4
  unsigned int hash_on_plug; // r9
  int v2; // r3
  int v3; // r2

  v0 = platform_init();
  if ( v0 )
    return sub_D13FC();
  total_chain = 0;
  hash_on_plug = get_hash_on_plug();
  printf("plug_on_status: %x\n", hash_on_plug);
  do
  {
    while ( ((hash_on_plug >> v0) & 1) == 0 )
    {
      if ( ++v0 == 16 )
        goto LABEL_6;
    }
    v2 = total_chain;
    v3 = v0;
    g_chain_info[2 * total_chain] = v0++;
    LOBYTE(g_chain_info[2 * v2 + 1]) = 1;
    printf("chain_offset %d, chain %d\n", v2, v3);
    ++total_chain;
  }
  while ( v0 != 16 );
LABEL_6:
  enable_bypass_mode();
  dev_config_hal("tu_t_table");
  return 0;
}
