unsigned int all_chain_reset_high()
{
  unsigned int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(52, &v1);
  v1 = ~(~HIWORD(v1) << 16);
  fpga_write(52, v1);
  return sleep(2u);
}
