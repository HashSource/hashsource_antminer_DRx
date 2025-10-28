int __fastcall sub_17418(int a1, const char *a2, int a3)
{
  int result; // r0

  if ( pthread_mutex_init((pthread_mutex_t *)a1, 0) )
    sub_B5BC(a2, a3);
  result = pthread_rwlock_init((pthread_rwlock_t *)(a1 + 24), 0);
  if ( result )
    sub_B628(a2, a3);
  return result;
}
