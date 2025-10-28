int __fastcall sub_11CBC(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_2F02C("API");
  sub_11C4C();
  sub_3646C(dword_611A8);
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
