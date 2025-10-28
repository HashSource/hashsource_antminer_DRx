int *__fastcall queue_new(int a1, int a2)
{
  int *v4; // r0
  int *v5; // r4

  v4 = (int *)calloc(1u, 0x60u);
  v5 = v4;
  if ( v4 )
  {
    _init_pipe_of_queue(v4, a1, a2);
    pthread_mutex_init((pthread_mutex_t *)(v5 + 4), 0);
    pthread_condattr_init((pthread_condattr_t *)v5 + 22);
    pthread_condattr_setclock((pthread_condattr_t *)v5 + 22, 1);
    pthread_cond_init((pthread_cond_t *)(v5 + 10), (const pthread_condattr_t *)v5 + 22);
    v5[3] = 0;
    *((_BYTE *)v5 + 92) = 0;
  }
  else
  {
    printf("calloc failed in queue_new");
  }
  return v5;
}
