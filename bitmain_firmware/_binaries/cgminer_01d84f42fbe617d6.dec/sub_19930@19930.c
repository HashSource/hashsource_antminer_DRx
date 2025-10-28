int __fastcall sub_19930(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v2; // r4

  v2 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_B550("add_queued", 8829);
  sub_160B4((int)a1, a2);
  if ( pthread_rwlock_unlock(v2) )
    sub_B700("add_queued", 8831);
  return off_60178();
}
