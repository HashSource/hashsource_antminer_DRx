int __fastcall sub_29394(int a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r0

  v1 = (pthread_mutex_t *)(a1 + 672);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 672)) )
    sub_B7D8("clear_sock", 1831);
  do
    v3 = *(_DWORD *)(a1 + 580);
  while ( v3 && recv(v3, *(void **)(a1 + 584), 0x1FFCu, 0) > 0 );
  sub_29110(v1, "clear_sock", 1838);
  off_60178();
  return sub_286F8(a1);
}
