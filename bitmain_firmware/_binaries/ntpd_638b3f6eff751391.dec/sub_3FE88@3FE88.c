_BYTE *__fastcall sub_3FE88(_DWORD *a1)
{
  size_t v1; // r7
  int v2; // r5
  int v3; // r4
  _BYTE *result; // r0
  _DWORD *v5; // r4
  int v6; // r1
  int v7; // r1
  _BYTE *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r11
  int v13; // r12
  int v14; // lr
  struct tm *v15; // r0
  struct tm *v16; // r11
  int v17; // r9
  int v18; // r0
  int tm_hour; // r2
  int tm_min; // lr
  bool v21; // zf
  int tm_sec; // r12
  int v23; // r1
  int v24; // [sp+14h] [bp-50h]
  int v25; // [sp+1Ch] [bp-48h] BYREF
  int v26; // [sp+20h] [bp-44h] BYREF
  int v27; // [sp+24h] [bp-40h] BYREF
  time_t v28; // [sp+28h] [bp-3Ch] BYREF
  _BYTE *v29; // [sp+2Ch] [bp-38h] BYREF
  int v30; // [sp+30h] [bp-34h]
  struct tm tp; // [sp+34h] [bp-30h] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, &v29);
  if ( result )
  {
    *(_DWORD *)(v2 + 168) = result;
    v7 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v2 + 216) = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v2 + 220) = v7;
    v8 = v29;
    v9 = v30;
    *(_BYTE *)v3 = 1;
    v10 = dword_7CF4C;
    *(_DWORD *)(v3 + 4) = v8;
    *(_DWORD *)(v3 + 8) = v9;
    if ( v10 )
      printf("chronolog: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
    result = (_BYTE *)sscanf((const char *)(v2 + 40), "Y %d/%d/%d", v3 + 16, v3 + 24, v3 + 20);
    if ( result )
    {
      v11 = *(_DWORD *)(v3 + 16);
      if ( v11 <= 68 )
        v11 += 100;
      *(_DWORD *)(v3 + 16) = v11;
    }
    else
    {
      result = (_BYTE *)sscanf((const char *)(v2 + 40), "Z %02d:%02d:%02d", &v25, &v26, &v27);
      if ( result == (_BYTE *)3 )
      {
        memset(&tp, 0, sizeof(tp));
        v12 = *(_DWORD *)(v3 + 16);
        v13 = *(_DWORD *)(v3 + 20);
        v14 = *(_DWORD *)(v3 + 24);
        tp.tm_min = v26;
        tp.tm_year = v12;
        tp.tm_mon = v14 - 1;
        tp.tm_mday = v13;
        tp.tm_hour = v25;
        tp.tm_sec = v27;
        tp.tm_isdst = -1;
        v28 = mktime(&tp);
        v15 = gmtime(&v28);
        v16 = v15;
        if ( v15 )
        {
          v17 = v15->tm_year + 1900;
          v24 = v15->tm_mon + 1;
          v18 = sub_513CC(v17, v24, v15->tm_mday);
          tm_hour = v16->tm_hour;
          tm_min = v16->tm_min;
          v21 = dword_7CF4C == 0;
          tm_sec = v16->tm_sec;
          *(_DWORD *)(v2 + 180) = tm_hour;
          *(_DWORD *)(v2 + 184) = tm_min;
          *(_DWORD *)(v2 + 188) = tm_sec;
          *(_DWORD *)(v2 + 176) = v18;
          if ( !v21 )
            printf("time is %04d/%02d/%02d %02d:%02d:%02d UTC\n", v17, v24, v16->tm_mday, tm_hour, tm_min, tm_sec);
          if ( sub_27698((_DWORD *)v2) )
          {
            v23 = *(_DWORD *)(v2 + 220);
            *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
            *(_DWORD *)(v2 + 212) = v23;
            sub_276A0(v1);
            result = (_BYTE *)sub_2DDBC(v1 + 12, (const char *)(v2 + 40));
            *(_BYTE *)(v3 + 12) = *(_DWORD *)(v2 + 180);
          }
          else
          {
            return (_BYTE *)sub_27040(v1, 6);
          }
        }
        else
        {
          return (_BYTE *)sub_27040(v1, 3);
        }
      }
    }
  }
  else if ( *(_BYTE *)v3 )
  {
    *(_BYTE *)v3 = 0;
  }
  else
  {
    *(_BYTE *)v3 = 1;
    v5 = (_DWORD *)(v3 + 4);
    result = v29;
    v6 = v30;
    *v5 = v29;
    v5[1] = v6;
  }
  return result;
}
