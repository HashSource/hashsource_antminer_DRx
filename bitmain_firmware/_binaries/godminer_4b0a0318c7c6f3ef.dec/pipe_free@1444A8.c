void __fastcall pipe_free(int a1)
{
  pthread_mutex_t *v1; // r5
  pthread_mutex_t *v3; // r7
  int v4; // r6
  int v5; // r5

  v1 = (pthread_mutex_t *)(a1 + 36);
  v3 = (pthread_mutex_t *)(a1 + 60);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  v4 = *(_DWORD *)(a1 + 28) - 1;
  *(_DWORD *)(a1 + 28) = v4;
  pthread_mutex_unlock(v1);
  pthread_mutex_lock(v3);
  v5 = *(_DWORD *)(a1 + 32) - 1;
  *(_DWORD *)(a1 + 32) = v5;
  pthread_mutex_unlock(v3);
  if ( v5 )
  {
    if ( !v4 )
      pthread_cond_broadcast((pthread_cond_t *)(a1 + 88));
  }
  else
  {
    free(*(void **)(a1 + 12));
    *(_DWORD *)(a1 + 12) = 0;
    if ( v4 )
      pthread_cond_broadcast((pthread_cond_t *)(a1 + 136));
    else
      sub_1441C8(a1);
  }
}
