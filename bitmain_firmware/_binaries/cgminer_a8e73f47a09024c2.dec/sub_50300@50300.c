int sub_50300()
{
  pthread_mutex_lock(&stru_7CD30);
  dword_9A5EC[0] = 0;
  dword_9A5F0 = 0;
  dword_9A5F4 = 0;
  sub_44714(0);
  sub_44714(1);
  sub_44714(2);
  sub_44714(3);
  return pthread_mutex_unlock(&stru_7CD30);
}
