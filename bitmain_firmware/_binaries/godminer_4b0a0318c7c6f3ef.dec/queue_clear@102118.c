int __fastcall queue_clear(int a1)
{
  pthread_mutex_t *v1; // r6
  size_t v3; // r0
  char *v4; // r5
  int v5; // r3
  bool v6; // zf
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  v1 = (pthread_mutex_t *)(a1 + 16);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 16));
  v3 = pipe_elem_size(*(_DWORD *)a1);
  v4 = (char *)calloc(1u, v3);
  if ( *(int *)(a1 + 12) > 0 )
  {
    do
    {
      if ( pipe_pop(*(int **)(a1 + 8), v4, 1) != 1 )
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, 1549828, "queue_clear");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/common/general/thread_safe_queue.c",
          162,
          "queue_clear",
          11,
          129,
          100,
          v8);
        exit(-1);
      }
      v5 = *(_DWORD *)(a1 + 12) - 1;
      v6 = *(_DWORD *)(a1 + 12) == 1;
      *(_DWORD *)(a1 + 12) = v5;
    }
    while ( v5 >= 0 && !v6 );
  }
  free(v4);
  return pthread_mutex_unlock(v1);
}
