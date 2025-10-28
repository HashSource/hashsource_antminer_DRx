void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_1A4DA8);
  *a1 = dword_1A4DC0;
  pthread_mutex_unlock(&stru_1A4DA8);
  return &unk_1A4DC4;
}
