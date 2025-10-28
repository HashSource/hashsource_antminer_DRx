int sub_4D50C()
{
  pthread_mutex_lock(&stru_75C78);
  dword_86A74[0] = 0;
  dword_86A78 = 0;
  dword_86A7C = 0;
  sub_43348(0);
  sub_43348(1);
  sub_43348(2);
  sub_43348(3);
  return pthread_mutex_unlock(&stru_75C78);
}
