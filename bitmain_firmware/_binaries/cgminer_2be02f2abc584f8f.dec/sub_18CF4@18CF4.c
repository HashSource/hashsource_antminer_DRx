int __fastcall sub_18CF4(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r4
  int v4; // r8
  int v5; // r5
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  int v10; // r3
  int v11; // r3
  int v12; // r2
  _DWORD *v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r3
  int *v19; // r0
  int result; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_73E64) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v2, "cgminer.c", "clear_pool_work", 7335);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v3 = dword_73E68;
  if ( dword_73E68 )
  {
    v5 = *(_DWORD *)(dword_73E68 + 412);
    v4 = 0;
    while ( 1 )
    {
      if ( *(_DWORD **)(v3 + 316) == a1 )
      {
        v6 = *(_DWORD *)(v3 + 408);
        if ( v6 || *(_DWORD *)(v3 + 412) )
        {
          v7 = dword_73E68;
          v8 = *(_DWORD *)(dword_73E68 + 404);
          v9 = *(_DWORD *)(v8 + 20);
          if ( v3 == *(_DWORD *)(v8 + 16) - v9 )
            *(_DWORD *)(v8 + 16) = v6 + v9;
          v10 = *(_DWORD *)(v3 + 408);
          if ( v10 )
            *(_DWORD *)(v10 + *(_DWORD *)(*(_DWORD *)(v7 + 404) + 20) + 8) = *(_DWORD *)(v3 + 412);
          else
            dword_73E68 = *(_DWORD *)(v3 + 412);
          v11 = *(_DWORD *)(v3 + 412);
          if ( v11 )
            *(_DWORD *)(v11 + *(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 20) + 4) = *(_DWORD *)(v3 + 408);
          v12 = dword_73E68;
          v13 = *(_DWORD **)(dword_73E68 + 404);
          v14 = 3 * ((v13[1] - 1) & *(_DWORD *)(v3 + 432));
          v15 = *v13 + 12 * ((v13[1] - 1) & *(_DWORD *)(v3 + 432));
          --*(_DWORD *)(v15 + 4);
          v16 = **(_DWORD **)(v12 + 404);
          if ( *(_DWORD *)(v16 + 4 * v14) == v3 + 404 )
            *(_DWORD *)(v16 + 4 * v14) = *(_DWORD *)(v3 + 420);
          v17 = *(_DWORD *)(v3 + 416);
          if ( v17 )
            *(_DWORD *)(v17 + 16) = *(_DWORD *)(v3 + 420);
          v18 = *(_DWORD *)(v3 + 420);
          if ( v18 )
            *(_DWORD *)(v18 + 12) = *(_DWORD *)(v3 + 416);
          --*(_DWORD *)(*(_DWORD *)(dword_73E68 + 404) + 12);
        }
        else
        {
          free(**(void ***)(dword_73E68 + 404));
          free(*(void **)(dword_73E68 + 404));
          dword_73E68 = 0;
        }
        sub_11D18((void **)v3);
        ++v4;
      }
      if ( !v5 )
        break;
      v3 = v5;
      v5 = *(_DWORD *)(v5 + 412);
    }
  }
  else
  {
    v4 = 0;
  }
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_73E64) )
  {
    v19 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v19, "cgminer.c", "clear_pool_work", 7345);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  result = off_72D00(0);
  if ( v4 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "Cleared %d work items due to stratum disconnect on pool %d", v4, *a1);
    return sub_3F1C0(7, s, 0);
  }
  return result;
}
