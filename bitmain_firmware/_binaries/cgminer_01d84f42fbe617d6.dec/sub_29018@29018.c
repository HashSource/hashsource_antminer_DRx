int __fastcall sub_29018(pthread_rwlock_t *a1, const char *a2, int a3)
{
  int result; // r0
  int *v6; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  result = pthread_rwlock_unlock(a1);
  if ( result )
  {
    v6 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v6, "util.c", a2, a3);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  return result;
}
