int __fastcall set_remain_debug_print_lines(int a1, __int64 a2)
{
  pthread_mutex_t *v3; // r5

  v3 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  *(_QWORD *)(a1 + 32) = a2;
  if ( a2 >= 1 )
    *(_BYTE *)(a1 + 40) = 1;
  return pthread_mutex_unlock(v3);
}
