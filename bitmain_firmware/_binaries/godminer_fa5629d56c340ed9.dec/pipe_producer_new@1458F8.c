int __fastcall pipe_producer_new(int a1)
{
  pthread_mutex_t *v1; // r5

  v1 = (pthread_mutex_t *)(a1 + 36);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  ++*(_DWORD *)(a1 + 28);
  pthread_mutex_unlock(v1);
  return a1;
}
