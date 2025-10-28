int sub_40FF0()
{
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60DEC, 1u);
  write(dword_C54A6, &unk_60DF0, 1u);
  return pthread_mutex_unlock(&stru_63214);
}
