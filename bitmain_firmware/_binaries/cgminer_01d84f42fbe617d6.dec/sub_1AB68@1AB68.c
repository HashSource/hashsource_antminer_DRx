int __fastcall sub_1AB68(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_63CA0) )
    sub_B76C("get_devices", 632);
  v2 = *(_DWORD *)(dword_63BC8 + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_63CA0) )
    sub_B700("get_devices", 634);
  off_60178();
  return v2;
}
