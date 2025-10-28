int __fastcall queue_try_dequeue(int a1, char *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int v7; // r0
  int v8; // r5
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  if ( *(_DWORD *)(a1 + 12) < a3 )
  {
    v8 = 0;
  }
  else
  {
    v7 = pipe_pop(*(int **)(a1 + 8), a2, a3);
    if ( v7 != a3 )
    {
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, 1549828, "queue_try_dequeue");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/thread_safe_queue.c",
        162,
        "queue_try_dequeue",
        17,
        148,
        100,
        v10);
      exit(-1);
    }
    v8 = 1;
    *(_DWORD *)(a1 + 12) -= v7;
  }
  pthread_mutex_unlock(v3);
  return v8;
}
