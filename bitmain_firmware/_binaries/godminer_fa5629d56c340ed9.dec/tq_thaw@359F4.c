int __fastcall tq_thaw(int a1)
{
  pthread_mutex_t *v1; // r5

  v1 = (pthread_mutex_t *)(a1 + 12);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 12));
  *(_BYTE *)(a1 + 8) = 0;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  return pthread_mutex_unlock(v1);
}
