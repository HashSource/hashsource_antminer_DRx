int __fastcall backend_exit_base(int a1)
{
  void (__fastcall *v2)(int); // r3
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int (**v7)(); // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  *(_BYTE *)(a1 + 266) = 0;
  *(_BYTE *)(a1 + 267) = 0;
  *(_BYTE *)(a1 + 264) = 0;
  (*(void (**)(void))(a1 + 60))();
  v2 = *(void (__fastcall **)(int))(a1 + 84);
  if ( v2 )
    v2(a1);
  v3 = *(_DWORD *)(a1 + 880);
  *(_BYTE *)(a1 + 920) = 1;
  *(_BYTE *)(a1 + 921) = 1;
  *(_BYTE *)(a1 + 922) = 1;
  *(_BYTE *)(a1 + 923) = 1;
  *(_BYTE *)(a1 + 924) = 1;
  queue_force_wakeup(v3);
  queue_force_wakeup(*(_DWORD *)(a1 + 888));
  queue_force_wakeup(*(_DWORD *)(a1 + 892));
  queue_force_wakeup(*(_DWORD *)(a1 + 876));
  pthread_join(*(_DWORD *)(a1 + 908), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 900), &thread_return);
  pthread_join(*(_DWORD *)(a1 + 916), &thread_return);
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 928));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 952));
  pthread_mutex_destroy((pthread_mutex_t *)(a1 + 976));
  queue_free(*(_DWORD *)(a1 + 880));
  queue_free(*(_DWORD *)(a1 + 888));
  queue_free(*(_DWORD *)(a1 + 892));
  queue_free(*(_DWORD *)(a1 + 876));
  free(*(void **)(a1 + 512));
  free(*(void **)(a1 + 504));
  free(*(void **)(a1 + 508));
  free(*(void **)(a1 + 480));
  if ( *(int *)(a1 + 356) > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      ++v5;
      v6 = *(_DWORD *)(a1 + 552) + v4;
      v4 += 44;
      pthread_mutex_destroy((pthread_mutex_t *)(v6 + 20));
    }
    while ( *(_DWORD *)(a1 + 356) > v5 );
  }
  free(*(void **)(a1 + 552));
  if ( *(_DWORD *)(a1 + 872) )
    free(*(void **)(a1 + 540));
  *(_DWORD *)(a1 + 452) = -1;
  *(_DWORD *)(a1 + 544) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 896) = 0;
  v7 = dev_ctrl(a1 + 464);
  ((void (__fastcall *)(_DWORD))v7[8])(*(_DWORD *)(a1 + 252));
  return 0;
}
