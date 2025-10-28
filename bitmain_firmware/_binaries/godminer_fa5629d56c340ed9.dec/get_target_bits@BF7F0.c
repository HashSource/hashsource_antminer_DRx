int get_target_bits()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(312, &v1);
  return v1;
}
