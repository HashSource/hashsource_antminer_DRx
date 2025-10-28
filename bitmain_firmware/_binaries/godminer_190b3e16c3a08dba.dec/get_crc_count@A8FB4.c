int get_crc_count()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(248, &v1);
  return (unsigned __int16)v1;
}
