void __fastcall sub_1A3E0(pthread_rwlock_t *a1)
{
  void **nr_readers; // r5
  char v3[2052]; // [sp+0h] [bp-804h] BYREF

  if ( a1 && !pthread_rwlock_trywrlock(a1 + 10) )
  {
    nr_readers = (void **)a1[11].__nr_readers;
    a1[11].__nr_readers = 0;
    if ( pthread_rwlock_unlock(a1 + 10) )
      sub_B700("flush_queue", 9008);
    off_60178();
    if ( nr_readers )
    {
      sub_152B8(nr_readers);
      if ( byte_630C1 )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
        {
          strcpy(v3, "Discarded queued work item");
          sub_38438(7, v3, 0);
        }
      }
    }
  }
}
