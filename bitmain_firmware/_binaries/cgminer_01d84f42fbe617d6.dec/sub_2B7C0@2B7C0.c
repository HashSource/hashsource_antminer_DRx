int __fastcall sub_2B7C0(pthread_mutex_t *a1)
{
  int count; // r0
  int *v4; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "Closing socket for stratum pool %d", a1->__lock);
    sub_38438(7, s, 0);
  }
  if ( pthread_mutex_lock(a1 + 28) )
    sub_B7D8("suspend_stratum", 2878);
  sub_286F8((int)a1);
  count = a1[24].__count;
  a1[26].__size[11] = 0;
  a1[26].__size[9] = 0;
  if ( count )
    close(count);
  a1[24].__count = 0;
  if ( pthread_mutex_unlock(a1 + 28) )
  {
    v4 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v4, "util.c", "suspend_stratum", 2880);
    sub_38438(3, s, 1);
    sub_16724(1);
  }
  return off_60178();
}
