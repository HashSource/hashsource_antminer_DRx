int __fastcall set_frequency_kas(int a1, int a2)
{
  int v2; // s0
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r5
  int v9; // r6
  int v10; // r3

  if ( *(int *)(a1 + 356) > 0 )
  {
    v5 = 0;
    v6 = 0;
    do
    {
      ++v6;
      v7 = *(_DWORD *)(a1 + 552) + v5;
      v5 += 44;
      pthread_mutex_lock((pthread_mutex_t *)(v7 + 20));
    }
    while ( *(_DWORD *)(a1 + 356) > v6 );
  }
  sub_924E0(a1, a2, 1, 0);
  if ( *(int *)(a1 + 356) > 0 )
  {
    v8 = 0;
    v9 = 0;
    do
    {
      ++v9;
      v10 = *(_DWORD *)(a1 + 552) + v8;
      v8 += 44;
      *(_DWORD *)(v10 + 4) = v2;
      *(_DWORD *)(v10 + 12) = v2;
      pthread_mutex_unlock((pthread_mutex_t *)(v10 + 20));
    }
    while ( *(_DWORD *)(a1 + 356) > v9 );
  }
  return 0;
}
