int __fastcall sub_17A14(int a1)
{
  int v2; // r1
  int v3; // r2
  int v4; // r3
  int v5; // r3
  int v6; // r0
  int v7; // r2
  int v8; // r1
  int v9; // r12
  bool v10; // zf
  int v11; // r2
  int v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r2
  struct timespec v17; // [sp+0h] [bp-814h] BYREF
  _DWORD v18[2]; // [sp+8h] [bp-80Ch] BYREF
  char v19[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_612C8) )
    sub_B4E4("hash_pop", 7716);
  if ( dword_612CC && *(_DWORD *)(*(_DWORD *)(dword_612CC + 344) + 12) )
  {
    if ( !byte_612D0 )
      goto LABEL_18;
    goto LABEL_14;
  }
  v3 = (int)&dword_60E88;
  if ( byte_612D1 )
  {
    v2 = dword_60070;
    if ( dword_60070 < dword_60074 )
    {
      v2 = ++dword_60070;
      byte_612D1 = 0;
    }
  }
  v4 = 1;
  byte_612D2 = 1;
  if ( a1 )
  {
    while ( 1 )
    {
      sub_2B13C(v18, v2, v3, v4);
      v17.tv_sec = v18[0] + 10;
      v17.tv_nsec = 1000 * v18[1];
      pthread_cond_signal(&stru_63748);
      if ( pthread_cond_timedwait((pthread_cond_t *)(dword_63BC0 + 40), (pthread_mutex_t *)dword_612C8, &v17) )
      {
        v3 = 1;
        if ( !byte_612D0 )
        {
          byte_612D0 = 1;
          if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
          {
            strcpy(v19, "Waiting for work to be available from pools.");
            sub_38438(4, v19, 0);
          }
        }
      }
      v4 = dword_612CC;
      if ( dword_612CC )
      {
        v4 = *(_DWORD *)(*(_DWORD *)(dword_612CC + 344) + 12);
        if ( v4 )
          break;
      }
    }
    if ( !byte_612D0 )
    {
LABEL_18:
      v5 = dword_612CC;
      if ( dword_612CC )
      {
        v6 = *(_DWORD *)(dword_612CC + 344);
        if ( dword_612D4 < *(_DWORD *)(v6 + 12)
          && (a1 = *(_DWORD *)(dword_612CC + 352), !*(_BYTE *)(dword_612CC + 273))
          && *(_DWORD *)(dword_612CC + 276) )
        {
          while ( a1 )
          {
            if ( *(_BYTE *)(a1 + 273) )
            {
              v7 = *(_DWORD *)(a1 + 348);
              if ( v7 )
                goto LABEL_22;
              goto LABEL_61;
            }
            if ( !*(_DWORD *)(a1 + 276) )
              break;
            a1 = *(_DWORD *)(a1 + 352);
          }
        }
        else
        {
          a1 = dword_612CC;
        }
      }
      else
      {
        v6 = MEMORY[0x158];
        a1 = 0;
      }
      v7 = *(_DWORD *)(a1 + 348);
      if ( !v7 )
      {
LABEL_61:
        if ( !*(_DWORD *)(a1 + 352) )
        {
          free(*(void **)v6);
          free(*(void **)(dword_612CC + 344));
          dword_612CC = 0;
LABEL_43:
          if ( !*(_BYTE *)(a1 + 273) && *(_DWORD *)(a1 + 276) )
            --dword_612D4;
          pthread_cond_signal(&stru_63748);
          pthread_cond_signal((pthread_cond_t *)(dword_63BC0 + 40));
          dword_63EE8 = time(0);
          goto LABEL_45;
        }
      }
LABEL_22:
      v8 = *(_DWORD *)(v6 + 20);
      v9 = a1 + 344;
      if ( *(_DWORD *)(v6 + 16) - v8 == a1 )
      {
        *(_DWORD *)(v6 + 16) = v7 + v8;
        v7 = *(_DWORD *)(a1 + 348);
      }
      v10 = v7 == 0;
      if ( v7 )
      {
        v6 = *(_DWORD *)(v5 + 344);
        v8 = *(_DWORD *)(a1 + 352);
      }
      else
      {
        v7 = *(_DWORD *)(a1 + 352);
      }
      if ( v10 )
      {
        v5 = v7;
        dword_612CC = v7;
      }
      else
      {
        v7 += *(_DWORD *)(v6 + 20);
      }
      if ( !v10 )
      {
        *(_DWORD *)(v7 + 8) = v8;
        v7 = *(_DWORD *)(a1 + 352);
      }
      if ( v7 )
        *(_DWORD *)(v7 + *(_DWORD *)(*(_DWORD *)(v5 + 344) + 20) + 4) = *(_DWORD *)(a1 + 348);
      v11 = 12 * ((*(_DWORD *)(*(_DWORD *)(v5 + 344) + 4) - 1) & *(_DWORD *)(a1 + 372));
      --*(_DWORD *)(**(_DWORD **)(v5 + 344) + v11 + 4);
      v12 = **(_DWORD **)(v5 + 344);
      v13 = *(_DWORD *)(v12 + v11);
      if ( v13 == v9 )
      {
        v5 = *(_DWORD *)(a1 + 360);
        *(_DWORD *)(v12 + v11) = v5;
      }
      v14 = *(_DWORD *)(a1 + 356);
      if ( v13 == v9 )
        v5 = dword_612CC;
      if ( v14 )
        *(_DWORD *)(v14 + 16) = *(_DWORD *)(a1 + 360);
      v15 = *(_DWORD *)(a1 + 360);
      if ( v15 )
        *(_DWORD *)(v15 + 12) = *(_DWORD *)(a1 + 356);
      --*(_DWORD *)(*(_DWORD *)(v5 + 344) + 12);
      goto LABEL_43;
    }
LABEL_14:
    if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
    {
      strcpy(v19, "Work available from pools, resuming.");
      sub_38438(4, v19, 0);
    }
    byte_612D0 = 0;
    goto LABEL_18;
  }
LABEL_45:
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_612C8) )
    sub_B694("hash_pop", 7783);
  off_60178();
  return a1;
}
