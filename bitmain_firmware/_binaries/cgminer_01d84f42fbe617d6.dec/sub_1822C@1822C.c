int __fastcall sub_1822C(int a1, _BYTE *a2)
{
  pthread_mutex_t *v2; // r5
  pthread_mutex_t *v4; // r0
  int v5; // r5

  v2 = (pthread_mutex_t *)(a1 + 188);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 188)) )
    sub_B4E4("pool_tclear", 784);
  v4 = v2;
  v5 = (unsigned __int8)*a2;
  *a2 = 0;
  if ( pthread_mutex_unlock(v4) )
    sub_B694("pool_tclear", 787);
  off_60178();
  return v5;
}
