int __fastcall set_debug_always_print(int a1, int a2)
{
  pthread_mutex_t *v2; // r5

  v2 = (pthread_mutex_t *)(a1 + 44);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 44));
  *(_BYTE *)a1 = a2;
  if ( a2 )
    *(_BYTE *)(a1 + 40) = 1;
  return pthread_mutex_unlock(v2);
}
