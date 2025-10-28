int get_job_length()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(284, &v1);
  return v1;
}
