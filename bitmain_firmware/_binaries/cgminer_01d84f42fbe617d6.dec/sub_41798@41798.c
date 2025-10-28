int __fastcall sub_41798(void *a1)
{
  sub_40FF0();
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60E3C, 1u);
  read(dword_C54A6, a1, 1u);
  return pthread_mutex_unlock(&stru_63214);
}
