int __fastcall queue_enqueue(int a1, char *a2, int a3)
{
  pthread_mutex_t *v3; // r6
  unsigned __int8 v8; // [sp+7h] [bp-1h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 16);
  v8 = 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  pipe_push(*(_DWORD **)(a1 + 4), a2, a3, &v8);
  *(_DWORD *)(a1 + 12) += a3;
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  pthread_mutex_unlock(v3);
  return v8;
}
