int __fastcall sub_16318(pthread_rwlock_t *a1)
{
  int lock; // r5
  int i; // r4
  int v4; // r0
  _BYTE v6[8]; // [sp+0h] [bp-8h] BYREF

  sub_30050(v6);
  sub_16198(a1 + 10, "cgminer.c", "age_queued_work", 9550);
  lock = a1[11].__lock;
  if ( lock )
  {
    for ( i = *(_DWORD *)(lock + 412); ; i = *(_DWORD *)(i + 412) )
    {
      sub_3022C(v6, lock + 488);
      if ( !i )
        break;
      lock = i;
    }
  }
  v4 = sub_13B94(a1 + 10, "cgminer.c", "age_queued_work", 9560);
  off_79D40(v4);
  return 0;
}
