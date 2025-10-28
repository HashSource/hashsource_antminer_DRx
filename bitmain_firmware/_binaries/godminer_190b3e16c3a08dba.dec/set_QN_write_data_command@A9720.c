int __fastcall set_QN_write_data_command(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(128, a1);
  return fpga_read(128, &v2);
}
