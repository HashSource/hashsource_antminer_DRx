int __fastcall set_nonce_fifo_interrupt(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(28, a1);
  return fpga_read(28, &v2);
}
