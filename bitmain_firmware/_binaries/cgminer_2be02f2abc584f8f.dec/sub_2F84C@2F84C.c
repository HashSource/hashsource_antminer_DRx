int __fastcall sub_2F84C(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r6
  int v6; // r4
  _DWORD *v7; // r4
  _DWORD *v8; // r3
  int v9; // r0

  v4 = calloc(1u, 0xCu);
  v5 = v4;
  if ( !v4 )
    return 0;
  *v4 = a2;
  v7 = v4 + 1;
  v4[1] = v4 + 1;
  v4[2] = v4 + 1;
  sub_2BFDC((pthread_mutex_t *)(a1 + 12), "util.c", "tq_push", 1274);
  if ( *(_BYTE *)(a1 + 8) )
  {
    free(v5);
    v6 = 0;
  }
  else
  {
    v8 = *(_DWORD **)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v7;
    v5[1] = a1;
    v5[2] = v8;
    *v8 = v7;
    v6 = 1;
  }
  pthread_cond_signal((pthread_cond_t *)(a1 + 40));
  v9 = sub_2C048((pthread_mutex_t *)(a1 + 12), "util.c", "tq_push", 1285);
  off_72D00(v9);
  return v6;
}
