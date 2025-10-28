int __fastcall async_push_work_base(int a1, char *a2)
{
  queue_enqueue(*(_DWORD *)(a1 + 812), a2, 1);
  return 0;
}
