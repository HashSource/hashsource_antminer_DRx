int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int (**v4)(); // r0
  void *thread_return[2]; // [sp+4h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 229) = 0;
  *(_BYTE *)(a1 + 230) = 0;
  *(_BYTE *)(a1 + 228) = 0;
  (*(void (**)(void))(a1 + 56))();
  v2 = *(void (__fastcall **)(int))(a1 + 80);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 816);
  *(_BYTE *)(a1 + 844) = 1;
  *(_BYTE *)(a1 + 845) = 1;
  *(_BYTE *)(a1 + 846) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 820));
  queue_force_wakeup(*(_DWORD *)(a1 + 824));
  queue_force_wakeup(*(_DWORD *)(a1 + 812));
  pthread_join(*(_DWORD *)(a1 + 836), thread_return);
  pthread_join(*(_DWORD *)(a1 + 832), thread_return);
  pthread_join(*(_DWORD *)(a1 + 840), thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 848));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 872));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 896));
  queue_free(*(_DWORD *)(a1 + 816));
  queue_free(*(_DWORD *)(a1 + 820));
  queue_free(*(_DWORD *)(a1 + 824));
  queue_free(*(_DWORD *)(a1 + 812));
  free(*(void **)(a1 + 456));
  free(*(void **)(a1 + 448));
  free(*(void **)(a1 + 452));
  free(*(void **)(a1 + 424));
  if ( *(_DWORD *)(a1 + 808) )
    free(*(void **)(a1 + 484));
  *(_DWORD *)(a1 + 396) = -1;
  *(_DWORD *)(a1 + 488) = 0;
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 828) = 0;
  v4 = dev_ctrl(0);
  ((void (__fastcall *)(_DWORD))v4[7])(*(_DWORD *)(a1 + 220));
  return 0;
}
