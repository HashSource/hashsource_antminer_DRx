int __fastcall set_time_out_control(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(136, a1);
  return fpga_read(136, &v2);
}
