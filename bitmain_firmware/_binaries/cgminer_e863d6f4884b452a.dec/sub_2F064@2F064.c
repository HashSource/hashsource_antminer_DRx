int __fastcall sub_2F064(int a1)
{
  pthread_t v2; // r0

  v2 = pthread_self();
  pthread_detach(v2);
  pthread_setcanceltype(1, 0);
  sub_2D764("APIMcast");
  sub_2E900();
  *(_DWORD *)(a1 + 12) = 0;
  return 0;
}
