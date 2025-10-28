int __fastcall sub_199D4(int *a1)
{
  int *v2; // r0
  int *v3; // r0
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r12
  int v8; // r3
  int v9; // r2
  int v10; // t1
  int v11; // r1
  int v12; // r4
  int *v13; // r7
  int v14; // r7
  int v15; // r10
  int v16; // r4
  int v17; // r8
  int v18; // r4
  int *v19; // r0
  int *v20; // r0
  int *v21; // r0
  int *v22; // r0
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_80BB8) )
  {
    v2 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v2, "cgminer.c", "switch_pools", 5411);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_rwlock_wrlock(&rwlock) )
  {
    v3 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v3, "cgminer.c", "switch_pools", 5411);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  v4 = (_DWORD *)dword_7AECC;
  v5 = *(_DWORD *)dword_7AECC;
  if ( a1 && a1[1] )
  {
    v6 = dword_802C8;
    if ( dword_802C8 > 0 )
    {
      v7 = dword_80568 - 4;
      v8 = 0;
      do
      {
        v10 = *(_DWORD *)(v7 + 4);
        v7 += 4;
        v9 = v10;
        v11 = *(_DWORD *)(v10 + 4);
        if ( v11 < a1[1] )
          *(_DWORD *)(v9 + 4) = v11 + 1;
        ++v8;
      }
      while ( v8 < v6 );
    }
    a1[1] = 0;
  }
  if ( (unsigned int)dword_7AA24 <= 4 )
  {
    if ( ((1 << dword_7AA24) & 0x19) != 0 )
    {
      if ( dword_802C8 > 0 )
      {
        v12 = 0;
        while ( 1 )
        {
          v13 = (int *)sub_C1EC(v12);
          if ( !sub_C150((int)v13) )
            break;
          if ( dword_802C8 <= ++v12 )
            goto LABEL_35;
        }
        v5 = *v13;
      }
    }
    else if ( ((1 << dword_7AA24) & 6) != 0 )
    {
      if ( !a1 || *((_BYTE *)a1 + 97) )
      {
        v14 = dword_802C8;
        if ( dword_802C8 > 1 )
        {
          v15 = dword_80568;
          v16 = v5;
          v17 = 1;
          while ( 1 )
          {
            if ( ++v16 >= v14 )
              v16 = 0;
            if ( !sub_C150(*(_DWORD *)(v15 + 4 * v16)) )
              break;
            if ( ++v17 == v14 )
              goto LABEL_35;
          }
          v5 = v16;
        }
      }
      else
      {
        v5 = *a1;
      }
    }
  }
LABEL_35:
  v18 = *(_DWORD *)(dword_80568 + 4 * v5);
  dword_7AECC = v18;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v19 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v19, "cgminer.c", "switch_pools", 5473);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_mutex_unlock(&stru_80BB8) )
  {
    v20 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v20, "cgminer.c", "switch_pools", 5473);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  if ( byte_807CD )
    sub_149B0(v18, (_BYTE *)(v18 + 98));
  if ( v4 != (_DWORD *)v18 && dword_7AA24 != 3 && dword_7AA24 != 4 )
  {
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
    {
      snprintf(s, 0x800u, "Switching to pool %d %s", *(_DWORD *)v18, *(const char **)(v18 + 172));
      sub_3F178(4, s, 0);
    }
    sub_18ED4(v4);
  }
  if ( pthread_mutex_lock(&stru_7C364) )
  {
    v21 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v21, "cgminer.c", "switch_pools", 5488);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  pthread_cond_broadcast(&stru_7C380);
  if ( pthread_mutex_unlock(&stru_7C364) )
  {
    v22 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v22, "cgminer.c", "switch_pools", 5490);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  return off_79D40(0);
}
