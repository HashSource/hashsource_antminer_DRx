int disable_dhash_chip_work()
{
  int v1; // [sp+0h] [bp-8h] BYREF
  int v2; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  fpga_read(192, &v1);
  v1 &= ~0x400000u;
  fpga_write(192, v1);
  v2 = 0;
  fpga_read(256, &v2);
  return set_dhash_acc_control(v2 & 0xFFFFFFBF);
}
