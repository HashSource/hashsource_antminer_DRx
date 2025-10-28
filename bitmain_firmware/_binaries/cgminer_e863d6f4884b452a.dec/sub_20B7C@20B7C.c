int sub_20B7C()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r5
  int v2; // r7
  int v3; // r1
  int v4; // r2
  int v5; // lr
  int v6; // r0
  _DWORD *v7; // r12
  int v8; // r3
  _DWORD *v9; // r1
  int v10; // r3
  int v11; // r0
  _DWORD *v12; // r1
  bool v13; // zf
  int v14; // r1
  int v15; // r3
  int v16; // r9
  int result; // r0
  int *v18; // r0
  int *v19; // r0
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_6DC9C) )
  {
    v18 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v18, "cgminer.c", "discard_stale", 5524);
    goto LABEL_39;
  }
  v0 = (_DWORD *)dword_6DD60;
  if ( !dword_6DD60 )
  {
    pthread_cond_signal(&stru_732F0);
    if ( !pthread_mutex_unlock((pthread_mutex_t *)dword_6DC9C) )
      return off_6CB70();
    goto LABEL_40;
  }
  v1 = *(_DWORD **)(dword_6DD60 + 412);
  v2 = 0;
  while ( 1 )
  {
    if ( !sub_201D4((int)v0, 0) )
      goto LABEL_20;
    v3 = v0[102];
    v4 = dword_6DD60;
    v5 = *(_DWORD *)(dword_6DD60 + 404);
    if ( v3 )
    {
      v6 = *(_DWORD *)(v5 + 20);
      v7 = v0 + 101;
      if ( v0 != (_DWORD *)(*(_DWORD *)(v5 + 16) - v6) )
      {
LABEL_7:
        *(_DWORD *)(v6 + v3 + 8) = v0[103];
        v8 = v0[103];
LABEL_8:
        v9 = *(_DWORD **)(v4 + 404);
        if ( v8 )
        {
          *(_DWORD *)(v8 + v9[5] + 4) = v0[102];
          v9 = *(_DWORD **)(v4 + 404);
        }
        v10 = 3 * ((v9[1] - 1) & v0[108]);
        --*(_DWORD *)(*v9 + 4 * v10 + 4);
        v11 = **(_DWORD **)(v4 + 404);
        v12 = *(_DWORD **)(v11 + 4 * v10);
        v13 = v12 == v7;
        if ( v12 == v7 )
        {
          v4 = v0[105];
          *(_DWORD *)(v11 + 4 * v10) = v4;
        }
        v15 = v0[105];
        v14 = v0[104];
        if ( v13 )
          v4 = dword_6DD60;
        if ( v14 )
        {
          *(_DWORD *)(v14 + 16) = v15;
          v15 = v0[105];
        }
        if ( v15 )
          *(_DWORD *)(v15 + 12) = v0[104];
        --*(_DWORD *)(*(_DWORD *)(v4 + 404) + 12);
        goto LABEL_19;
      }
LABEL_24:
      *(_DWORD *)(v5 + 16) = v6 + v3;
      v3 = v0[102];
      if ( v3 )
      {
        v6 = *(_DWORD *)(*(_DWORD *)(v4 + 404) + 20);
        goto LABEL_7;
      }
      v16 = v0[103];
LABEL_26:
      v8 = v16;
      v4 = v16;
      dword_6DD60 = v16;
      goto LABEL_8;
    }
    v16 = v0[103];
    if ( v16 )
    {
      v6 = *(_DWORD *)(v5 + 20);
      v7 = v0 + 101;
      if ( v0 != (_DWORD *)(*(_DWORD *)(v5 + 16) - v6) )
        goto LABEL_26;
      goto LABEL_24;
    }
    free(*(void **)v5);
    free(*(void **)(dword_6DD60 + 404));
    dword_6DD60 = 0;
LABEL_19:
    ++v2;
    sub_1A328((int)v0);
LABEL_20:
    if ( !v1 )
      break;
    v0 = v1;
    v1 = (_DWORD *)v1[103];
  }
  pthread_cond_signal(&stru_732F0);
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_6DC9C) )
  {
LABEL_40:
    v19 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v19, "cgminer.c", "discard_stale", 5535);
LABEL_39:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  result = off_6CB70();
  if ( v2 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Discarded %d stales that didn't match current hash", v2);
    return sub_343C4(7, s, 0);
  }
  return result;
}
