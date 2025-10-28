int __fastcall sub_1856C(int a1, int a2)
{
  _DWORD *v4; // r7
  time_t v5; // r9
  int *v6; // r0
  int v7; // r11
  int v8; // r4
  int v9; // r6
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r3
  int v15; // r2
  _DWORD *v16; // r1
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r3
  int *v22; // r0
  int v23; // r9
  int v24; // r3
  int v25; // r3
  double v26; // d16
  int v27; // r3
  struct timespec abstime; // [sp+18h] [bp-814h] BYREF
  _DWORD v30[2]; // [sp+20h] [bp-80Ch] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v4 = *(_DWORD **)(a1 + 36);
  sub_C64C(a1);
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(s, "Popping work from get queue to get work");
    sub_3F1C0(7, s, 0);
  }
  v5 = time(0);
  do
  {
    while ( 1 )
    {
      if ( pthread_mutex_lock((pthread_mutex_t *)dword_73E64) )
      {
        v6 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v6, "cgminer.c", "hash_pop", 8124);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      if ( !dword_73E68 || !*(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 12) )
      {
        if ( byte_73EE0 && dword_72C10 < dword_72C14 )
        {
          ++dword_72C10;
          byte_73EE0 = 0;
        }
        byte_73EE1 = 1;
        do
        {
          sub_2FE30(v30);
          abstime.tv_sec = v30[0] + 10;
          abstime.tv_nsec = 1000 * v30[1];
          pthread_cond_signal(&stru_791F0);
          if ( pthread_cond_timedwait((pthread_cond_t *)(dword_796E8 + 40), (pthread_mutex_t *)dword_73E64, &abstime) )
          {
            if ( !byte_73E7C )
            {
              byte_73E7C = 1;
              if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
              {
                strcpy(s, "Waiting for work to be available from pools.");
                sub_3F1C0(4, s, 0);
              }
            }
          }
        }
        while ( !dword_73E68 || !*(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 12) );
      }
      if ( byte_73E7C )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
        {
          strcpy(s, "Work available from pools, resuming.");
          sub_3F1C0(4, s, 0);
        }
        byte_73E7C = 0;
      }
      v7 = dword_73E68;
      if ( dword_73E68 )
      {
        if ( *(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 12) > dword_73EE4 )
        {
          v8 = *(_DWORD *)(dword_73E68 + 412);
          v9 = dword_73E68;
          while ( sub_BFAC(v9) )
          {
            if ( !v8 )
              goto LABEL_38;
            v9 = v8;
            v8 = *(_DWORD *)(v8 + 412);
          }
          v8 = v9;
        }
        else
        {
          v8 = dword_73E68;
        }
      }
      else
      {
        v8 = 0;
      }
LABEL_38:
      v10 = *(_DWORD *)(v8 + 408);
      if ( v10 || *(_DWORD *)(v8 + 412) )
      {
        v11 = *(_DWORD *)(v7 + 404);
        v12 = *(_DWORD *)(v11 + 20);
        if ( v8 == *(_DWORD *)(v11 + 16) - v12 )
          *(_DWORD *)(v11 + 16) = v10 + v12;
        v13 = *(_DWORD *)(v8 + 408);
        if ( v13 )
          *(_DWORD *)(v13 + *(_DWORD *)(*(_DWORD *)(v7 + 404) + 20) + 8) = *(_DWORD *)(v8 + 412);
        else
          dword_73E68 = *(_DWORD *)(v8 + 412);
        v14 = *(_DWORD *)(v8 + 412);
        if ( v14 )
          *(_DWORD *)(v14 + *(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 20) + 4) = *(_DWORD *)(v8 + 408);
        v15 = dword_73E68;
        v16 = *(_DWORD **)(dword_73E68 + 404);
        v17 = 3 * ((v16[1] - 1) & *(_DWORD *)(v8 + 432));
        v18 = *v16 + 12 * ((v16[1] - 1) & *(_DWORD *)(v8 + 432));
        --*(_DWORD *)(v18 + 4);
        v19 = **(_DWORD **)(v15 + 404);
        if ( v8 + 404 == *(_DWORD *)(v19 + 4 * v17) )
          *(_DWORD *)(v19 + 4 * v17) = *(_DWORD *)(v8 + 420);
        v20 = *(_DWORD *)(v8 + 416);
        if ( v20 )
          *(_DWORD *)(v20 + 16) = *(_DWORD *)(v8 + 420);
        v21 = *(_DWORD *)(v8 + 420);
        if ( v21 )
          *(_DWORD *)(v21 + 12) = *(_DWORD *)(v8 + 416);
        --*(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 12);
      }
      else
      {
        free(**(void ***)(v7 + 404));
        free(*(void **)(dword_73E68 + 404));
        dword_73E68 = 0;
      }
      if ( sub_BFAC(v8) )
        --dword_73EE4;
      pthread_cond_signal(&stru_791F0);
      pthread_cond_signal((pthread_cond_t *)(dword_796E8 + 40));
      dword_79A10 = time(0);
      if ( pthread_mutex_unlock((pthread_mutex_t *)dword_73E64) )
      {
        v22 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v22, "cgminer.c", "hash_pop", 0x1FFF);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      if ( !sub_148CC(v8, 0) )
        break;
      sub_12020(v8);
      sub_14660();
    }
  }
  while ( !v8 );
  v23 = time(0) - v5;
  if ( v23 > 0 )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "Get work blocked for %d seconds", v23);
      sub_3F1C0(7, s, 0);
    }
    v4[58] += v23;
  }
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "Got work from get queue to get work for thread %d", a2);
    sub_3F1C0(7, s, 0);
  }
  *(_DWORD *)(v8 + 312) = a2;
  if ( byte_73E70 )
  {
    v24 = v4[95] + v4[96];
    v4[95] = v24;
    if ( v24 <= 0 )
      v4[96] = 1;
    if ( v24 <= 15 )
    {
      memcpy((void *)v8, (char *)&unk_748E8 + 160 * v24, 0xA0u);
    }
    else
    {
      v4[96] = -1;
      v25 = v4[94] + 1;
      if ( v25 > 15 )
        v25 = 0;
      v4[94] = v25;
      memcpy((void *)v8, (char *)&unk_73EE8 + 160 * v4[94], 0xA0u);
    }
  }
  sub_C618(a1);
  *(_BYTE *)(v8 + 328) = 1;
  v26 = *(double *)(v4[1] + 104);
  if ( v26 > *(double *)(v8 + 440) )
    v26 = *(double *)(v8 + 440);
  *(double *)(v8 + 280) = v26;
  v27 = v4[1];
  if ( v26 < *(double *)(v27 + 120) )
    v26 = *(double *)(v27 + 120);
  *(double *)(v8 + 280) = v26;
  return v8;
}
