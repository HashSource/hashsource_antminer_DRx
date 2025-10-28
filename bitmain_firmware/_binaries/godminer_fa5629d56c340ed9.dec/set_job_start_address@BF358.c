int __fastcall set_job_start_address(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(280, a1);
  return fpga_read(280, &v2);
}
