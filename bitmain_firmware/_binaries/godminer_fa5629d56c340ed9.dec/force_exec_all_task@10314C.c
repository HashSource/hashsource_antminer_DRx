int __fastcall force_exec_all_task(int a1)
{
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  if ( !*(_BYTE *)(a1 + 6148) )
    return _exec_all_task(a1);
  *(_BYTE *)(a1 + 6148) = 0;
  pthread_join(*(_DWORD *)(a1 + 6152), &thread_return);
  _exec_all_task(a1);
  return start_task_timer((_DWORD *)a1);
}
