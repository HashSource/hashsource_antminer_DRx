int __fastcall sub_3F370(pthread_mutex_t *a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int *v8; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  result = pthread_mutex_lock(a1);
  if ( result )
  {
    v8 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v8, a2, a3, a4);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  return result;
}
