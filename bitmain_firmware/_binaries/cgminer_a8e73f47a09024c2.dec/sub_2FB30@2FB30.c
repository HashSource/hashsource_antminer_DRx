int __fastcall sub_2FB30(int a1, const struct timespec *a2)
{
  pthread_mutex_t *v4; // r5
  int v5; // r0
  int *v6; // r0
  int v7; // r4
  _DWORD *v8; // r2
  int v9; // r1
  int v10; // r0

  v4 = (pthread_mutex_t *)(a1 + 12);
  sub_2C1F4((pthread_mutex_t *)(a1 + 12), "util.c", "tq_pop", 1296);
  if ( a1 == *(_DWORD *)a1 )
  {
    if ( a2 )
      v5 = pthread_cond_timedwait((pthread_cond_t *)(a1 + 40), v4, a2);
    else
      v5 = pthread_cond_wait((pthread_cond_t *)(a1 + 40), v4);
    if ( v5 )
    {
      v7 = 0;
      goto LABEL_10;
    }
    if ( a1 == *(_DWORD *)a1 )
    {
      v7 = 0;
      goto LABEL_10;
    }
  }
  v6 = *(int **)a1;
  v7 = *(_DWORD *)(*(_DWORD *)a1 - 4);
  v8 = (_DWORD *)v6[1];
  v9 = *v6;
  *(_DWORD *)(v9 + 4) = v8;
  *v8 = v9;
  *v6 = 0;
  v6[1] = 0;
  free(v6 - 1);
LABEL_10:
  v10 = sub_2C260(v4, "util.c", "tq_pop", 1315);
  off_79D40(v10);
  return v7;
}
