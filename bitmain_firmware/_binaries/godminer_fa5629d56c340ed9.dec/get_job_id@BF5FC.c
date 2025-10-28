int get_job_id()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(292, &v1);
  return v1;
}
