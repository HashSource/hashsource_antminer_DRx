int set_BC_nullen_all_chain()
{
  int v1; // [sp+4h] [bp-4h] BYREF

  pthread_mutex_lock(&bc_cmd_acc_mutex);
  fpga_read(192, &v1);
  return pthread_mutex_unlock(&bc_cmd_acc_mutex);
}
