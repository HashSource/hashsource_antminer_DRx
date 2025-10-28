int __fastcall sub_2AC10(pthread_mutex_t *a1)
{
  int *v3; // r0
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Closing socket for stratum pool %d", a1->__lock);
    sub_343C4(7, s, 0);
  }
  if ( pthread_mutex_lock(a1 + 30) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v3, "util.c", "suspend_stratum", 3446);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  sub_27BA0((int)a1);
  if ( pthread_mutex_unlock(a1 + 30) )
  {
    v4 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v4, "util.c", "suspend_stratum", 3448);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  return off_6CB70(0);
}
