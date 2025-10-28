int get_block_header_version_2()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(360, &v1);
  return v1;
}
