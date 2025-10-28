int __fastcall set_hash_counting_number(int a1)
{
  int v2; // [sp+4h] [bp-8h] BYREF

  fpga_write(144, a1);
  return fpga_read(144, &v2);
}
