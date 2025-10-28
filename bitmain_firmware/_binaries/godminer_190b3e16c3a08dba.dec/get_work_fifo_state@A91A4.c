int get_work_fifo_state()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(12, &v1);
  return v1;
}
