int __fastcall sub_1C218(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r6
  int lock; // r3
  int v6; // r4

  v2 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_B76C("find_queued_work_byid", 8917);
  lock = a1[11].__lock;
  if ( lock && (v6 = *(_DWORD *)(lock + 352), a2 != *(_DWORD *)(lock + 340)) )
  {
    while ( v6 && a2 != *(_DWORD *)(v6 + 340) )
      v6 = *(_DWORD *)(v6 + 352);
  }
  else
  {
    v6 = lock;
  }
  if ( pthread_rwlock_unlock(v2) )
    sub_B700("find_queued_work_byid", 8919);
  off_60178();
  return v6;
}
