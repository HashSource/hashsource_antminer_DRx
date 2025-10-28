int __fastcall set_block_header_version(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(304, a1);
  return fpga_read(304, &v2);
}
