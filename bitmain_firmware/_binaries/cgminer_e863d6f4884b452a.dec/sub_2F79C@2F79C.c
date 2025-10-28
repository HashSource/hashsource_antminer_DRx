void __noreturn sub_2F79C()
{
  int *v0; // r0
  int *v1; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( !pthread_mutex_lock(&stru_6F924) )
  {
    if ( !pthread_mutex_unlock(&stru_6F924) )
    {
      off_6CB70(0);
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        strcpy(s, "API: killing cgminer");
        sub_343C4(7, s, 0);
      }
      sub_1B198();
    }
    v1 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v1, "api.c", "quit_thread", 4911);
    sub_343C4(3, s, 1);
    sub_26B0C(1);
  }
  v0 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v0, "api.c", "quit_thread", 4910);
  sub_343C4(3, s, 1);
  sub_26B0C(1);
}
