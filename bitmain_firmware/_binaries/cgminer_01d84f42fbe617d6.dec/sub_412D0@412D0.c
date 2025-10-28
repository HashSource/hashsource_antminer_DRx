int sub_412D0()
{
  sub_40FF0();
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60E10, 1u);
  pthread_mutex_unlock(&stru_63214);
  return usleep((__useconds_t)&unk_7A120);
}
