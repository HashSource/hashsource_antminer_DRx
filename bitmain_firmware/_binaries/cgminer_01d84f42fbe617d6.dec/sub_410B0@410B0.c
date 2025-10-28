int __fastcall sub_410B0(void *a1, void *a2)
{
  sub_40FF0();
  pthread_mutex_lock(&stru_63214);
  write(dword_C54A6, &unk_60DF8, 1u);
  read(dword_C54A6, a1, 1u);
  read(dword_C54A6, a2, 1u);
  return pthread_mutex_unlock(&stru_63214);
}
