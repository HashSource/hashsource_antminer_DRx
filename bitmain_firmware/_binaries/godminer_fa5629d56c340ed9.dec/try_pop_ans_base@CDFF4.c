int __fastcall try_pop_ans_base(int a1, char *a2)
{
  return queue_try_dequeue(*(_DWORD *)(*(_DWORD *)(a1 + 896) + 888), a2, 1u);
}
