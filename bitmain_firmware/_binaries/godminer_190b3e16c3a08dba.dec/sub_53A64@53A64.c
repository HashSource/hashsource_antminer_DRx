int __fastcall sub_53A64(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_537DC();
  api();
  *(_DWORD *)(a1 + 4) = 0;
  return 0;
}
