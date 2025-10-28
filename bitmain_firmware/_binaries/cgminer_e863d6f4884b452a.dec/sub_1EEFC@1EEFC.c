int __fastcall sub_1EEFC(_DWORD *a1)
{
  int v2; // r4
  int v3; // r8
  int v4; // r5
  int v5; // r1
  int v6; // r12
  int v7; // lr
  int v8; // r2
  int v9; // r10
  int v10; // r2
  _DWORD *v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r0
  __int64 v15; // r2
  int result; // r0
  int v17; // r9
  int *v18; // r0
  int *v19; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( pthread_mutex_lock((pthread_mutex_t *)dword_6DC9C) )
  {
    v18 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v18, "cgminer.c", "clear_pool_work", 7337);
    goto LABEL_37;
  }
  v2 = dword_6DD60;
  if ( !dword_6DD60 )
  {
    if ( !pthread_mutex_unlock((pthread_mutex_t *)dword_6DC9C) )
      return off_6CB70();
    goto LABEL_38;
  }
  v3 = 0;
  v4 = *(_DWORD *)(dword_6DD60 + 412);
  if ( *(_DWORD **)(dword_6DD60 + 316) == a1 )
    goto LABEL_6;
LABEL_4:
  if ( v4 )
  {
    while ( 1 )
    {
      v2 = v4;
      v4 = *(_DWORD *)(v4 + 412);
      if ( *(_DWORD **)(v2 + 316) != a1 )
        goto LABEL_4;
LABEL_6:
      v5 = dword_6DD60;
      v6 = *(_DWORD *)(v2 + 408);
      v7 = *(_DWORD *)(dword_6DD60 + 404);
      if ( v6 )
        break;
      v17 = *(_DWORD *)(v2 + 412);
      if ( v17 )
      {
        v8 = *(_DWORD *)(v7 + 20);
        v9 = v2 + 404;
        if ( v2 != *(_DWORD *)(v7 + 16) - v8 )
          goto LABEL_33;
LABEL_31:
        *(_DWORD *)(v7 + 16) = v8 + v6;
        v6 = *(_DWORD *)(v2 + 408);
        if ( !v6 )
        {
          v17 = *(_DWORD *)(v2 + 412);
LABEL_33:
          v10 = v17;
          v5 = v17;
          dword_6DD60 = v17;
LABEL_9:
          v11 = *(_DWORD **)(v5 + 404);
          if ( v10 )
          {
            *(_DWORD *)(v10 + v11[5] + 4) = *(_DWORD *)(v2 + 408);
            v11 = *(_DWORD **)(v5 + 404);
          }
          v12 = 3 * ((v11[1] - 1) & *(_DWORD *)(v2 + 432));
          --*(_DWORD *)(*v11 + 4 * v12 + 4);
          v13 = **(_DWORD **)(v5 + 404);
          v14 = *(_DWORD *)(v13 + 4 * v12);
          if ( v14 == v9 )
          {
            v5 = *(_DWORD *)(v2 + 420);
            *(_DWORD *)(v13 + 4 * v12) = v5;
          }
          v15 = *(_QWORD *)(v2 + 416);
          if ( v14 == v9 )
            v5 = dword_6DD60;
          if ( (_DWORD)v15 )
          {
            *(_DWORD *)(v15 + 16) = HIDWORD(v15);
            HIDWORD(v15) = *(_DWORD *)(v2 + 420);
          }
          if ( HIDWORD(v15) )
            *(_DWORD *)(HIDWORD(v15) + 12) = *(_DWORD *)(v2 + 416);
          --*(_DWORD *)(*(_DWORD *)(v5 + 404) + 12);
          goto LABEL_20;
        }
        v8 = *(_DWORD *)(*(_DWORD *)(v5 + 404) + 20);
LABEL_8:
        *(_DWORD *)(v8 + v6 + 8) = *(_DWORD *)(v2 + 412);
        v10 = *(_DWORD *)(v2 + 412);
        goto LABEL_9;
      }
      free(*(void **)v7);
      free(*(void **)(dword_6DD60 + 404));
      dword_6DD60 = 0;
LABEL_20:
      ++v3;
      sub_19F2C((void **)v2);
      free((void *)v2);
      if ( !v4 )
        goto LABEL_21;
    }
    v8 = *(_DWORD *)(v7 + 20);
    v9 = v2 + 404;
    if ( v2 == *(_DWORD *)(v7 + 16) - v8 )
      goto LABEL_31;
    goto LABEL_8;
  }
LABEL_21:
  if ( pthread_mutex_unlock((pthread_mutex_t *)dword_6DC9C) )
  {
LABEL_38:
    v19 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v19, "cgminer.c", "clear_pool_work", 7347);
LABEL_37:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  result = off_6CB70();
  if ( v3 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    snprintf(s, 0x800u, "Cleared %d work items due to stratum disconnect on pool %d", v3, *a1);
    return sub_343C4(7, s, 0);
  }
  return result;
}
