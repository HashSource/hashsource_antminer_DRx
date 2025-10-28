int __fastcall sub_1CB4C(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r4
  int v11; // r5

  v6 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_1C994("find_queued_work_bymidstate", 9469);
  v11 = sub_1AEBC(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( pthread_rwlock_unlock(v6) )
    sub_1C70C("find_queued_work_bymidstate", 9471);
  off_6CB70();
  return v11;
}
