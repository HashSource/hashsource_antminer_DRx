int __fastcall sub_1C040(int a1, _BYTE *a2)
{
  pthread_mutex_t *v2; // r4
  pthread_mutex_t *v4; // r0
  int v5; // r4

  v2 = (pthread_mutex_t *)(a1 + 196);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 196)) )
    sub_1BF10("pool_tset", 1034);
  v4 = v2;
  v5 = (unsigned __int8)*a2;
  *a2 = 1;
  if ( pthread_mutex_unlock(v4) )
    sub_1BF54("pool_tset", 1037);
  off_6CB70();
  return v5;
}
