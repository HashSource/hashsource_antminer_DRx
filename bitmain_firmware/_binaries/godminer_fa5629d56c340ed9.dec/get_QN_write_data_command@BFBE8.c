int get_QN_write_data_command()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(128, &v1);
  return v1;
}
