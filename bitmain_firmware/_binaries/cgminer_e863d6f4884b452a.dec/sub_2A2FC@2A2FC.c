int __fastcall sub_2A2FC(int a1, const struct timespec *a2)
{
  pthread_mutex_t *v2; // r6
  int *v5; // r4
  _DWORD *v6; // r2
  int v7; // r1
  int v8; // r5
  int v9; // r0
  pthread_cond_t *v11; // r0
  int v12; // r0

  v2 = (pthread_mutex_t *)(a1 + 12);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 12)) )
    sub_28044("tq_pop", 1296);
  v5 = *(int **)a1;
  if ( a1 == *(_DWORD *)a1 )
  {
    v11 = (pthread_cond_t *)(a1 + 40);
    if ( a2 )
      v12 = pthread_cond_timedwait(v11, v2, a2);
    else
      v12 = pthread_cond_wait(v11, v2);
    if ( v12 )
    {
      v8 = 0;
      goto LABEL_4;
    }
    if ( v5 == *(int **)a1 )
    {
      v8 = 0;
      goto LABEL_4;
    }
    v5 = *(int **)a1;
  }
  v6 = (_DWORD *)v5[1];
  v7 = *v5;
  v8 = *(v5 - 1);
  *(_DWORD *)(v7 + 4) = v6;
  *v6 = v7;
  *v5 = 0;
  v5[1] = 0;
  free(v5 - 1);
LABEL_4:
  v9 = sub_280C0(v2, "tq_pop", 1315);
  off_6CB70(v9);
  return v8;
}
