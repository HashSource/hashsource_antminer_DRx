_DWORD *__fastcall sub_183FC(pthread_rwlock_t *a1, int a2)
{
  pthread_rwlock_t *v4; // r4
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  int v7; // r0

  v4 = a1 + 10;
  sub_13948(a1 + 10, "cgminer.c", "clone_queued_work_byid", 9549);
  v5 = (_DWORD *)sub_130BC(a1[11].__lock, a2);
  if ( v5 )
    v6 = sub_183D4(v5, 0);
  else
    v6 = 0;
  v7 = sub_139B4(v4, "cgminer.c", "clone_queued_work_byid", 9553);
  off_72D00(v7);
  return v6;
}
