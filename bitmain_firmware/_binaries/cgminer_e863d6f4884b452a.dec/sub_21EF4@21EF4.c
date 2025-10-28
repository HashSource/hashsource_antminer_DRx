int *__fastcall sub_21EF4(int *result)
{
  int v1; // r7
  int v2; // r8
  int *v3; // r6
  __int64 v4; // r4
  char v5; // r9
  __int64 v6; // r2
  bool v7; // zf
  __int64 v8; // r0
  int v9; // r3
  int v10; // r2
  bool v11; // cc
  int *v12; // r0
  int *v13; // r0
  int v14; // [sp+10h] [bp-81Ch]
  int *v15; // [sp+18h] [bp-814h] BYREF
  int v16; // [sp+1Ch] [bp-810h]
  int v17; // [sp+20h] [bp-80Ch] BYREF
  int v18; // [sp+24h] [bp-808h]
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  v1 = result[9];
  v15 = 0;
  v16 = 0;
  v2 = *(_DWORD *)(v1 + 4);
  v3 = result;
  v4 = 0;
  v14 = *result;
LABEL_2:
  v5 = *(_BYTE *)(v1 + 364);
  if ( v5 )
  {
LABEL_18:
    *(_DWORD *)(v1 + 32) = 1;
    return result;
  }
  while ( 1 )
  {
    *((_BYTE *)v3 + 63) = v5;
    v8 = ((__int64 (__fastcall *)(int *))*(_DWORD *)(v2 + 68))(v3);
    v6 = v8;
    v7 = ++HIDWORD(v8) == 0;
    *((_BYTE *)v3 + 62) = v5;
    if ( !HIDWORD(v8) )
      v7 = (_DWORD)v8 == -1;
    if ( v7 )
      break;
    v4 += v6;
    sub_2A69C(&v17);
    result = v15;
    v9 = v18 - v16;
    v10 = v17 - (_DWORD)v15;
    if ( v18 - v16 < 0 )
    {
      --v10;
      v9 += 1000000;
    }
    if ( v4 )
    {
      v11 = v10 <= 0;
      if ( v10 <= 0 )
        v11 = v9 <= (int)&loc_30D40;
      if ( !v11 )
        goto LABEL_12;
    }
    if ( dword_6CA7C <= v10 )
    {
LABEL_12:
      sub_213C4(v14, v4 | HIDWORD(v4), v4, SHIDWORD(v4));
      result = (int *)sub_2A480(&v15);
      v4 = 0;
      if ( !*((_BYTE *)v3 + 60) )
        goto LABEL_13;
    }
    else if ( !*((_BYTE *)v3 + 60) )
    {
LABEL_13:
      if ( !*(_DWORD *)(v1 + 32) )
        goto LABEL_14;
    }
    result = (int *)sub_17750((int)v3, v14, (int (__fastcall **)(int))(v2 + 92));
LABEL_14:
    if ( !*((_BYTE *)v3 + 63) )
      goto LABEL_2;
    if ( pthread_mutex_lock(&stru_73B88) )
    {
      v12 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v12,
        "cgminer.c",
        "hash_driver_work",
        9723);
      goto LABEL_29;
    }
    (*(void (__fastcall **)(int))(v2 + 80))(v1);
    if ( pthread_mutex_unlock(&stru_73B88) )
    {
      v13 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v13,
        "cgminer.c",
        "hash_driver_work",
        9725);
LABEL_29:
      sub_343C4(3, s, 1);
      sub_1B070(1, 1);
    }
    result = (int *)off_6CB70();
    v5 = *(_BYTE *)(v1 + 364);
    if ( v5 )
      goto LABEL_18;
  }
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(s, 0x800u, "%s %d failure, disabling!", *(const char **)(v2 + 8), *(_DWORD *)(v1 + 8));
    sub_343C4(3, s, 0);
  }
  *(_DWORD *)(v1 + 32) = 1;
  result = (int *)sub_2D53C(v1, 1);
  *(_DWORD *)(v1 + 32) = 1;
  return result;
}
