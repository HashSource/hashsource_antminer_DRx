int __fastcall chain_reset_low(char a1)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  v3 = 0;
  fpga_read(52, &v3);
  return fpga_write(52, v3 | (1 << a1));
}
