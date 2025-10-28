int __fastcall sub_20540(int a1, int a2)
{
  int v2; // r2
  int v3; // r0
  int i; // r5
  int v5; // r12
  int v6; // r3
  int v7; // lr
  int v8; // r1
  int v9; // r10
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r3
  bool v14; // zf
  __int64 v15; // r2
  int *v16; // r0
  int *v17; // r0
  time_t v18; // r0
  int v19; // r6
  int v20; // r3
  int v21; // r3
  int result; // r0
  double v23; // d7
  int v24; // r3
  int v25; // r3
  char *v26; // r1
  int v27; // r3
  int v28; // r3
  bool v29; // cc
  int v30; // r2
  _DWORD *v31; // [sp+10h] [bp-824h]
  time_t v33; // [sp+18h] [bp-81Ch]
  struct timespec abstime; // [sp+20h] [bp-814h] BYREF
  _DWORD v36[2]; // [sp+28h] [bp-80Ch] BYREF
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  v31 = *(_DWORD **)(a1 + 36);
  sub_172A8(a1);
  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(s, "Popping work from get queue to get work");
    sub_343C4(7, s, 0);
  }
  v33 = time(0);
  if ( pthread_mutex_lock((pthread_mutex_t *)dword_6DC9C) )
  {
LABEL_50:
    v16 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v16, "cgminer.c", "hash_pop", 8128);
    goto LABEL_51;
  }
  while ( 1 )
  {
    if ( !dword_6DD60 || !*(_DWORD *)(*(_DWORD *)(dword_6DD60 + 404) + 12) )
    {
      if ( byte_6E7F4 && dword_6CAA0 < dword_6CAA4 )
      {
        ++dword_6CAA0;
        byte_6E7F4 = 0;
      }
      do
      {
        sub_2A69C(v36);
        abstime.tv_sec = v36[0] + 10;
        abstime.tv_nsec = 1000 * v36[1];
        pthread_cond_signal(&stru_732F0);
        if ( pthread_cond_timedwait((pthread_cond_t *)(dword_73798 + 40), (pthread_mutex_t *)dword_6DC9C, &abstime) )
        {
          if ( !byte_6DD4C )
          {
            byte_6DD4C = 1;
            if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
            {
              strcpy(s, "Waiting for work to be available from pools.");
              sub_343C4(4, s, 0);
            }
          }
        }
      }
      while ( !dword_6DD60 || !*(_DWORD *)(*(_DWORD *)(dword_6DD60 + 404) + 12) );
    }
    if ( byte_6DD4C )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
      {
        strcpy(s, "Work available from pools, resuming.");
        sub_343C4(4, s, 0);
        v2 = dword_6DD60;
        byte_6DD4C = 0;
        if ( !dword_6DD60 )
          goto LABEL_24;
      }
      else
      {
        v2 = dword_6DD60;
        byte_6DD4C = 0;
        if ( !dword_6DD60 )
          goto LABEL_24;
      }
    }
    else
    {
      v2 = dword_6DD60;
    }
    v3 = *(_DWORD *)(v2 + 404);
    if ( *(_DWORD *)(v3 + 12) > dword_6E7F8 && !*(_BYTE *)(v2 + 329) && *(_DWORD *)(v2 + 332) )
    {
      for ( i = *(_DWORD *)(v2 + 412); i; i = *(_DWORD *)(i + 412) )
      {
        if ( *(_BYTE *)(i + 329) || !*(_DWORD *)(i + 332) )
          goto LABEL_30;
      }
LABEL_24:
      __und(0xFFu);
    }
    i = v2;
LABEL_30:
    v5 = *(_DWORD *)(i + 408);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v3 + 20);
      v7 = i + 404;
      if ( i != *(_DWORD *)(v3 + 16) - v6 )
        goto LABEL_32;
    }
    else
    {
      v9 = *(_DWORD *)(i + 412);
      if ( !v9 )
      {
        free(*(void **)v3);
        free(*(void **)(dword_6DD60 + 404));
        dword_6DD60 = 0;
        goto LABEL_44;
      }
      v6 = *(_DWORD *)(v3 + 20);
      v7 = i + 404;
      if ( i != *(_DWORD *)(v3 + 16) - v6 )
        goto LABEL_55;
    }
    *(_DWORD *)(v3 + 16) = v6 + v5;
    v5 = *(_DWORD *)(i + 408);
    if ( !v5 )
    {
      v9 = *(_DWORD *)(i + 412);
LABEL_55:
      v8 = v9;
      dword_6DD60 = v9;
      goto LABEL_33;
    }
    v6 = *(_DWORD *)(*(_DWORD *)(v2 + 404) + 20);
