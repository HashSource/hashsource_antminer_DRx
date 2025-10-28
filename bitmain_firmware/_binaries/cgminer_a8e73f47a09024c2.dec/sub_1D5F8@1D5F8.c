void __fastcall sub_1D5F8(pthread_rwlock_t *a1)
{
  void **nr_readers; // r6
  int *v3; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( a1 && !pthread_rwlock_trywrlock(a1 + 10) )
  {
    nr_readers = (void **)a1[11].__nr_readers;
    a1[11].__nr_readers = 0;
    if ( pthread_rwlock_unlock(a1 + 10) )
    {
      v3 = _errno_location();
      snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "flush_queue", 9604);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    off_79D40(0);
    if ( nr_readers )
    {
      sub_11F58(nr_readers);
      if ( byte_7CC61 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
        {
          strcpy(s, "Discarded queued work item");
          sub_3F178(7, s, 0);
        }
      }
    }
  }
}
