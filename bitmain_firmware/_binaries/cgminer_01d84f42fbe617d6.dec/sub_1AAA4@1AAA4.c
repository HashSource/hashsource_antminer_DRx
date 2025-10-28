_DWORD *__fastcall sub_1AAA4(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r5
  int lock; // r2
  _DWORD *v6; // r4
  _DWORD *v7; // r0

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_B76C("clone_queued_work_byid", 8928);
  lock = a1[11].__lock;
  if ( lock )
  {
    v7 = *(_DWORD **)(lock + 352);
    if ( a2 == *(_DWORD *)(lock + 340) )
    {
      v7 = (_DWORD *)a1[11].__lock;
LABEL_12:
      v6 = sub_19E18(v7, 0);
    }
    else
    {
      while ( v7 )
      {
        if ( a2 == v7[85] )
          goto LABEL_12;
        v7 = (_DWORD *)v7[88];
      }
      v6 = 0;
    }
  }
  else
  {
    v6 = 0;
  }
  if ( pthread_rwlock_unlock(v2) )
    sub_B700("clone_queued_work_byid", 8932);
  off_60178();
  return v6;
}
