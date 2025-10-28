int *__fastcall sub_20618(int *result)
{
  int *v1; // r6
  pthread_rwlock_t *v2; // r4
  int nr_readers; // r5
  int v4; // r11
  __int64 v5; // d8
  int v6; // r9
  int v7; // r0
  __int64 v8; // r0
  int v9; // r1
  int v10; // r0
  char s[2040]; // [sp+8h] [bp-814h] BYREF
  int v12; // [sp+808h] [bp-14h] BYREF
  int v13; // [sp+80Ch] [bp-10h]
  int v14; // [sp+810h] [bp-Ch] BYREF
  int v15; // [sp+814h] [bp-8h]

  v1 = result;
  v14 = 0;
  v15 = 0;
  v2 = (pthread_rwlock_t *)result[9];
  nr_readers = v2->__nr_readers;
  v4 = *result;
  v5 = 0;
  while ( !v2[11].__size[12] )
  {
    *((_BYTE *)v1 + 63) = 0;
    do
    {
      if ( !v2[11].__nr_readers )
      {
        v6 = sub_1874C((int)v1, v4);
        sub_16198(v2 + 10, "cgminer.c", "fill_queue", 9363);
        if ( v2[11].__nr_readers )
        {
          v10 = sub_13B94(v2 + 10, "cgminer.c", "fill_queue", 9370);
          off_79D40(v10);
          sub_12260(v6);
        }
        else
        {
          v2[11].__nr_readers = v6;
          v7 = sub_13B94(v2 + 10, "cgminer.c", "fill_queue", 9370);
          off_79D40(v7);
        }
      }
    }
    while ( !(*(int (__fastcall **)(pthread_rwlock_t *))(nr_readers + 72))(v2) );
    LODWORD(v8) = (*(int (__fastcall **)(int *))(nr_readers + 68))(v1);
    *((_BYTE *)v1 + 62) = 0;
    if ( v8 == -1 )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(s, 0x800u, "%s %d failure, disabling!", *(const char **)(nr_readers + 8), v2->__readers_wakeup);
        sub_3F178(3, s, 0);
      }
      v2[1].__lock = 1;
      result = (int *)sub_34354(v2, 1);
      break;
    }
    v5 += v8;
    sub_30050(&v12);
    v9 = v12 - v14;
    result = (int *)(v13 - v15);
    if ( v13 - v15 < 0 )
    {
      --v9;
      result += 250000;
    }
    if ( v5 && (v9 > 0 || (int)result > 200000) || dword_79C48 <= v9 )
    {
      sub_1D880(v4, v9, v5, SHIDWORD(v5));
      result = (int *)sub_2FD00(&v14, &v12);
      v5 = 0;
    }
    if ( *((_BYTE *)v1 + 60) || v2[1].__lock )
      result = (int *)sub_E878((int)v1, v4, nr_readers);
    if ( *((_BYTE *)v1 + 63) )
      result = (int *)(*(int (__fastcall **)(pthread_rwlock_t *))(nr_readers + 80))(v2);
  }
  v2[1].__lock = 1;
  return result;
}
