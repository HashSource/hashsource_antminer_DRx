int get_hash_counting_number()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  fpga_read(144, &v1);
  return v1;
}
