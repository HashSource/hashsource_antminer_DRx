void __fastcall sub_1C79C(pthread_rwlock_t *a1, void **a2)
{
  pthread_rwlock_t *v2; // r5

  v2 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_1BECC("work_completed", 9569);
  sub_1AF30((int)a1, (int)a2);
  if ( pthread_rwlock_unlock(v2) )
    sub_1C70C("work_completed", 9571);
  off_6CB70();
  sub_19F2C(a2);
  j_free(a2);
}
