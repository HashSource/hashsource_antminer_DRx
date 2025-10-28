int get_block_header_version()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(304, &v1);
  return v1;
}
