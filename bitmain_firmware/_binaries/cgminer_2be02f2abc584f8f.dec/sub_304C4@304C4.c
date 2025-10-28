int __fastcall sub_304C4(pthread_mutex_t *a1)
{
  int *v2; // r0
  int *v3; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "Closing socket for stratum pool %d", a1->__lock);
    sub_3F1C0(7, s, 0);
  }
  if ( pthread_mutex_lock(a1 + 30) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v2, "util.c", "suspend_stratum", 3426);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  sub_2BF0C((int)a1);
  if ( pthread_mutex_unlock(a1 + 30) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "util.c", "suspend_stratum", 3428);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  return off_72D00(0);
}
