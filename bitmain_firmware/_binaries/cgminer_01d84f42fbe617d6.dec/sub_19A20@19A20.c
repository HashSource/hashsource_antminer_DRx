int __fastcall sub_19A20(pthread_rwlock_t *a1, int a2, int a3, int a4)
{
  pthread_rwlock_t *v4; // r8
  int lock; // r5
  int i; // r4
  _BYTE v9[8]; // [sp+0h] [bp-8h] BYREF

  v4 = a1 + 10;
  sub_2B13C(v9, a2, a3, a4);
  if ( pthread_rwlock_wrlock(v4) )
    sub_B550("age_queued_work", 8954);
  lock = a1[11].__lock;
  if ( lock )
  {
    for ( i = *(_DWORD *)(lock + 352); ; i = *(_DWORD *)(i + 352) )
    {
      sub_2B314(v9, lock + 424);
      lock = i;
      if ( !i )
        break;
    }
  }
  if ( pthread_rwlock_unlock(v4) )
    sub_B700("age_queued_work", 8964);
  off_60178();
  return 0;
}
