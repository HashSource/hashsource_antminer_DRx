int get_job_start_address()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(280, &v1);
  return v1;
}
