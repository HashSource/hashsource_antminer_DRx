unsigned int __fastcall pipe_pop_eager(int a1, char *a2, int a3)
{
  unsigned int v3; // r11
  unsigned int v4; // r6
  pthread_mutex_t *v5; // r10
  unsigned int v7; // r5
  unsigned int v8; // r7
  unsigned int v9; // r9
  unsigned int v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  size_t v13; // r8
  const void *v14; // r1
  unsigned int v15; // r5
  unsigned int v16; // r3
  bool v17; // cc
  int v18; // r1
  pthread_mutex_t *v19; // r0
  pthread_cond_t *v20; // r0
  unsigned int v22; // r1
  unsigned int v23; // r2
  int v24; // r2
  char *v25; // r5
  char *v26; // r1
  char *v27; // r5
  unsigned int v28; // r3
  unsigned int v29; // r12
  int v30; // r1
  int v31; // lr
  bool v32; // cf
  unsigned int v33; // r0
  int v34; // r2
  unsigned int v35; // r2
  unsigned int v36; // [sp+0h] [bp-34h]
  unsigned int v38; // [sp+8h] [bp-2Ch]
  size_t n; // [sp+Ch] [bp-28h]
  int v40[7]; // [sp+10h] [bp-24h] BYREF
  char v41[5]; // [sp+2Fh] [bp-5h] BYREF

  v3 = *(_DWORD *)a1;
  v4 = *(_DWORD *)a1 * a3;
  if ( !v4 )
    return v4;
  v5 = (pthread_mutex_t *)(a1 + 36);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 36));
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = *(_DWORD *)a1;
  v36 = *(_DWORD *)(a1 + 12);
  v10 = *(_DWORD *)(a1 + 16);
  if ( v7 >= v8 )
  {
    v22 = v10 - v7;
    v23 = v8 - v36;
    if ( v9 != v8 - v36 + v10 - v7 )
      goto LABEL_31;
  }
  else
  {
    v11 = v8 - v7;
    if ( v9 != v8 - v7 )
      goto LABEL_4;
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    do
    {
      pthread_cond_wait((pthread_cond_t *)(a1 + 88), v5);
      v9 = *(_DWORD *)a1;
      v10 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 20);
      v8 = *(_DWORD *)(a1 + 24);
      v24 = v8 - v7;
      if ( v7 >= v8 )
        v24 = v8 - *(_DWORD *)(a1 + 12) + v10 - v7;
    }
    while ( v9 == v24 && *(_DWORD *)(a1 + 28) );
    v36 = *(_DWORD *)(a1 + 12);
  }
  if ( v8 > v7 )
  {
    v11 = v8 - v7;
    goto LABEL_4;
  }
  v22 = v10 - v7;
  v23 = v8 - v36;
LABEL_31:
  v11 = v23 + v22;
LABEL_4:
  v12 = v11 - v9;
  if ( v12 )
  {
    v13 = v10 - v7 - v9;
    if ( v4 >= v12 )
      v4 = v12;
    v38 = v10;
    if ( v13 >= v4 )
      v13 = v4;
    v14 = (const void *)(v7 + v9);
    v15 = v7 + v13;
    n = v4 - v13;
    memcpy(a2, v14, v13);
    v16 = v38;
    if ( v15 >= v38 )
      v15 = v36 + v15 - v38;
    if ( v4 != v13 )
    {
      v25 = (char *)(v15 + v9);
      if ( (unsigned int)v25 >= v38 )
        v25 = &v25[v36 - v38];
      v26 = v25;
      v27 = &v25[n];
      memcpy(&a2[v13], v26, n);
      v16 = v38;
      if ( (unsigned int)v27 >= v38 )
        v27 = &v27[v36 - v38];
      v15 = (unsigned int)&v27[-v9];
      if ( v36 > v15 )
        v15 = v38 - (v36 - v15);
    }
    v17 = v8 > v15;
    v18 = 1;
    v41[0] = 1;
    if ( v8 <= v15 )
      v18 = v36;
    else
      v8 -= v15;
    v19 = v5;
    *(_DWORD *)(a1 + 20) = v15;
    if ( !v17 )
      v8 = v8 - v18 + v16 - v15;
    if ( v8 - v9 <= (v16 - v36 - v9) >> 2 )
    {
      pthread_mutex_unlock(v5);
      pthread_mutex_lock((pthread_mutex_t *)(a1 + 60));
      pthread_mutex_lock(v5);
      v28 = *(_DWORD *)(a1 + 24);
      v29 = *(_DWORD *)(a1 + 20);
      v30 = *(_DWORD *)(a1 + 12);
      v31 = *(_DWORD *)(a1 + 16);
      v32 = v29 >= v28;
      v33 = *(_DWORD *)a1;
      if ( v29 < v28 )
        v28 -= v29;
      v34 = v31 - v30;
      if ( v32 )
      {
        v30 = v28 - v30;
        v28 = v31 - v29;
      }
      v35 = v34 - v33;
      if ( v32 )
        v28 += v30;
      if ( v28 - v33 <= v35 >> 2 )
        sub_144204(v40, (int *)a1, v35 >> 1, v41);
      pthread_mutex_unlock(v5);
      v19 = (pthread_mutex_t *)(a1 + 60);
    }
    pthread_mutex_unlock(v19);
    v20 = (pthread_cond_t *)(a1 + 136);
    if ( v4 == *(_DWORD *)a1 )
      pthread_cond_signal(v20);
    else
      pthread_cond_broadcast(v20);
    v4 /= v3;
  }
  else
  {
    v4 = 0;
    pthread_mutex_unlock(v5);
  }
  return v4;
}
