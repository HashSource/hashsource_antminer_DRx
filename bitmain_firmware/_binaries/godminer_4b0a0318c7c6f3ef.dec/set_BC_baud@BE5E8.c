int __fastcall set_BC_baud(char a1)
{
  int v1; // r4
  int v3; // [sp+4h] [bp-8h] BYREF

  v1 = a1 & 0x3F;
  pthread_mutex_lock(&bc_cmd_acc_mutex);
  usleep(0xC350u);
  fpga_read(192, &v3);
  sub_BD14C(v3 & 0xFFFFFFC0 | v1);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
