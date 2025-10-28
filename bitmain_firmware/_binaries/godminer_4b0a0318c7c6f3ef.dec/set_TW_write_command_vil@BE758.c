int __fastcall set_TW_write_command_vil(int *a1)
{
  int v2; // r4

  v2 = 0;
  pthread_mutex_lock(&tw_cmd_acc_mutex);
  while ( !v2 )
  {
    fpga_write(64, *a1);
LABEL_2:
    ++v2;
  }
  fpga_write(68, a1[v2]);
  if ( v2 != 12 )
    goto LABEL_2;
  return pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
