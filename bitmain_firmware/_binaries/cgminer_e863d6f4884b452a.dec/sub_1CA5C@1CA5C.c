_DWORD *__fastcall sub_1CA5C(pthread_rwlock_t *a1, void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  pthread_rwlock_t *v6; // r4
  _DWORD *v11; // r5
  _DWORD *v12; // r7

  v6 = a1 + 10;
  if ( pthread_rwlock_rdlock(a1 + 10) )
    sub_1C994("clone_queued_work_bymidstate", 9480);
  v11 = (_DWORD *)sub_1AEBC(a1[11].__lock, a2, a3, a4, a5, a6);
  if ( v11 )
  {
    v12 = sub_1B0EC();
    sub_19F60((int)v12, v11, 0);
  }
  else
  {
    v12 = 0;
  }
  if ( pthread_rwlock_unlock(v6) )
    sub_1C70C("clone_queued_work_bymidstate", 9484);
  off_6CB70();
  return v12;
}
