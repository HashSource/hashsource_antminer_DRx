int __fastcall stop_task_timer(int result)
{
  int v1; // r3
  pthread_t v2; // r0
  void *thread_return; // [sp+4h] [bp-Ch] BYREF

  v1 = result + 4096;
  if ( *(_BYTE *)(result + 6148) )
  {
    v2 = *(_DWORD *)(result + 6152);
    *(_BYTE *)(v1 + 2052) = 0;
    return pthread_join(v2, &thread_return);
  }
  return result;
}
