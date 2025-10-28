int __fastcall sub_33EB8(int result, int a2, int a3, int a4)
{
  int v4; // r10
  int v6; // r7
  int v7; // r6
  int v8; // r2
  int v9; // r2
  int v10; // r3
  char *v11; // r0
  char *v12; // r0
  char *v13; // r0
  char *v14; // r0
  char *v15; // r0
  int v16; // r3
  char *v17; // r0
  int v18; // r3
  char *v19; // r0
  const char *v20; // lr
  int v21; // r3
  char *v22; // r12
  char *v23; // r0
  char *v24; // r0
  char *v25; // r0
  char *v26; // r0
  double v27; // r4
  __int16 v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // r2
  int v32; // r3
  const char *v33; // lr
  __int16 v34; // r5
  char s[80]; // [sp+18h] [bp-50h] BYREF

  v4 = result;
  if ( !a4 )
    return sub_4FE78(3, "NeoClock4X(%d): control: unit invalid/inactive", result);
  v6 = *(_DWORD *)(a4 + 60);
  if ( !v6 )
    return sub_4FE78(3, "NeoClock4X(%d): control: unit invalid/inactive", result);
  v7 = *(_DWORD *)(v6 + 28);
  if ( !v7 )
    return sub_4FE78(3, "NeoClock4X(%d): control: unit invalid/inactive", result);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 1) != 0 )
    {
      v27 = *(double *)(a2 + 40);
      v28 = dword_7BE6C;
      *(double *)(v6 + 728) = v27;
      if ( (v28 & 0x100) == 0 )
        goto LABEL_9;
      result = sub_4FE78(5, "NeoClock4X(%d): using fudgetime1 with %0.5fs from ntp.conf.", result, v27);
      v8 = dword_7BE6C & 0x100;
      if ( (*(_BYTE *)(v6 + 752) & 1) != 0 )
        goto LABEL_7;
    }
    else
    {
      v8 = dword_7BE6C & 0x100;
      if ( (*(_BYTE *)(v6 + 752) & 1) != 0 )
      {
LABEL_7:
        if ( v8 )
          result = sub_4FE78(
                     5,
                     "NeoClock4X(%d): quartz clock is used to synchronize time if radio clock has no reception.",
                     v4);
        goto LABEL_9;
      }
    }
    if ( v8 )
      result = sub_4FE78(5, "NeoClock4X(%d): time is only adjusted with radio signal reception.", v4);
  }
LABEL_9:
  if ( !a3 )
    return result;
  *(_BYTE *)a3 = 44;
  v9 = *(_DWORD *)(v7 + 132);
  v10 = *(_DWORD *)(v7 + 128);
  *(_DWORD *)(a3 + 68) = 0;
  snprintf(
    s,
    0x4Fu,
    "%04d-%02d-%02d %02d:%02d:%02d.%03d",
    v10,
    v9,
    *(_DWORD *)(v7 + 136),
    *(_DWORD *)(v7 + 140),
    *(_DWORD *)(v7 + 144),
    *(_DWORD *)(v7 + 148),
    *(_DWORD *)(v7 + 152));
  v11 = (char *)sub_1CC3C((int *)(a3 + 68), 79, 33);
  snprintf(v11, 0x4Fu, "calc_utc=\"%s\"", s);
  v12 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  snprintf(v12, 0x27u, "radiosignal=\"%s\"", (const char *)(v7 + 112));
  v13 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  snprintf(v13, 0x27u, "antenna1=\"%d\"", *(_DWORD *)(v7 + 120));
  v14 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  snprintf(v14, 0x27u, "antenna2=\"%d\"", *(_DWORD *)(v7 + 124));
  v15 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  v16 = *(unsigned __int8 *)(v7 + 116);
  if ( v16 == 65 )
  {
    strcpy(v15, "timesource=\"radio\"");
  }
  else if ( v16 == 67 )
  {
    strcpy(v15, "timesource=\"quartz\"");
  }
  else
  {
    strcpy(v15, "timesource=\"unknown\"");
  }
  v17 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  v18 = *(unsigned __int8 *)(v7 + 118);
  if ( v18 == 73 )
  {
    strcpy(v17, "quartzstatus=\"synchronized\"");
  }
  else if ( v18 == 88 )
  {
    strcpy(v17, "quartzstatus=\"not synchronized\"");
  }
  else
  {
    strcpy(v17, "quartzstatus=\"unknown\"");
  }
  v19 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  v21 = *(unsigned __int8 *)(v7 + 117);
  if ( v21 == 83 )
    v20 = "dststatus=\"summer\"";
  v22 = v19;
  if ( v21 == 83 )
    goto LABEL_28;
  if ( v21 == 87 )
  {
    v20 = "dststatus=\"winter\"";
LABEL_28:
    v29 = *(_DWORD *)v20;
    v30 = *((_DWORD *)v20 + 1);
    v31 = *((_DWORD *)v20 + 2);
    v32 = *((_DWORD *)v20 + 3);
    v33 = v20 + 16;
    v34 = *(_WORD *)v33;
    LOBYTE(v33) = v33[2];
    *(_DWORD *)v22 = v29;
    *((_DWORD *)v22 + 1) = v30;
    *((_DWORD *)v22 + 2) = v31;
    *((_DWORD *)v22 + 3) = v32;
    *((_WORD *)v22 + 8) = v34;
    v22[18] = (char)v33;
    goto LABEL_21;
  }
  strcpy(v19, "dststatus=\"unknown\"");
LABEL_21:
  v23 = (char *)sub_1CC3C((int *)(a3 + 68), 80, 33);
  snprintf(v23, 0x4Fu, "firmware=\"%s\"", (const char *)(v7 + 24));
  v24 = (char *)sub_1CC3C((int *)(a3 + 68), 40, 33);
  snprintf(v24, 0x27u, "firmwaretag=\"%c\"", *(unsigned __int8 *)(v7 + 104));
  v25 = (char *)sub_1CC3C((int *)(a3 + 68), 80, 33);
  snprintf(v25, 0x4Fu, "driver version=\"%s\"", "1.16 (2009-12-04)");
  v26 = (char *)sub_1CC3C((int *)(a3 + 68), 80, 33);
  return snprintf(v26, 0x4Fu, "serialnumber=\"%s\"", (const char *)(v7 + 105));
}
