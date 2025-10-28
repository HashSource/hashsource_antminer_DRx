int __fastcall sub_2EF28(int a1, int a2)
{
  int v3; // r5
  int v4; // r6
  _DWORD *v6; // r8
  int *v7; // r4
  struct tm *v8; // r0
  int tm_min; // r1
  int tm_hour; // r2
  int tm_mday; // r3
  int tm_year; // r1
  int tm_wday; // r2
  int tm_yday; // r3
  int tm_gmtoff; // r1
  const char *tm_zone; // r2
  time_t v17; // [sp+0h] [bp-18h] BYREF
  char s[20]; // [sp+4h] [bp-14h] BYREF

  snprintf(s, 0x14u, "/dev/dumbclock%d", a1);
  if ( dword_7CF4C )
    printf("starting Dumbclock with device %s\n", s);
  v3 = sub_27D18(s, 0xDu, 0);
  if ( !v3 )
    return 0;
  v6 = (_DWORD *)sub_4F524(60);
  memset(v6, 0, 0x3Cu);
  v7 = *(int **)(a2 + 60);
  v7[7] = (int)v6;
  v7[3] = a2;
  v7[5] = v3;
  v7[1] = (int)sub_2F06C;
  v7[4] = 0;
  v4 = sub_15FC4(v7);
  if ( !v4 )
  {
    close(v3);
    v7[5] = -1;
    free(v6);
    v7[7] = 0;
    return v4;
  }
  time(&v17);
  v8 = localtime(&v17);
  if ( !v8 )
    return 0;
  tm_min = v8->tm_min;
  tm_hour = v8->tm_hour;
  tm_mday = v8->tm_mday;
  v4 = 1;
  v6[4] = v8->tm_sec;
  v6[5] = tm_min;
  v6[6] = tm_hour;
  v6[7] = tm_mday;
  tm_year = v8->tm_year;
  tm_wday = v8->tm_wday;
  tm_yday = v8->tm_yday;
  v6[8] = v8->tm_mon;
  v6[9] = tm_year;
  v6[10] = tm_wday;
  v6[11] = tm_yday;
  tm_gmtoff = v8->tm_gmtoff;
  tm_zone = v8->tm_zone;
  v6[12] = v8->tm_isdst;
  v6[13] = tm_gmtoff;
  v6[14] = tm_zone;
  *(_BYTE *)(a2 + 71) = -13;
  v7[9] = (int)"Dumb clock";
  v7[187] = *(_DWORD *)"dumbclock";
  return v4;
}
