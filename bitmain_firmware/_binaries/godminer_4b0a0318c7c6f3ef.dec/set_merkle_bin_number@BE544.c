int __fastcall set_merkle_bin_number(unsigned __int16 a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(276, a1);
  return fpga_read(276, &v2);
}
