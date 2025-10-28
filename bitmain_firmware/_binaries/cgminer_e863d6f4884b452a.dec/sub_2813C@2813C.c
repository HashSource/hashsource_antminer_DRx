int __fastcall sub_2813C(int a1)
{
  pthread_mutex_t *v1; // r5
  int v3; // r0
  int v4; // r0
  int result; // r0
  _BYTE *v6; // r3

  v1 = (pthread_mutex_t *)(a1 + 720);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 720)) )
    sub_28044("clear_sock", 1964);
  do
    v3 = *(_DWORD *)(a1 + 588);
  while ( v3 && recv(v3, *(void **)(a1 + 592), 0x1FFCu, 0) > 0 );
  v4 = sub_280C0(v1, "clear_sock", 1973);
  result = off_6CB70(v4);
  v6 = *(_BYTE **)(a1 + 592);
  if ( v6 )
    *v6 = 0;
  return result;
}
