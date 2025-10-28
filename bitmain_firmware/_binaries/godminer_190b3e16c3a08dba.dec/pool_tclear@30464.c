int __fastcall pool_tclear(int a1, _BYTE *a2, int a3)
{
  pthread_mutex_t *v3; // r4
  bool v7; // zf
  int v8; // r7

  v3 = (pthread_mutex_t *)(a1 + 1824);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 1824));
  v7 = a3 == 0;
  v8 = (unsigned __int8)*a2;
  *a2 = 0;
  if ( !v7 )
    pthread_cond_broadcast((pthread_cond_t *)(a1 + 1856));
  pthread_mutex_unlock(v3);
  return v8;
}
