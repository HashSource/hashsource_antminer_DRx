int disable_mid_auto_gen_rx()
{
  return fpga_write(248, 0x10000);
}
