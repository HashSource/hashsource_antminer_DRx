int __fastcall sub_26E3C(pthread_rwlock_t *a1)
{
  int v2; // r1
  int v3; // r3
  int result; // r0

  a1[1].__lock = 0;
  if ( pthread_rwlock_wrlock(&stru_73CCC) )
    sub_1BECC("enable_device", 11001);
  v2 = dword_73110;
  v3 = dword_6F394;
  a1->__lock = dword_6F394;
  *(_DWORD *)(v2 + 4 * v3) = a1;
  dword_6F394 = v3 + 1;
  if ( pthread_rwlock_unlock(&stru_73CCC) )
    sub_1C70C("enable_device", 11003);
  off_6CB70();
  if ( byte_73220 )
    dword_6F398 += a1[4].__nr_writers_queued;
  else
    dword_735B0 += a1[4].__nr_writers_queued;
  result = pthread_rwlock_init(a1 + 10, 0);
  if ( result )
    sub_1BDE4("enable_device", 11010);
  a1[11].__lock = 0;
  return result;
}
