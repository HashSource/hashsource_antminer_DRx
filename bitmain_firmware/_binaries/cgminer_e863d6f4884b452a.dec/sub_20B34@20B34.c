int __fastcall sub_20B34(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v1; // r4
  int v3; // r5

  v1 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_1BECC("get_queued", 9416);
  v3 = sub_20B00((int)a1);
  if ( pthread_rwlock_unlock(v1) )
    sub_1C70C("get_queued", 9418);
  off_6CB70();
  return v3;
}
