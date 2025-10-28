int get_nonce_fifo_interrupt()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(28, &v1);
  return v1;
}
