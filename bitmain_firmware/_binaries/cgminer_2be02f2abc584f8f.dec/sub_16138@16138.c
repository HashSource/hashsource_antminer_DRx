int __fastcall sub_16138(pthread_rwlock_t *a1)
{
  int lock; // r5
  int i; // r4
  int v4; // r0
  _BYTE v6[8]; // [sp+0h] [bp-8h] BYREF

  sub_2FE30(v6);
  sub_15FB8(a1 + 10, "cgminer.c", "age_queued_work", 9575);
  lock = a1[11].__lock;
  if ( lock )
  {
    for ( i = *(_DWORD *)(lock + 412); ; i = *(_DWORD *)(i + 412) )
    {
      sub_3000C(v6, lock + 488);
      if ( !i )
        break;
      lock = i;
    }
  }
  v4 = sub_139B4(a1 + 10, "cgminer.c", "age_queued_work", 9585);
  off_72D00(v4);
  return 0;
}
