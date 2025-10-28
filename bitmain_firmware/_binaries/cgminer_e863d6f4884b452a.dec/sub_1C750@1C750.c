int __fastcall sub_1C750(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r4

  v2 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_1BECC("add_queued", 9425);
  sub_1ABA4((int)a1, a2);
  if ( pthread_rwlock_unlock(v2) )
    sub_1C70C("add_queued", 9427);
  return off_6CB70();
}
