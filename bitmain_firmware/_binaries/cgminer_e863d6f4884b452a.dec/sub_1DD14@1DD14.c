int __fastcall sub_1DD14(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_732CC) )
    sub_1C994("get_thread", 876);
  v2 = *(_DWORD *)(dword_732C8 + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_732CC) )
    sub_1C70C("get_thread", 878);
  off_6CB70();
  return v2;
}
