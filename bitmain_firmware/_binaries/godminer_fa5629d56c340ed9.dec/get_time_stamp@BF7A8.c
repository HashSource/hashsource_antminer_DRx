int get_time_stamp()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(308, &v1);
  return v1;
}
