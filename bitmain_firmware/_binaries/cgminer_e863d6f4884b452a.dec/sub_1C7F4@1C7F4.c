int __fastcall sub_1C7F4(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r6
  int v11; // r5

  v6 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_1BECC("take_queued_work_bymidstate", 9582);
  v11 = sub_1AEBC(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
    sub_1AF30((int)a1, v11);
  if ( pthread_rwlock_unlock(v6) )
    sub_1C70C("take_queued_work_bymidstate", 9586);
  off_6CB70();
  return v11;
}
