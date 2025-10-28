int sub_384FC()
{
  int *v0; // r0
  int *v1; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_7CB10) )
  {
    v0 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v0, "api.c", "restart_thread", 4924);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_mutex_unlock(&stru_7CB10) )
  {
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v1, "api.c", "restart_thread", 4925);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(s, "API: restarting cgminer");
    sub_3F178(7, s, 0);
  }
  sub_17F5C();
  return 0;
}
