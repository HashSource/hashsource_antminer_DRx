int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int (**v7)(); // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  *(_BYTE *)(a1 + 260) = 0;
  (*(void (**)(void))(a1 + 60))();
  v2 = *(void (__fastcall **)(int))(a1 + 84);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 872);
  *(_BYTE *)(a1 + 912) = 1;
  *(_BYTE *)(a1 + 913) = 1;
  *(_BYTE *)(a1 + 914) = 1;
  *(_BYTE *)(a1 + 915) = 1;
  *(_BYTE *)(a1 + 916) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 880));
  queue_force_wakeup(*(_DWORD *)(a1 + 884));
  queue_force_wakeup(*(_DWORD *)(a1 + 868));
  pthread_join(*(_DWORD *)(a1 + 900), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 892), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 908), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 920));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 944));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 968));
  queue_free(*(_DWORD *)(a1 + 872));
  queue_free(*(_DWORD *)(a1 + 880));
  queue_free(*(_DWORD *)(a1 + 884));
  queue_free(*(_DWORD *)(a1 + 868));
  free(*(void **)(a1 + 504));
  free(*(void **)(a1 + 496));
  free(*(void **)(a1 + 500));
  free(*(void **)(a1 + 472));
  if ( *(int *)(a1 + 352) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(_DWORD *)(a1 + 544) + v4;
      v4 += 44;
      pthread_mutex_destroy((pthread_mutex_t *)(v6 + 20));
    }
    while ( *(_DWORD *)(a1 + 352) > v5 );
  }
  free(*(void **)(a1 + 544));
  if ( *(_DWORD *)(a1 + 864) )
    free(*(void **)(a1 + 532));
  *(_DWORD *)(a1 + 444) = -1;
  *(_DWORD *)(a1 + 536) = 0;
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 888) = 0;
  v7 = dev_ctrl(0);
  ((void (__fastcall *)(_DWORD))v7[8])(*(_DWORD *)(a1 + 248));
  return 0;
}
