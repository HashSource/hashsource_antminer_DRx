int __fastcall sub_17E64(int a1, _BYTE *a2)
{
  pthread_mutex_t *v2; // r5
  pthread_mutex_t *v4; // r0
  int v5; // r5

  v2 = (pthread_mutex_t *)(a1 + 188);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 188)) )
    sub_B4E4("pool_tset", 772);
  v4 = v2;
  v5 = (unsigned __int8)*a2;
  *a2 = 1;
  if ( pthread_mutex_unlock(v4) )
    sub_B694("pool_tset", 775);
  off_60178();
  return v5;
}
