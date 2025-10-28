_BYTE *__fastcall sub_2F06C(_DWORD *a1)
{
  size_t v1; // r8
  int v2; // r4
  int v3; // r5
  _BYTE *result; // r0
  _DWORD *v5; // r5
  int v6; // r1
  int v7; // r12
  int v8; // r0
  int v9; // r1
  _BYTE *v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // lr
  int v14; // r11
  int v15; // r6
  struct tm *v16; // r0
  int tm_min; // r1
  int tm_hour; // r2
  int tm_mday; // r3
  int tm_year; // r1
  int tm_wday; // r2
  int tm_yday; // r3
  int tm_gmtoff; // r1
  const char *tm_zone; // r2
  struct tm *v25; // r0
  struct tm *v26; // r6
  int v27; // r11
  int v28; // r0
  int v29; // r2
  int v30; // lr
  bool v31; // zf
  int tm_sec; // r12
  int v33; // r1
  int v34; // [sp+14h] [bp-50h]
  int v35; // [sp+18h] [bp-4Ch] BYREF
  int v36; // [sp+1Ch] [bp-48h] BYREF
  int v37; // [sp+20h] [bp-44h] BYREF
  time_t v38; // [sp+24h] [bp-40h] BYREF
  time_t timer; // [sp+28h] [bp-3Ch] BYREF
  _BYTE *v40; // [sp+2Ch] [bp-38h] BYREF
  int v41; // [sp+30h] [bp-34h]
  struct tm tp; // [sp+34h] [bp-30h] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, &v40);
  if ( result )
  {
    v7 = (unsigned __int16)result;
    v8 = *(_DWORD *)(v3 + 4);
    v9 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v2 + 168) = v7;
    *(_DWORD *)(v2 + 216) = v8;
    *(_DWORD *)(v2 + 220) = v9;
    v10 = v40;
    v11 = v41;
    *(_BYTE *)v3 = 1;
    v12 = dword_7CF4C;
    *(_DWORD *)(v3 + 4) = v10;
    *(_DWORD *)(v3 + 8) = v11;
    if ( v12 )
      printf("dumbclock: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
    result = (_BYTE *)sscanf((const char *)(v2 + 40), "%02d:%02d:%02d", &v35, &v36, &v37);
    if ( result == (_BYTE *)3 )
    {
      memset(&tp, 0, sizeof(tp));
      v13 = *(_DWORD *)(v3 + 28);
      v14 = *(_DWORD *)(v3 + 36);
      v15 = *(_DWORD *)(v3 + 32);
      tp.tm_sec = v37;
      tp.tm_isdst = -1;
      tp.tm_mday = v13;
      tp.tm_hour = v35;
      tp.tm_min = v36;
      tp.tm_year = v14;
      tp.tm_mon = v15;
      v38 = mktime(&tp);
      time(&timer);
      if ( v38 - timer > 3600 )
      {
        v38 -= 86400;
      }
      else if ( timer - v38 > 3600 )
      {
        v38 += 86400;
      }
      v16 = localtime(&v38);
      if ( !v16 )
        return (_BYTE *)sub_27040(v1, 3);
      tm_min = v16->tm_min;
      tm_hour = v16->tm_hour;
      tm_mday = v16->tm_mday;
      *(_DWORD *)(v3 + 16) = v16->tm_sec;
      *(_DWORD *)(v3 + 20) = tm_min;
      *(_DWORD *)(v3 + 24) = tm_hour;
      *(_DWORD *)(v3 + 28) = tm_mday;
      tm_year = v16->tm_year;
      tm_wday = v16->tm_wday;
      tm_yday = v16->tm_yday;
      *(_DWORD *)(v3 + 32) = v16->tm_mon;
      *(_DWORD *)(v3 + 36) = tm_year;
      *(_DWORD *)(v3 + 40) = tm_wday;
      *(_DWORD *)(v3 + 44) = tm_yday;
      tm_gmtoff = v16->tm_gmtoff;
      tm_zone = v16->tm_zone;
      *(_DWORD *)(v3 + 48) = v16->tm_isdst;
      *(_DWORD *)(v3 + 52) = tm_gmtoff;
      *(_DWORD *)(v3 + 56) = tm_zone;
      v25 = gmtime(&v38);
      v26 = v25;
      if ( v25 )
      {
        v27 = v25->tm_year + 1900;
        v34 = v25->tm_mon + 1;
        v28 = sub_513CC(v27, v34, v25->tm_mday);
        v29 = v26->tm_hour;
        v30 = v26->tm_min;
        v31 = dword_7CF4C == 0;
        tm_sec = v26->tm_sec;
        *(_DWORD *)(v2 + 180) = v29;
        *(_DWORD *)(v2 + 184) = v30;
        *(_DWORD *)(v2 + 188) = tm_sec;
        *(_DWORD *)(v2 + 176) = v28;
        if ( !v31 )
          printf("time is %04d/%02d/%02d %02d:%02d:%02d UTC\n", v27, v34, v26->tm_mday, v29, v30, tm_sec);
        if ( sub_27698((_DWORD *)v2) )
        {
          v33 = *(_DWORD *)(v2 + 220);
          *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
          *(_DWORD *)(v2 + 212) = v33;
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
    else if ( *(_BYTE *)(v3 + 13) )
    {
      --*(_BYTE *)(v3 + 13);
    }
    else
    {
      return (_BYTE *)sub_27040(v1, 2);
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
    result = v40;
    v6 = v41;
    *v5 = v40;
    v5[1] = v6;
  }
  return result;
}
