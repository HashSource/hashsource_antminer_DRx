void __fastcall queue_free(int a1)
{
  pthread_cond_destroy((pthread_cond_t *)(a1 + 40));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 16));
  _deinit_pipe_of_queue((int *)a1);
  free((void *)a1);
}
