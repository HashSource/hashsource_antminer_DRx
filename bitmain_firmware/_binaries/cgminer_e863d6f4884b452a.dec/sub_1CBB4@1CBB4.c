int __fastcall sub_1CBB4(int a1)
{
  int v2; // r4

  if ( pthread_rwlock_rdlock(&stru_73CCC) )
    sub_1C994("get_devices", 894);
  v2 = *(_DWORD *)(dword_73110 + 4 * a1);
  if ( pthread_rwlock_unlock(&stru_73CCC) )
    sub_1C70C("get_devices", 896);
  off_6CB70();
  return v2;
}
