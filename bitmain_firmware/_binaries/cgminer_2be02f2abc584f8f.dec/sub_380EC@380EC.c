int __fastcall sub_380EC(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_34604("APIMcast");
  sub_374AC();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
