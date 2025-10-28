int get_block_header_version_3()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(364, &v1);
  return v1;
}
