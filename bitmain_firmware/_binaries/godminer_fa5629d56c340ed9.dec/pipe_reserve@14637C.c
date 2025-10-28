int __fastcall pipe_reserve(pthread_mutex_t *mutex, int a2)
{
  int lock; // r5
  pthread_mutex_t *v3; // r6
  pthread_mutex_t *v5; // r7
  pthread_mutex_t *v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r3
  unsigned int spins; // r1
  int kind; // r2
  bool v11; // cf
  int v13[7]; // [sp+0h] [bp-24h] BYREF
  char v14[5]; // [sp+1Fh] [bp-5h] BYREF

  v3 = (pthread_mutex_t *)((char *)mutex + 60);
  lock = mutex->__lock;
  v5 = (pthread_mutex_t *)((char *)mutex + 36);
  v14[0] = 1;
  v6 = (pthread_mutex_t *)((char *)mutex + 60);
  v7 = lock * a2;
  if ( !v7 )
    v7 = 32;
  pthread_mutex_lock(v6);
  pthread_mutex_lock(v5);
  v8 = mutex[1].__lock;
  spins = mutex->__spins;
  kind = mutex->__kind;
  v11 = spins >= v8;
  if ( spins < v8 )
    v8 -= spins;
  else
    kind = v8 - kind;
  if ( v11 )
    v8 = kind + mutex->__nusers - spins;
  if ( v7 > v8 - mutex->__lock )
    sub_1456B4(v13, &mutex->__lock, v7, v14);
  pthread_mutex_unlock(v5);
  return pthread_mutex_unlock(v3);
}
