int sub_19520()
{
  int *v0; // r0
  _DWORD *v1; // r4
  int v2; // r7
  _DWORD *v3; // r5
  int v4; // r3
  int v5; // r1
  int v6; // r2
  int v7; // r12
  int v8; // r3
  int v9; // r3
  int v10; // r3
  _DWORD *v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int *v17; // r0
  int result; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_7AEC4) )
  {
    v0 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v0, "cgminer.c", "discard_stale", 5524);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  v1 = (_DWORD *)dword_7AEC8;
  if ( dword_7AEC8 )
  {
    v3 = *(_DWORD **)(dword_7AEC8 + 412);
    v2 = 0;
    while ( 1 )
    {
      if ( sub_14AAC((int)v1, 0) )
      {
        v4 = v1[102];
        if ( v4 || v1[103] )
        {
          v5 = dword_7AEC8;
          v6 = *(_DWORD *)(dword_7AEC8 + 404);
          v7 = *(_DWORD *)(v6 + 20);
          if ( v1 == (_DWORD *)(*(_DWORD *)(v6 + 16) - v7) )
            *(_DWORD *)(v6 + 16) = v4 + v7;
          v8 = v1[102];
          if ( v8 )
            *(_DWORD *)(v8 + *(_DWORD *)(*(_DWORD *)(v5 + 404) + 20) + 8) = v1[103];
          else
            dword_7AEC8 = v1[103];
          v9 = v1[103];
          if ( v9 )
            *(_DWORD *)(v9 + *(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 20) + 4) = v1[102];
          v10 = dword_7AEC8;
          v11 = *(_DWORD **)(dword_7AEC8 + 404);
          v12 = 3 * ((v11[1] - 1) & v1[108]);
          v13 = *v11 + 12 * ((v11[1] - 1) & v1[108]);
          --*(_DWORD *)(v13 + 4);
          v14 = **(_DWORD **)(v10 + 404);
          if ( *(_DWORD **)(v14 + 4 * v12) == v1 + 101 )
            *(_DWORD *)(v14 + 4 * v12) = v1[105];
          v15 = v1[104];
          if ( v15 )
            *(_DWORD *)(v15 + 16) = v1[105];
          v16 = v1[105];
          if ( v16 )
            *(_DWORD *)(v16 + 12) = v1[104];
          --*(_DWORD *)(*(_DWORD *)(dword_7AEC8 + 404) + 12);
        }
        else
        {
          free(**(void ***)(dword_7AEC8 + 404));
          free(*(void **)(dword_7AEC8 + 404));
          dword_7AEC8 = 0;
        }
        sub_12260((int)v1);
        ++v2;
      }
      if ( !v3 )
        break;
      v1 = v3;
      v3 = (_DWORD *)v3[103];
    }
  }
  else
  {
    v2 = 0;
  }
  pthread_cond_signal(&stru_802D0);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_7AEC4) )
  {
    v17 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "discard_stale", 5535);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  result = off_79D40(0);
  if ( v2 && byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Discarded %d stales that didn't match current hash", v2);
    return sub_3F178(7, s, 0);
  }
  return result;
}
