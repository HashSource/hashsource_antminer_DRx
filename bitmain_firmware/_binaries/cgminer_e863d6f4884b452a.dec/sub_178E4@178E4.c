int __fastcall sub_178E4(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_2D764("API");
  sub_178A0();
  sub_32D7C(dword_6DB70);
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
