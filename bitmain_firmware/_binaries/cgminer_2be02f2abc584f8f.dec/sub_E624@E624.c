int __fastcall sub_E624(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_34604("API");
  sub_E54C();
  sub_3CFD8(dword_73AE8);
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
