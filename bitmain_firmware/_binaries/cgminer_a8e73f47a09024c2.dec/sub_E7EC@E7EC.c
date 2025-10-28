int __fastcall sub_E7EC(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_34684("API");
  sub_E714();
  sub_3CF90(dword_7AB48);
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
