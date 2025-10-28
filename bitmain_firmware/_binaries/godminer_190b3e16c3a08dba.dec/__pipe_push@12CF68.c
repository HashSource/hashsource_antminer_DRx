_DWORD *__fastcall _pipe_push(_DWORD *result, char *a2, size_t a3, _BYTE *a4)
{
  size_t v4; // r6
  int *v5; // r9
  unsigned int v6; // r1
  unsigned int v7; // r5
  unsigned int v8; // r4
  unsigned int v9; // r10
  unsigned int v10; // r8
  unsigned int v11; // r2
  int v12; // r7
  int v13; // r3
  int v14; // r1
  _BOOL4 v15; // r2
  unsigned int v16; // r1
  unsigned int v17; // r11
  unsigned int v18; // r7
  void *v19; // r0
  size_t v20; // r5
  size_t v21; // r2
  char *v22; // r1
  pthread_cond_t *v23; // r0
  int v24; // r2
  _BOOL4 v25; // r2
  int v26; // r2
  unsigned int v27; // r0
  unsigned int v28; // r0
  int v29; // r3
  unsigned int v30; // r2
  int v31; // r2
  int v32; // r3
  void *v33; // r0
  pthread_mutex_t *mutex; // [sp+4h] [bp-40h]
  int v35; // [sp+8h] [bp-3Ch]
  int v38; // [sp+14h] [bp-30h]
  pthread_mutex_t *v39; // [sp+18h] [bp-2Ch]
  pthread_cond_t *cond; // [sp+1Ch] [bp-28h]
  unsigned int v41; // [sp+20h] [bp-24h]
  int v42; // [sp+20h] [bp-24h]
  int v43[6]; // [sp+2Ch] [bp-18h] BYREF

  v4 = a3;
  v38 = *result;
  if ( a3 )
  {
    v5 = result;
    mutex = (pthread_mutex_t *)(result + 15);
    cond = (pthread_cond_t *)(result + 34);
    v39 = (pthread_mutex_t *)(result + 9);
    while ( 1 )
    {
      pthread_mutex_lock(mutex);
      v7 = v5[5];
      v8 = v5[6];
      v9 = v5[4];
      v10 = *v5;
      v35 = v5[3];
      if ( v7 >= v8 )
      {
        v11 = v5[3];
        v6 = v9 - v7;
      }
      else
      {
        v11 = v8 - v7;
      }
      v12 = v5[2];
      v13 = *v5;
      if ( v7 >= v8 )
        v11 = v8 - v11 + v6;
      v14 = v5[8];
      v15 = v11 - v10 == v12;
      if ( !v14 )
        v15 = 0;
      if ( v15 )
      {
        do
        {
          pthread_cond_wait(cond, mutex);
          v7 = v5[5];
          v8 = v5[6];
          v9 = v5[4];
          v10 = *v5;
          v24 = v8 - v7;
          v12 = v5[2];
          if ( v7 >= v8 )
            v24 = v8 - v5[3] + v9 - v7;
          v14 = v5[8];
          v13 = *v5;
          v25 = v24 - v10 == v12;
          if ( !v14 )
            v25 = 0;
        }
        while ( v25 );
        v35 = v5[3];
      }
      if ( !v14 )
        break;
      if ( v7 < v8 )
        v16 = v8 - v7;
      else
        v16 = v9 - v7;
      if ( v7 >= v8 )
        v16 += v8 - v35;
      v17 = v9 - v35 - v10;
      if ( v17 < v4 - v10 + v16 )
      {
        pthread_mutex_lock(v39);
        v7 = v5[5];
        v8 = v5[6];
        v9 = v5[4];
        v35 = v5[3];
        if ( v7 >= v8 )
        {
          v26 = v5[3];
          v27 = v9 - v7;
        }
        else
        {
          v27 = v8 - v7;
        }
        if ( v7 >= v8 )
          v27 += v8 - v26;
        v41 = v4 - *v5 + v27;
        v28 = v41 / v10;
        v29 = *v5;
        if ( v17 < v41 )
        {
          v30 = v28 + 1;
          if ( (int)(v28 + 1) >= 0 )
          {
            v31 = 5;
            v32 = 1;
            do
            {
              --v31;
              v28 |= v28 >> v32;
              v32 *= 2;
            }
            while ( v31 );
            v30 = v28 + 1;
          }
          sub_12CB64(v43, v5, v30 * v10, a4);
          v9 = v43[1];
          v7 = v43[2];
          v35 = v43[0];
          v8 = v43[3];
          v29 = v43[4];
        }
        v42 = v29;
        pthread_mutex_unlock(v39);
        v13 = v42;
      }
      if ( !*a4 )
        break;
      if ( v7 >= v8 )
      {
        v22 = a2;
        v21 = v12 - (v8 - v35 + v9 - v7 - v13);
        if ( v21 >= v4 )
          v21 = v4;
        v18 = v21;
      }
      else
      {
        v18 = v12 - (v8 - v7 - v13);
        v19 = (void *)v8;
        if ( v18 >= v4 )
          v18 = v4;
        if ( v9 - v8 >= v18 )
          v20 = v18;
        else
          v20 = v9 - v8;
        v8 += v20;
        memcpy(v19, a2, v20);
        v21 = v18 - v20;
        v22 = &a2[v20];
      }
      if ( v21 )
      {
        if ( v9 <= v8 )
          v8 = v35 + v8 - v9;
        v33 = (void *)v8;
        v8 += v21;
        memcpy(v33, v22, v21);
      }
      if ( v9 <= v8 )
        v8 = v35 + v8 - v9;
      v5[6] = v8;
      pthread_mutex_unlock(mutex);
      v23 = (pthread_cond_t *)(v5 + 22);
      if ( v18 == v38 )
        result = (_DWORD *)pthread_cond_signal(v23);
      else
        result = (_DWORD *)pthread_cond_broadcast(v23);
      v4 -= v18;
      if ( !v4 )
        return result;
      a2 += v18;
      v38 = *v5;
    }
    return (_DWORD *)pthread_mutex_unlock(mutex);
  }
  return result;
}
