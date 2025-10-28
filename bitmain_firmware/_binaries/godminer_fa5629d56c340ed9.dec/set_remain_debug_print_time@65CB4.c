int __fastcall set_remain_debug_print_time(int a1, __int64 a2)
{
  pthread_mutex_t *v3; // r5

  v3 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  *(_QWORD *)(a1 + 8) = a2;
  clock_gettime(1, (struct timespec *)(a1 + 16));
  if ( a2 >= 1 )
    *(_BYTE *)(a1 + 40) = 1;
  return pthread_mutex_unlock(v3);
}
