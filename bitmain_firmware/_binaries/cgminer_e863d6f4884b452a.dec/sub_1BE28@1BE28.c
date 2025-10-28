int __fastcall sub_1BE28(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0

  result = pthread_rwlock_init(a1, 0);
  if ( result )
    sub_1BDE4(a2, a3);
  return result;
}
