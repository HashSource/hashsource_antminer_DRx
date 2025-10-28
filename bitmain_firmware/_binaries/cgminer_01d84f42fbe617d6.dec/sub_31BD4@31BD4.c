int __fastcall sub_31BD4(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_2F02C("APIMcast");
  sub_30FBC();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
