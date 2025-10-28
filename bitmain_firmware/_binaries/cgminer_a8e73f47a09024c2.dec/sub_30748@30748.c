int __fastcall sub_30748(pthread_mutex_t *a1)
{
  int *v2; // r0
  int *v3; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Closing socket for stratum pool %d", a1->__lock);
    sub_3F178(7, s, 0);
  }
  if ( pthread_mutex_lock(a1 + 30) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v2, "util.c", "suspend_stratum", 3446);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  sub_2C124((int)a1);
  if ( pthread_mutex_unlock(a1 + 30) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "util.c", "suspend_stratum", 3448);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  return off_79D40(0);
}
