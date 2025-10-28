void *__fastcall get_all_created_runtime(_DWORD *a1)
{
  pthread_mutex_lock(&stru_18BE00);
  *a1 = dword_18BE18;
  pthread_mutex_unlock(&stru_18BE00);
  return &unk_18BE1C;
}
