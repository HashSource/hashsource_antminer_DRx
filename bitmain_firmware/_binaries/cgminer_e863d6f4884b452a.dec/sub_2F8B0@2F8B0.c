int sub_2F8B0()
{
  int *v1; // r0
  int *v2; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_6F924) )
  {
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v1, "api.c", "restart_thread", 4924);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  if ( pthread_mutex_unlock(&stru_6F924) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v2, "api.c", "restart_thread", 4925);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  off_6CB70(0);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(s, "API: restarting cgminer");
    sub_343C4(7, s, 0);
  }
  sub_1A09C();
  return 0;
}