LABEL_32:
    v8 = dword_6DD60;
    *(_DWORD *)(v6 + v5 + 8) = *(_DWORD *)(i + 412);
    v9 = *(_DWORD *)(i + 412);
LABEL_33:
    v10 = *(_DWORD **)(v8 + 404);
    if ( v9 )
    {
      *(_DWORD *)(v9 + v10[5] + 4) = *(_DWORD *)(i + 408);
      v10 = *(_DWORD **)(v8 + 404);
    }
    v11 = 3 * ((v10[1] - 1) & *(_DWORD *)(i + 432));
    --*(_DWORD *)(*v10 + 4 * v11 + 4);
    v12 = **(_DWORD **)(v8 + 404);
    v13 = *(_DWORD *)(v12 + 4 * v11);
    v14 = v7 == v13;
    if ( v7 == v13 )
      *(_DWORD *)(v12 + 4 * v11) = *(_DWORD *)(i + 420);
    v15 = *(_QWORD *)(i + 416);
    if ( v14 )
      v8 = dword_6DD60;
    if ( (_DWORD)v15 )
    {
      *(_DWORD *)(v15 + 16) = HIDWORD(v15);
      HIDWORD(v15) = *(_DWORD *)(i + 420);
    }
    if ( HIDWORD(v15) )
      *(_DWORD *)(HIDWORD(v15) + 12) = *(_DWORD *)(i + 416);
    --*(_DWORD *)(*(_DWORD *)(v8 + 404) + 12);
LABEL_44:
    if ( !*(_BYTE *)(i + 329) && *(_DWORD *)(i + 332) )
      --dword_6E7F8;
    pthread_cond_signal(&stru_732F0);
    pthread_cond_signal((pthread_cond_t *)(dword_73798 + 40));
    dword_732C4 = time(0);
    if ( pthread_mutex_unlock((pthread_mutex_t *)dword_6DC9C) )
    {
      v17 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v17, "cgminer.c", "hash_pop", 8195);
LABEL_51:
      sub_343C4(3, s, 1);
      sub_1B070(1, 1);
    }
    off_6CB70();
    if ( !sub_201D4(i, 0) )
      break;
    sub_1A328(i);
    sub_1C590();
    if ( pthread_mutex_lock((pthread_mutex_t *)dword_6DC9C) )
      goto LABEL_50;
  }
  v18 = time(0);
  v19 = v18 - v33;
  v20 = (unsigned __int8)byte_6FA71;
  if ( v18 - v33 <= 0 )
    goto LABEL_77;
  if ( !byte_6FA71 )
  {
    v31[58] += v19;
    goto LABEL_67;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
  {
    snprintf(s, 0x800u, "Get work blocked for %d seconds", v18 - v33);
    sub_343C4(7, s, 0);
    v20 = (unsigned __int8)byte_6FA71;
    v31[58] += v19;
LABEL_77:
    if ( v20 )
      goto LABEL_78;
    goto LABEL_67;
  }
  v31[58] += v19;
LABEL_78:
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
  {
    snprintf(s, 0x800u, "Got work from get queue to get work for thread %d", a2);
    sub_343C4(7, s, 0);
  }
LABEL_67:
  v21 = (unsigned __int8)byte_6DDB1;
  *(_DWORD *)(i + 312) = a2;
  if ( v21 )
  {
    v25 = v31[95] + v31[96];
    v31[95] = v25;
    if ( v25 > 0 )
    {
      if ( v25 > 15 )
      {
        v26 = (char *)&unk_6DDF4;
        v27 = v31[94];
        v31[96] = -1;
        v28 = v27 + 1;
        v29 = v28 <= 15;
        if ( v28 <= 15 )
          v30 = 5 * v28;
        else
          v30 = (int)v31;
        if ( v28 <= 15 )
        {
          v31[94] = v28;
          v26 = (char *)&unk_6DDF4 + 32 * v30;
        }
        else
        {
          v28 = 0;
        }
        if ( !v29 )
          *(_DWORD *)(v30 + 376) = v28;
        memcpy((void *)i, v26, 0xA0u);
        goto LABEL_68;
      }
    }
    else
    {
      v31[96] = 1;
    }
    memcpy((void *)i, (char *)&unk_6E7FC + 160 * v25, 0xA0u);
  }
LABEL_68:
  sub_172CC(a1);
  *(_BYTE *)(i + 328) = 1;
  result = i;
  v23 = *(double *)(v31[1] + 104);
  if ( v23 > *(double *)(i + 440) )
    v23 = *(double *)(i + 440);
  *(double *)(i + 280) = v23;
  v24 = v31[1];
  if ( *(double *)(v24 + 120) > v23 )
    v23 = *(double *)(v24 + 120);
  *(double *)(i + 280) = v23;
  return result;
}
