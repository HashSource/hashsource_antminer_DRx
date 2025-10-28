int __fastcall sub_4A224(unsigned __int8 a1)
{
  int v2; // r5

  pthread_mutex_lock(&stru_7CE38);
  usleep(0x186A0u);
  v2 = sub_491A8((unsigned __int8)byte_7A9B9, byte_7A9BA, 0, 1, 2u, a1);
  pthread_mutex_unlock(&stru_7CE38);
  return v2;
}
