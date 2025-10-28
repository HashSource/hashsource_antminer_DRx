void __fastcall queue_dequeue(int a1, char *a2, unsigned int a3)
{
  int v3; // r0
  char *v4; // r1
  unsigned int v5; // r2
  int *v6; // r3
  pthread_mutex_t *mutex; // [sp+14h] [bp-1128h]
  struct __jmp_buf_tag env; // [sp+20h] [bp-111Ch] BYREF
  char v12[4100]; // [sp+138h] [bp-1004h] BYREF

  mutex = (pthread_mutex_t *)(a1 + 16);
  if ( _sigsetjmp(&env, 0) )
  {
    pthread_mutex_unlock(mutex);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&env);
    queue_dequeue_for(v3, v4, v5, v6);
  }
  else
  {
    _pthread_register_cancel((__pthread_unwind_buf_t *)&env);
    pthread_mutex_lock(mutex);
    while ( *(_DWORD *)(a1 + 12) < a3 )
    {
      if ( *(_BYTE *)(a1 + 92) )
      {
        *(_BYTE *)(a1 + 92) = 0;
        goto LABEL_9;
      }
      pthread_cond_wait((pthread_cond_t *)(a1 + 40), mutex);
    }
    if ( a3 != pipe_pop(*(int **)(a1 + 8), a2, a3) )
    {
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, 1549828, 1549732);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/thread_safe_queue.c",
        162,
        "queue_dequeue",
        13,
        89,
        100,
        v12);
      exit(-1);
    }
    *(_DWORD *)(a1 + 12) -= a3;
LABEL_9:
    pthread_mutex_unlock(mutex);
    _pthread_unregister_cancel((__pthread_unwind_buf_t *)&env);
  }
}
