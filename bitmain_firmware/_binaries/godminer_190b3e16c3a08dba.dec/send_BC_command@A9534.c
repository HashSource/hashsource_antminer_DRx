int __fastcall send_BC_command(int *a1, int a2)
{
  int v5; // [sp+4h] [bp-4h] BYREF

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  fpga_write(196, *a1);
  fpga_write(200, a1[1]);
  fpga_write(204, a1[2]);
  fpga_read(196, &v5);
  fpga_read(200, &v5);
  fpga_read(204, &v5);
  fpga_read(192, &v5);
  sub_A7FEC(v5 & 0x7F70FFFF | 0x80800000 | (a2 << 16));
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
