unsigned int __fastcall pipe_pop(int *a1, char *a2, int a3)
{
  unsigned int v3; // r9
  unsigned int v5; // r4
  size_t v6; // r4
  size_t v7; // r7
  const void *v8; // r1
  unsigned int v9; // r5
  unsigned int v10; // r3
  int v11; // r5
  pthread_cond_t *v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r6
  int v15; // r3
  unsigned int v16; // r10
  unsigned int v17; // r8
  unsigned int v18; // r4
  unsigned int v19; // r1
  int v20; // r2
  unsigned int v22; // r3
  unsigned int v23; // r12
  int v24; // r1
  int v25; // lr
  bool v26; // cf
  unsigned int v27; // r0
  int v28; // r2
  unsigned int v29; // r2
  char *v30; // r5
  char *v31; // r1
  unsigned int v32; // r5
  pthread_mutex_t *mutex; // [sp+4h] [bp-40h]
  unsigned int v35; // [sp+8h] [bp-3Ch]
  unsigned int v36; // [sp+Ch] [bp-38h]
  size_t n; // [sp+10h] [bp-34h]
  pthread_mutex_t *v38; // [sp+14h] [bp-30h]
  unsigned int v39; // [sp+18h] [bp-2Ch]
  pthread_cond_t *cond; // [sp+1Ch] [bp-28h]
  int v41[7]; // [sp+20h] [bp-24h] BYREF
  char v42[5]; // [sp+3Fh] [bp-5h] BYREF

  v3 = *a1 * a3;
  v39 = *a1;
  if ( v3 )
  {
    mutex = (pthread_mutex_t *)(a1 + 9);
    v35 = 0;
    cond = (pthread_cond_t *)(a1 + 22);
    v38 = (pthread_mutex_t *)(a1 + 15);
    pthread_mutex_lock((pthread_mutex_t *)(a1 + 9));
    while ( 1 )
    {
      v13 = a1[5];
      v14 = a1[6];
      v15 = a1[3];
      v16 = a1[4];
      v17 = *a1;
      if ( v13 < v14 )
      {
        v5 = v14 - v13;
        if ( v17 != v14 - v13 )
          goto LABEL_4;
      }
      else
      {
        v18 = v14 - v15;
        v19 = v16 - v13;
        if ( v17 != v14 - v15 + v16 - v13 )
          goto LABEL_30;
      }
      do
      {
        if ( !a1[7] )
          break;
        pthread_cond_wait(cond, mutex);
        v13 = a1[5];
        v14 = a1[6];
        v15 = a1[3];
        v16 = a1[4];
        v17 = *a1;
        v20 = v14 - v13;
        if ( v13 >= v14 )
          v20 = v14 - v15 + v16 - v13;
      }
      while ( v17 == v20 );
      if ( v13 < v14 )
      {
        v5 = v14 - v13;
LABEL_4:
        v6 = v5 - v17;
        if ( !v6 )
          goto LABEL_31;
        goto LABEL_5;
      }
      v18 = v14 - v15;
      v19 = v16 - v13;
LABEL_30:
      v6 = v18 + v19 - v17;
      if ( !v6 )
      {
LABEL_31:
        pthread_mutex_unlock(mutex);
        return v35 / v39;
      }
LABEL_5:
      v7 = v16 - v13 - v17;
      if ( v6 >= v3 )
        v6 = v3;
      v36 = v15;
      if ( v7 >= v6 )
        v7 = v6;
      v8 = (const void *)(v13 + v17);
      v9 = v13 + v7;
      n = v6 - v7;
      memcpy(a2, v8, v7);
      v10 = v36;
      if ( v16 <= v9 )
        v9 = v36 + v9 - v16;
      if ( v6 != v7 )
      {
        v30 = (char *)(v9 + v17);
        if ( v16 <= (unsigned int)v30 )
          v30 = &v30[v36 - v16];
        v31 = v30;
        v32 = (unsigned int)&v30[n];
        memcpy(&a2[v7], v31, n);
        v10 = v36;
        if ( v16 <= v32 )
          v32 = v36 + v32 - v16;
        v9 = v32 - v17;
        if ( v36 > v9 )
          v9 = v16 - (v36 - v9);
      }
      a1[5] = v9;
      if ( v14 > v9 )
        v11 = v14 - v9;
      else
        v11 = v14 - v10 + v16 - v9;
      v42[0] = 1;
      if ( v11 - v17 <= (v16 - v10 - v17) >> 2 )
      {
        pthread_mutex_unlock(mutex);
        pthread_mutex_lock(v38);
        pthread_mutex_lock(mutex);
        v22 = a1[6];
        v23 = a1[5];
        v24 = a1[3];
        v25 = a1[4];
        v26 = v23 >= v22;
        v27 = *a1;
        if ( v23 < v22 )
          v22 -= v23;
        v28 = v25 - v24;
        if ( v26 )
        {
          v24 = v22 - v24;
          v22 = v25 - v23;
        }
        v29 = v28 - v27;
        if ( v26 )
          v22 += v24;
        if ( v22 - v27 <= v29 >> 2 )
          sub_12CB64(v41, a1, v29 >> 1, v42);
        pthread_mutex_unlock(mutex);
        pthread_mutex_unlock(v38);
      }
      else
      {
        pthread_mutex_unlock(mutex);
      }
      v12 = (pthread_cond_t *)(a1 + 34);
      if ( v6 == *a1 )
        pthread_cond_signal(v12);
      else
        pthread_cond_broadcast(v12);
      v3 -= v6;
      a2 += v6;
      v35 += v6;
      if ( !v3 )
        return v35 / v39;
      pthread_mutex_lock(mutex);
    }
  }
  return v3;
}
