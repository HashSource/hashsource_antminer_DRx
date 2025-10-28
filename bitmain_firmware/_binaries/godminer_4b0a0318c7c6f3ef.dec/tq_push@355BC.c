int __fastcall tq_push(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r7
  _DWORD *v7; // r6
  _DWORD *v8; // r3

  v4 = calloc(1u, 0xCu);
  v5 = v4;
  if ( !v4 )
    return 0;
  *v4 = a2;
  v7 = v4 + 1;
  v4[1] = v4 + 1;
  v4[2] = v4 + 1;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 12));
  if ( *(_BYTE *)(a1 + 8) )
  {
    v6 = 0;
    free(v5);
  }
  else
  {
    v8 = *(_DWORD **)(a1 + 4);
    v6 = 1;
    v5[1] = a1;
    *(_DWORD *)(a1 + 4) = v7;
    v5[2] = v8;
    *v8 = v7;
  }
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 12));
  return v6;
}
