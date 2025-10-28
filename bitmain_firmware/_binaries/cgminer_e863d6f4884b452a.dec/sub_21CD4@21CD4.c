int *__fastcall sub_21CD4(int *result)
{
  pthread_rwlock_t *v1; // r4
  int *v2; // r8
  unsigned int nr_readers; // r5
  __int64 v4; // r6
  char v5; // r3
  __int64 v6; // r2
  bool v7; // zf
  int v8; // r3
  int v9; // r2
  void *v10; // r1
  bool v11; // cc
  int *v12; // r0
  int *v13; // r0
  int v14; // [sp+10h] [bp-81Ch]
  int v15; // [sp+14h] [bp-818h]
  int *v16; // [sp+18h] [bp-814h] BYREF
  int v17; // [sp+1Ch] [bp-810h]
  int v18; // [sp+20h] [bp-80Ch] BYREF
  int v19; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v1 = (pthread_rwlock_t *)result[9];
  v17 = 0;
  v2 = result;
  nr_readers = v1->__nr_readers;
  v16 = 0;
  v4 = 0;
  v14 = *result;
  while ( 2 )
  {
    v5 = v1[11].__size[12];
    if ( v5 )
      goto LABEL_23;
LABEL_3:
    *((_BYTE *)v2 + 63) = v5;
    do
    {
      while ( v1[11].__nr_readers )
      {
LABEL_4:
        if ( (*(int (__fastcall **)(pthread_rwlock_t *))(nr_readers + 72))(v1) )
          goto LABEL_10;
      }
      v15 = sub_20540((int)v2, v14);
      if ( pthread_rwlock_wrlock(v1 + 10) )
      {
        v12 = _errno_location();
        snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v12, "cgminer.c", "fill_queue", 9363);
        goto LABEL_28;
      }
      if ( v1[11].__nr_readers )
      {
        if ( !pthread_rwlock_unlock(v1 + 10) )
        {
          off_6CB70();
          sub_1A328(v15);
          goto LABEL_4;
        }
LABEL_31:
        v13 = _errno_location();
        snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v13, "cgminer.c", "fill_queue", 9370);
LABEL_28:
        sub_343C4(3, s, 1);
        sub_1B070(1, 1);
      }
      v1[11].__nr_readers = v15;
      if ( pthread_rwlock_unlock(v1 + 10) )
        goto LABEL_31;
      off_6CB70();
    }
    while ( !(*(int (__fastcall **)(pthread_rwlock_t *))(nr_readers + 72))(v1) );
LABEL_10:
    v6 = ((__int64 (__fastcall *)(int *))*(_DWORD *)(nr_readers + 68))(v2);
    *((_BYTE *)v2 + 62) = 0;
    v7 = HIDWORD(v6) == -1;
    if ( HIDWORD(v6) == -1 )
      v7 = (_DWORD)v6 == -1;
    if ( !v7 )
    {
      v4 += v6;
      sub_2A69C(&v18);
      result = v16;
      v8 = v19 - v17;
      v9 = v18 - (_DWORD)v16;
      if ( v19 - v17 < 0 )
      {
        --v9;
        v8 += 1000000;
      }
      v10 = (void *)(v4 | HIDWORD(v4));
      if ( v4 )
      {
        v10 = &loc_30D40;
        v11 = v8 <= (int)&loc_30D40;
        if ( v8 <= (int)&loc_30D40 )
          v11 = v9 <= 0;
        if ( !v11 )
          goto LABEL_19;
      }
      if ( dword_6CA7C <= v9 )
      {
LABEL_19:
        sub_213C4(v14, (int)v10, v4, SHIDWORD(v4));
        result = (int *)sub_2A480(&v16);
        v4 = 0;
        if ( *((_BYTE *)v2 + 60) )
          goto LABEL_26;
      }
      else if ( *((_BYTE *)v2 + 60) )
      {
LABEL_26:
        result = (int *)sub_17750((int)v2, v14, (int (__fastcall **)(int))(nr_readers + 92));
        goto LABEL_21;
      }
      if ( v1[1].__lock )
        goto LABEL_26;
LABEL_21:
      if ( !*((_BYTE *)v2 + 63) )
        continue;
      result = (int *)(*(int (__fastcall **)(pthread_rwlock_t *))(nr_readers + 80))(v1);
      v5 = v1[11].__size[12];
      if ( v5 )
      {
LABEL_23:
        v1[1].__lock = 1;
        return result;
      }
      goto LABEL_3;
    }
    break;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(s, 0x800u, "%s %d failure, disabling!", *(const char **)(nr_readers + 8), v1->__readers_wakeup);
    sub_343C4(3, s, 0);
  }
  v1[1].__lock = 1;
  result = (int *)sub_2D53C(v1, 1);
  v1[1].__lock = 1;
  return result;
}
