size_t __fastcall sub_37BE0(int a1, size_t a2)
{
  int v3; // r6
  int v6; // r2
  int v7; // r3
  bool v8; // cc
  struct tm *v9; // r5
  _DWORD *v10; // r8
  int v11; // r3
  bool v12; // zf
  int v13; // r1
  int tm_hour; // lr
  int tm_min; // r12
  int v16; // r2
  int tm_sec; // r0
  int v18; // r9
  int v19; // r3
  int v20; // r1
  _DWORD *v21; // r6
  time_t timer; // [sp+14h] [bp-48h] BYREF
  _BYTE v23[8]; // [sp+18h] [bp-44h] BYREF
  unsigned __int8 v24; // [sp+20h] [bp-3Ch]
  unsigned __int8 v25; // [sp+22h] [bp-3Ah]
  unsigned __int8 v26; // [sp+23h] [bp-39h]
  unsigned __int8 v27; // [sp+24h] [bp-38h]
  unsigned __int8 v28; // [sp+25h] [bp-37h]
  unsigned __int8 v29; // [sp+26h] [bp-36h]
  unsigned __int8 v30; // [sp+27h] [bp-35h]
  unsigned __int8 v31; // [sp+28h] [bp-34h]
  char v32; // [sp+29h] [bp-33h]
  struct tm tp; // [sp+2Ch] [bp-30h] BYREF

  v3 = *(_DWORD *)(a2 + 60);
  v23[0] = 0;
  if ( (unsigned int)read(*(_DWORD *)(v3 + 20), v23, 0x12u) <= 0x11 || v23[0] != 9 )
    return sub_27040(a2, 3);
  v6 = v24;
  v7 = v29 + 10 * v30;
  tp.tm_wday = 0;
  tp.tm_yday = 0;
  tp.tm_gmtoff = 0;
  if ( (v24 & 1) != 0 )
    v6 = 1;
  tp.tm_zone = 0;
  tp.tm_mon = v27 + 10 * v28 - 1;
  tp.tm_mday = v25 + 10 * v26;
  tp.tm_year = v29 + 10 * v30;
  tp.tm_hour = v23[6] + 10 * v23[7];
  tp.tm_min = v23[4] + 10 * v23[5];
  tp.tm_sec = v23[2] + 10 * v23[3];
  if ( (v24 & 1) == 0 )
  {
    if ( (v6 & 2) != 0 )
      v6 = 0;
    else
      v6 = -1;
  }
  v8 = v7 <= 98;
  if ( v7 <= 98 )
    v7 += 100;
  tp.tm_isdst = v6;
  if ( v8 )
    tp.tm_year = v7;
  timer = mktime(&tp);
  if ( timer == -1 )
    return sub_27040(a2, 6);
  if ( tp.tm_isdst <= 0 )
  {
    if ( tp.tm_isdst || tp.tm_gmtoff != 3600 )
      goto LABEL_14;
  }
  else if ( tp.tm_gmtoff != 7200 )
  {
LABEL_14:
    if ( dword_7CF4C )
      puts("local time zone not set to CET/CEST");
    return sub_27040(a2, 6);
  }
  *(_DWORD *)(v3 + 168) = strftime((char *)(v3 + 40), 0x80u, "%Y %m %d %H %M %S", &tp);
  v9 = gmtime(&timer);
  if ( !v9 )
    return sub_27040(a2, 3);
  v10 = (_DWORD *)(v3 + 216);
  sub_4CBA8(v3 + 216);
  v11 = 31250000 * v31;
  v12 = (v32 & 1) == 0;
  v13 = *(_DWORD *)(v3 + 760) + 1;
  tm_hour = v9->tm_hour;
  tm_min = v9->tm_min;
  v16 = v9->tm_year + 1900;
  tm_sec = v9->tm_sec;
  v18 = v9->tm_yday + 1;
  *(_DWORD *)(v3 + 760) = v13;
  if ( !v12 )
    v13 = 500000000;
  *(_DWORD *)(v3 + 192) = v11;
  if ( !v12 )
    *(_DWORD *)(v3 + 192) = v11 + v13;
  *(_DWORD *)(v3 + 172) = v16;
  v19 = dword_7CF4C;
  *(_DWORD *)(v3 + 180) = tm_hour;
  *(_DWORD *)(v3 + 176) = v18;
  *(_DWORD *)(v3 + 184) = tm_min;
  *(_DWORD *)(v3 + 188) = tm_sec;
  if ( v19 )
    printf(
      "pcf%d: time is %04d/%02d/%02d %02d:%02d:%02d UTC\n",
      a1,
      v16,
      v9->tm_mon + 1,
      v9->tm_mday,
      tm_hour,
      tm_min,
      tm_sec);
  if ( !sub_27698((_DWORD *)v3) )
    return sub_27040(a2, 6);
  sub_2DDBC(a2 + 12, (const char *)(v3 + 40));
  if ( (v23[1] & 1) == 0 || (*(_BYTE *)(v3 + 752) & 2) != 0 )
    *(_BYTE *)(v3 + 32) = 0;
  else
    *(_BYTE *)(v3 + 32) = 3;
  v20 = *(_DWORD *)(v3 + 220);
  v21 = (_DWORD *)(v3 + 208);
  *v21 = *v10;
  v21[1] = v20;
  return sub_276A0(a2);
}
