int __fastcall sub_17FC4(_DWORD *a1)
{
  int v2; // r4
  int v3; // r8
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r3
  int v9; // r12
  bool v10; // zf
  int v11; // r3
  int v12; // r1
  int v13; // r1
  int v14; // r12
  int v15; // r3
  int v16; // r3
  int result; // r0
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_612C8) )
    sub_B4E4("clear_pool_work", 6994);
  v2 = dword_612CC;
  if ( dword_612CC )
  {
    v4 = *(_DWORD *)(dword_612CC + 352);
    v3 = 0;
    while ( 1 )
    {
      if ( *(_DWORD **)(v2 + 260) == a1 )
      {
        v5 = *(_DWORD *)(v2 + 348);
        if ( v5 || *(_DWORD *)(v2 + 352) )
        {
          v6 = dword_612CC;
          v7 = v2 + 344;
          v8 = *(_DWORD *)(dword_612CC + 344);
          v9 = *(_DWORD *)(v8 + 20);
          if ( *(_DWORD *)(v8 + 16) - v9 == v2 )
          {
            *(_DWORD *)(v8 + 16) = v5 + v9;
            v5 = *(_DWORD *)(v2 + 348);
          }
          v10 = v5 == 0;
          if ( v5 )
          {
            v9 = *(_DWORD *)(v6 + 344);
            v8 = *(_DWORD *)(v2 + 352);
          }
          else
          {
            v6 = *(_DWORD *)(v2 + 352);
          }
          if ( v5 )
          {
            v5 += *(_DWORD *)(v9 + 20);
          }
          else
          {
            dword_612CC = v6;
            v8 = v6;
          }
          if ( !v10 )
          {
            *(_DWORD *)(v5 + 8) = v8;
            v8 = *(_DWORD *)(v2 + 352);
          }
          if ( v8 )
            *(_DWORD *)(v8 + *(_DWORD *)(*(_DWORD *)(v6 + 344) + 20) + 4) = *(_DWORD *)(v2 + 348);
          v11 = 3 * ((*(_DWORD *)(*(_DWORD *)(v6 + 344) + 4) - 1) & *(_DWORD *)(v2 + 372));
          v12 = **(_DWORD **)(v6 + 344) + 12 * ((*(_DWORD *)(*(_DWORD *)(v6 + 344) + 4) - 1) & *(_DWORD *)(v2 + 372));
          --*(_DWORD *)(v12 + 4);
          v13 = **(_DWORD **)(v6 + 344);
          v14 = *(_DWORD *)(v13 + 4 * v11);
          if ( v14 == v7 )
          {
            v6 = *(_DWORD *)(v2 + 360);
            *(_DWORD *)(v13 + 4 * v11) = v6;
          }
          v15 = *(_DWORD *)(v2 + 356);
          if ( v14 == v7 )
            v6 = dword_612CC;
          if ( v15 )
            *(_DWORD *)(v15 + 16) = *(_DWORD *)(v2 + 360);
          v16 = *(_DWORD *)(v2 + 360);
          if ( v16 )
            *(_DWORD *)(v16 + 12) = *(_DWORD *)(v2 + 356);
          --*(_DWORD *)(*(_DWORD *)(v6 + 344) + 12);
        }
        else
        {
          free(**(void ***)(dword_612CC + 344));
          free(*(void **)(dword_612CC + 344));
          dword_612CC = 0;
        }
        ++v3;
        sub_152B8((void **)v2);
        if ( !v4 )
          goto LABEL_31;
      }
      else if ( !v4 )
      {
        goto LABEL_31;
      }
      v2 = v4;
      v4 = *(_DWORD *)(v4 + 352);
    }
  }
  v3 = 0;
LABEL_31:
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_612C8) )
    sub_B694("clear_pool_work", 7004);
  result = off_60178();
  if ( v3 && byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "Cleared %d work items due to stratum disconnect on pool %d", v3, *a1);
    return sub_38438(7, s, 0);
  }
  return result;
}
