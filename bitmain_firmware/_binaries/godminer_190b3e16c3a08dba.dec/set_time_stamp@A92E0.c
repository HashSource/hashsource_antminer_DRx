int __fastcall set_time_stamp(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(308, a1);
  return fpga_read(308, &v2);
}
