void __fastcall sub_1C904(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v1; // r5
  pthread_rwlock_t *v3; // r0
  void **nr_readers; // r5

  if ( a1 )
  {
    v1 = a1 + 10;
    if ( !pthread_rwlock_trywrlock(a1 + 10) )
    {
      v3 = v1;
      nr_readers = (void **)a1[11].__nr_readers;
      a1[11].__nr_readers = 0;
      if ( pthread_rwlock_unlock(v3) )
        sub_1C70C("flush_queue", 9604);
      off_6CB70();
      if ( nr_readers )
      {
        sub_19F2C(nr_readers);
        free(nr_readers);
        if ( byte_6FA71 )
        {
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
            sub_17B04();
        }
      }
    }
  }
}
