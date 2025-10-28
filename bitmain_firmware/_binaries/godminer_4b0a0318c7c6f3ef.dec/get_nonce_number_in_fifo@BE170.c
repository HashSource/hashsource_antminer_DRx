int get_nonce_number_in_fifo()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(24, &v1);
  return v1;
}
