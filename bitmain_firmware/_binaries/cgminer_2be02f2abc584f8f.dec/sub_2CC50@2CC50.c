int __fastcall sub_2CC50(int a1)
{
  pthread_mutex_t *v2; // r7
  int v3; // r0
  int v4; // r0

  v2 = (pthread_mutex_t *)(a1 + 720);
  sub_2BFDC((pthread_mutex_t *)(a1 + 720), "util.c", "clear_sock", 1964);
  do
    v3 = *(_DWORD *)(a1 + 588);
  while ( v3 && recv(v3, *(void **)(a1 + 592), 0x1FFCu, 0) > 0 );
  v4 = sub_2C048(v2, "util.c", "clear_sock", 1973);
  off_72D00(v4);
  return sub_2BEF8(a1);
}
