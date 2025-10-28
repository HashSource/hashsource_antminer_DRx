int __fastcall sub_34808(int a1)
{
  pthread_setcanceltype(1, 0);
  (*(void (__fastcall **)(_DWORD))(a1 + 16))(*(_DWORD *)(a1 + 20));
  sub_3478C((sem_t *)a1, "util.c", "completion_thread", 3975);
  return 0;
}
