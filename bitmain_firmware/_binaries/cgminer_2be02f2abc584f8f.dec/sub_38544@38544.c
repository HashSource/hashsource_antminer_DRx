int sub_38544()
{
  int *v0; // r0
  int *v1; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_75AB8) )
  {
    v0 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v0, "api.c", "restart_thread", 4924);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  if ( pthread_mutex_unlock(&stru_75AB8) )
  {
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v1, "api.c", "restart_thread", 4925);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  off_72D00(0);
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(s, "API: restarting cgminer");
    sub_3F1C0(7, s, 0);
  }
  sub_17D7C();
  return 0;
}
