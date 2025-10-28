_DWORD *__fastcall sub_1C9D8(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r7
  _DWORD *lock; // r4
  _DWORD *v6; // r5

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_1C994("clone_queued_work_byid", 9524);
  lock = (_DWORD *)a1[11].__lock;
  if ( lock )
  {
    v6 = (_DWORD *)lock[103];
    if ( a2 == lock[100] )
    {
      v6 = lock;
    }
    else
    {
      lock = (_DWORD *)lock[103];
      if ( !v6 )
        goto LABEL_9;
      lock = (_DWORD *)v6[103];
      while ( a2 != v6[100] )
      {
        if ( !lock )
          goto LABEL_9;
        v6 = lock;
        lock = (_DWORD *)lock[103];
      }
    }
    lock = sub_1B0EC();
    sub_19F60((int)lock, v6, 0);
  }
LABEL_9:
  if ( pthread_rwlock_unlock(v2) )
    sub_1C70C("clone_queued_work_byid", 9528);
  off_6CB70();
  return lock;
}
