int __fastcall sub_1C36C(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&rwlock) )
    sub_B76C("get_thread", 614);
  v2 = *(_DWORD *)(dword_63B80 + 4 * a1);
  if ( pthread_rwlock_unlock(&rwlock) )
    sub_B700("get_thread", 616);
  off_60178();
  return v2;
}
