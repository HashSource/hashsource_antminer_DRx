int __fastcall set_TW_write_command_x_midstate(int *a1, int a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r5
  int v5; // r0
  int v6; // r1

  v2 = 0;
  v4 = (unsigned int)(32 * a2 + 20) >> 2;
  pthread_mutex_lock(&tw_cmd_acc_mutex);
  do
  {
    v5 = 64;
    if ( v2 )
    {
      v6 = a1[v2];
      v5 = 68;
    }
    else
    {
      v6 = *a1;
    }
    ++v2;
    fpga_write(v5, v6);
  }
  while ( v2 < v4 );
  return pthread_mutex_unlock(&tw_cmd_acc_mutex);
}
