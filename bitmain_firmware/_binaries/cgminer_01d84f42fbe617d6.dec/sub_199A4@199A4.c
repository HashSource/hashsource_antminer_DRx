void __fastcall sub_199A4(pthread_rwlock_t *a1, void **a2)
{
  pthread_rwlock_t *v2; // r5

  v2 = a1 + 10;
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_B550("work_completed", 8973);
  sub_165C0((int)a1, a2);
  if ( pthread_rwlock_unlock(v2) )
    sub_B700("work_completed", 8975);
  off_60178();
  sub_152B8(a2);
}
