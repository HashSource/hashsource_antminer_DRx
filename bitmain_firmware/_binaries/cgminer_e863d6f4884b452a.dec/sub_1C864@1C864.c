int __fastcall sub_1C864(pthread_rwlock_t *a1)
{
  int lock; // r5
  int i; // r4
  _BYTE v5[8]; // [sp+0h] [bp-8h] BYREF

  sub_2A69C(v5);
  if ( pthread_rwlock_wrlock(a1 + 10) )
    sub_1BECC("age_queued_work", 9550);
  lock = a1[11].__lock;
  if ( lock )
  {
    for ( i = *(_DWORD *)(lock + 412); ; i = *(_DWORD *)(i + 412) )
    {
      sub_2A8A4(v5, lock + 488);
      if ( !i )
        break;
      lock = i;
    }
  }
  if ( pthread_rwlock_unlock(a1 + 10) )
    sub_1C70C("age_queued_work", 9560);
  off_6CB70();
  return 0;
}
