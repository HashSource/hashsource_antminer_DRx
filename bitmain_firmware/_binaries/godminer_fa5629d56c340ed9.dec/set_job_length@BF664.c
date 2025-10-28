int __fastcall set_job_length(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(284, a1);
  return fpga_read(284, &v2);
}
