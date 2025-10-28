int sub_34568()
{
  int result; // r0
  int *v1; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  result = pthread_mutex_lock(&stru_73AA4);
  if ( result )
  {
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v1, "logging.c", "my_log_curses", 47);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  return result;
}
