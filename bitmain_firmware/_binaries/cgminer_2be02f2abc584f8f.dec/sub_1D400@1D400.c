void __fastcall sub_1D400(pthread_rwlock_t *a1)
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
      snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "flush_queue", 9629);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    off_72D00(0);
    if ( nr_readers )
    {
      sub_11D18(nr_readers);
      if ( byte_75C09 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
        {
          strcpy(s, "Discarded queued work item");
          sub_3F1C0(7, s, 0);
        }
      }
    }
  }
}
