int get_dhash_acc_control()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(256, &v1);
  return v1;
}
