int __fastcall sub_1CAD8(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r6
  int lock; // r4
  int v6; // r3

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_1C994("find_queued_work_byid", 9513);
  lock = a1[11].__lock;
  if ( lock )
  {
    v6 = *(_DWORD *)(lock + 412);
    if ( a2 != *(_DWORD *)(lock + 400) )
    {
      if ( v6 )
      {
        lock = *(_DWORD *)(v6 + 412);
        while ( a2 != *(_DWORD *)(v6 + 400) )
        {
          if ( !lock )
            goto LABEL_9;
          v6 = lock;
          lock = *(_DWORD *)(lock + 412);
        }
      }
      lock = v6;
    }
  }
LABEL_9:
  if ( pthread_rwlock_unlock(v2) )
    sub_1C70C("find_queued_work_byid", 9515);
  off_6CB70();
  return lock;
}
