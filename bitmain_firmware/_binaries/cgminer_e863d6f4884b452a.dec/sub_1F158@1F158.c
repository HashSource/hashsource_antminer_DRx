int __fastcall sub_1F158(int a1)
{
  int v2; // r6
  _DWORD *v3; // r7
  int v4; // r12
  int v5; // r10
  int v6; // r11
  int v7; // r0
  int v8; // lr
  int *v9; // r2
  int v10; // r0
  int v11; // r1
  int v12; // t1
  int v13; // r3
  int v14; // r0
  int v15; // r5
  int v17; // r3
  int v18; // r0
  int *v19; // r1
  int v20; // r3
  int v21; // r4
  int *v22; // r0
  int *v23; // r0
  int v24; // r3
  int v25; // r4
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( pthread_mutex_lock(&stru_73460) )
  {
    v20 = *_errno_location();
    v21 = 5411;
LABEL_51:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v20, "cgminer.c", "switch_pools", v21);
    goto LABEL_52;
  }
  v2 = pthread_rwlock_wrlock(&rwlock);
  if ( v2 )
  {
    v22 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v22, "cgminer.c", "switch_pools", 5411);
    goto LABEL_52;
  }
  v3 = (_DWORD *)dword_6DD48;
  v4 = dword_6DB74;
  v5 = *(_DWORD *)dword_6DD48;
  if ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    if ( v6 )
    {
      v7 = dword_72EF0;
      if ( dword_72EF0 > 0 )
      {
        v8 = dword_732EC;
        v9 = (int *)dword_732EC;
        v10 = dword_732EC + 4 * dword_72EF0;
        while ( 1 )
        {
          v12 = *v9++;
          v11 = v12;
          v13 = *(_DWORD *)(v12 + 4);
          if ( v13 < v6 )
            *(_DWORD *)(v11 + 4) = v13 + 1;
          if ( (int *)v10 == v9 )
          {
            *(_DWORD *)(a1 + 4) = 0;
            switch ( v4 )
            {
              case 0:
              case 3:
              case 4:
                goto LABEL_15;
              case 1:
              case 2:
                goto LABEL_37;
              default:
                goto LABEL_49;
            }
          }
          v6 = *(_DWORD *)(a1 + 4);
        }
      }
      *(_DWORD *)(a1 + 4) = 0;
      switch ( v4 )
      {
        case 0:
        case 3:
        case 4:
          goto LABEL_14;
        case 1:
        case 2:
          goto LABEL_36;
        default:
          goto LABEL_30;
      }
    }
    switch ( dword_6DB74 )
    {
      case 0:
      case 3:
      case 4:
        goto LABEL_13;
      case 1:
      case 2:
LABEL_36:
        v8 = dword_732EC;
LABEL_37:
        if ( *(_BYTE *)(a1 + 97) )
          goto LABEL_40;
        v15 = *(_DWORD *)(v8 + 4 * *(_DWORD *)a1);
        break;
      default:
        goto LABEL_30;
    }
  }
  else
  {
    switch ( dword_6DB74 )
    {
      case 0:
      case 3:
      case 4:
LABEL_13:
        v7 = dword_72EF0;
LABEL_14:
        if ( v7 <= 0 )
          goto LABEL_30;
        do
        {
LABEL_15:
          v14 = sub_174F4(v2);
          if ( !*(_BYTE *)(v14 + 97) && *(_DWORD *)(v14 + 100) == 1 )
          {
            v15 = *(_DWORD *)(dword_732EC + 4 * *(_DWORD *)v14);
            goto LABEL_18;
          }
          ++v2;
        }
        while ( dword_72EF0 > v2 );
        v15 = *(_DWORD *)(dword_732EC + 4 * v5);
        break;
      case 1:
      case 2:
        v8 = dword_732EC;
LABEL_40:
        if ( dword_72EF0 <= 1 )
        {
LABEL_49:
          v15 = *(_DWORD *)(v8 + 4 * v5);
        }
        else
        {
          v17 = v5;
          v18 = 1;
          while ( 1 )
          {
            if ( ++v17 >= dword_72EF0 )
            {
              v19 = (int *)v8;
              v17 = 0;
            }
            else
            {
              v19 = (int *)(v8 + 4 * v17);
            }
            v15 = *v19;
            if ( !*(_BYTE *)(*v19 + 97) && *(_DWORD *)(v15 + 100) == 1 )
              break;
            if ( ++v18 == dword_72EF0 )
              goto LABEL_49;
          }
        }
        break;
      default:
LABEL_30:
        v15 = *(_DWORD *)(dword_732EC + 4 * v5);
        break;
    }
  }
LABEL_18:
  dword_6DD48 = v15;
  if ( pthread_rwlock_unlock(&rwlock) )
  {
    v23 = _errno_location();
    snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v23, "cgminer.c", "switch_pools", 5473);
    goto LABEL_52;
  }
  if ( pthread_mutex_unlock(&stru_73460) )
  {
    v24 = *_errno_location();
    v25 = 5473;
LABEL_56:
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v24, "cgminer.c", "switch_pools", v25);
LABEL_52:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  off_6CB70();
  if ( byte_73680 )
    sub_1C040(v15, (_BYTE *)(v15 + 98));
  if ( v3 != (_DWORD *)v15 && (unsigned int)(dword_6DB74 - 3) > 1 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf(s, 0x800u, "Switching to pool %d %s", *(_DWORD *)v15, *(const char **)(v15 + 172));
      sub_343C4(4, s, 0);
    }
    sub_1EEFC(v3);
  }
  if ( pthread_mutex_lock(&mutex) )
  {
    v20 = *_errno_location();
    v21 = 5488;
    goto LABEL_51;
  }
  pthread_cond_broadcast(&cond);
  if ( pthread_mutex_unlock(&mutex) )
  {
    v24 = *_errno_location();
    v25 = 5490;
    goto LABEL_56;
  }
  return off_6CB70();
}
