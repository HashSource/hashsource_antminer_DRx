int __fastcall tq_pop(int a1, const struct timespec *a2)
{
  pthread_mutex_t *v2; // r6
  int *v5; // r4
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // r5
  pthread_cond_t *v10; // r0
  int v11; // r0

  v2 = (pthread_mutex_t *)(a1 + 12);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 12));
  v5 = *(int **)a1;
  if ( a1 == *(_DWORD *)a1 )
  {
    v10 = (pthread_cond_t *)(a1 + 40);
    if ( a2 )
      v11 = pthread_cond_timedwait(v10, v2, a2);
    else
      v11 = pthread_cond_wait(v10, v2);
    if ( v11 )
    {
      v8 = 0;
      goto LABEL_3;
    }
    if ( v5 == *(int **)a1 )
    {
      v8 = 0;
      goto LABEL_3;
    }
    v5 = *(int **)a1;
  }
  v6 = (_DWORD *)v5[1];
  v7 = *v5;
  v8 = *(v5 - 1);
  *(_DWORD *)(v7 + 4) = v6;
  *v6 = v7;
  *v5 = 0;
  v5[1] = 0;
  free(v5 - 1);
LABEL_3:
  pthread_mutex_unlock(v2);
  return v8;
}
