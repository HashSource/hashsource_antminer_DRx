_DWORD *__fastcall sub_2A278(int a1, int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // r4
  _DWORD *v6; // r6
  _DWORD *v7; // r3
  int v8; // r7
  int v9; // r0

  result = calloc(1u, 0xCu);
  v5 = result;
  if ( result )
  {
    *result = a2;
    v6 = result + 1;
    result[1] = result + 1;
    result[2] = result + 1;
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
      sub_28044("tq_push", 1274);
    if ( *(_BYTE *)(a1 + 8) )
    {
      v8 = 0;
      free(v5);
    }
    else
    {
      v7 = *(_DWORD **)(a1 + 4);
      v8 = 1;
      v5[1] = a1;
      *(_DWORD *)(a1 + 4) = v6;
      v5[2] = v7;
      *v7 = v6;
    }
    pthread_cond_signal((pthread_cond_t *)(a1 + 40));
    v9 = sub_280C0((pthread_mutex_t *)(a1 + 12), "tq_push", 1285);
    off_6CB70(v9);
    return (_DWORD *)v8;
  }
  return result;
}
