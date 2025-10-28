int get_block_header_version_1()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(356, &v1);
  return v1;
}
