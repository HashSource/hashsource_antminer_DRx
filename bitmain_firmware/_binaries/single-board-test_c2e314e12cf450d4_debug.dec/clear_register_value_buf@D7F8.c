void *clear_register_value_buf()
{
  pthread_mutex_lock(&reg_mutex);
  *(_DWORD *)reg_value_buf = 0;
  *(_DWORD *)(reg_value_buf + 4) = 0;
  *(_DWORD *)(reg_value_buf + 8) = 0;
  *(_DWORD *)(reg_value_buf + 12) = 0;
  pthread_mutex_unlock(&reg_mutex);
  return memset((void *)(reg_value_buf + 16), 0, 0x1400u);
}
