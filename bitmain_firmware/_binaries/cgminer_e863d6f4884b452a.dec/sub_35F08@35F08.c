bool __fastcall sub_35F08(_DWORD *a1, int a2, int a3)
{
  double v3; // d0
  int v4; // r4
  _BOOL4 v5; // r6
  int v8; // r1
  int v9; // r5
  int v10; // r5
  int v11; // r7
  _DWORD *v12; // r3
  int v13; // r0
  int v14; // r5
  int v16; // r5
  int v17; // lr
  __time_t tv_sec; // r0
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  struct timeval v24; // [sp+18h] [bp-80Ch] BYREF
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v4 = a1[6];
  v5 = v4;
  if ( v4 )
  {
    sub_2A69C(&v24);
    v8 = *(_DWORD *)(v4 + 4);
    ++*(_QWORD *)(v4 + 16);
    v9 = *(_DWORD *)(v8 + 8);
    if ( pthread_mutex_lock((pthread_mutex_t *)v9) )
    {
      v19 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v19, "noncedup.c", "isdupnonce", 70);
      sub_343C4(3, s, 1);
      sub_26B0C(1);
    }
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(v9 + 24)) )
    {
      v20 = _errno_location();
      snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v20, "noncedup.c", "isdupnonce", 70);
      sub_343C4(3, s, 1);
      sub_26B0C(1);
    }
    v10 = *(_DWORD *)(*(_DWORD *)(v4 + 8) + 16);
    v11 = 1;
    while ( 1 )
    {
      v5 = v10 && v11 & 1;
      if ( !v5 )
        break;
      while ( 1 )
      {
        v12 = *(_DWORD **)(v10 + 12);
        v11 = v5;
        if ( *v12 == *(_DWORD *)(a2 + 400) && v12[1] == a3 )
          break;
        v10 = *(_DWORD *)(v10 + 4);
        if ( !v10 )
          v5 = 0;
        if ( !v5 )
          goto LABEL_13;
      }
      if ( !byte_73320 )
      {
        v11 = (unsigned __int8)byte_6FA70;
        if ( !byte_6FA70 && dword_6D35C <= 3 )
          continue;
      }
      v11 = 0;
      snprintf(s, 0x800u, "%s%d: Duplicate nonce %08x", *(_DWORD *)(a1[1] + 8), a1[2], a3);
      sub_343C4(4, s, 0);
    }
LABEL_13:
    if ( v11 )
    {
      v16 = sub_3569C(*(_DWORD *)(v4 + 4), "noncedup.c", "isdupnonce", 81);
      **(_DWORD **)(v16 + 12) = *(_DWORD *)(a2 + 400);
      *(_DWORD *)(*(_DWORD *)(v16 + 12) + 4) = a3;
      v17 = *(_DWORD *)(v16 + 12);
      tv_sec = v24.tv_sec;
      *(_DWORD *)(v17 + 12) = v24.tv_usec;
      *(_DWORD *)(v17 + 8) = tv_sec;
      sub_35774(*(_DWORD *)(v4 + 8), v16, "noncedup.c", "isdupnonce", 85);
    }
    while ( *(_DWORD *)(*(_DWORD *)(v4 + 8) + 16) )
    {
      sub_2A8A4();
      if ( v3 <= (double)*(int *)v4 )
        break;
      v13 = sub_356FC(*(_DWORD *)(v4 + 8), "noncedup.c", "isdupnonce", 89);
      sub_35774(*(_DWORD *)(v4 + 4), v13, "noncedup.c", "isdupnonce", 90);
    }
    v14 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 8);
    if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v14 + 24)) )
    {
      v22 = _errno_location();
      snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v22, "noncedup.c", "isdupnonce", 93);
      sub_343C4(3, s, 1);
      sub_26B0C(1);
    }
    if ( pthread_mutex_unlock((pthread_mutex_t *)v14) )
    {
      v21 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v21, "noncedup.c", "isdupnonce", 93);
      sub_343C4(3, s, 1);
      sub_26B0C(1);
    }
    off_6CB70(0);
    if ( !v11 )
    {
      v5 = 1;
      ++*(_QWORD *)(v4 + 24);
    }
  }
  return v5;
}
