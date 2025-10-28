int __fastcall set_hardware_version(int a1)
{
  return fpga_write(0, a1);
}
