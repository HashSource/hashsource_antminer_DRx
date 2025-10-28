void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock((pthread_mutex_t *)&unk_1A3C90);
  *a1 = dword_1A3CA8;
  pthread_mutex_unlock((pthread_mutex_t *)&unk_1A3C90);
  return &unk_1A3CAC;
}
