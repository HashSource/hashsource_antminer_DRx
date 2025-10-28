int __fastcall sub_1A4EC(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0

  result = pthread_rwlock_rdlock(a1);
  if ( result )
    sub_B76C(a2, a3);
  return result;
}
