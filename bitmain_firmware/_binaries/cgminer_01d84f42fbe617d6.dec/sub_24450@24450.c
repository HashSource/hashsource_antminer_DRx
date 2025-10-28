int __fastcall sub_24450(pthread_rwlock_t *a1)
{
  pthread_rwlock_t *v1; // r4
  int v3; // r5

  v1 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_B550("get_queued", 8820);
  v3 = sub_243F8((int)a1);
  if ( pthread_rwlock_unlock(v1) )
    sub_B700("get_queued", 8822);
  off_60178();
  return v3;
}
