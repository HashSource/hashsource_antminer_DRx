void __fastcall destroy_task_timer(_DWORD *ptr)
{
  _DWORD *v1; // r3
  pthread_t v3; // r0
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  v1 = ptr + 1024;
  if ( *((_BYTE *)ptr + 6148) )
  {
    v3 = ptr[1538];
    *((_BYTE *)v1 + 2052) = 0;
    pthread_join(v3, &thread_return);
  }
  free(ptr);
}
