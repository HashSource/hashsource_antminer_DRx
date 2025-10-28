int __fastcall sub_10004(_DWORD *a1)
{
  const char *v2; // r5
  const char *v3; // r7
  char *v4; // r0
  char *v5; // r4
  size_t v6; // r6
  int v7; // r0
  int v8; // r10
  int v9; // r4
  int v10; // r0
  int v11; // r12
  int v12; // r0
  const char *v13; // r0
  bool v15; // zf
  int v16; // r4
  int v17; // r0
  bool v18; // zf
  int v19; // r6
  const char *v20; // r0
  int v21; // r0
  bool v22; // zf
  const char *v23; // r0
  const char *v24; // r0
  unsigned int v25; // r0
  int v26; // r3
  int v27; // r0
  bool v28; // zf
  char *endptr; // [sp+14h] [bp-2010h] BYREF
  char s[4072]; // [sp+18h] [bp-200Ch] BYREF
  char v31[1028]; // [sp+101Ch] [bp-1008h] BYREF
  char v32[256]; // [sp+1420h] [bp-C04h] BYREF
  size_t v33; // [sp+1520h] [bp-B04h]

  if ( a1[6] == -2 )
    return 0;
  v2 = (const char *)a1[5];
  if ( a1[1] != 3 )
    off_21DCC("./../lib/isc/log.c", 1156, 0, "channel->type == 3");
  v3 = (const char *)a1[5];
  v4 = strrchr(v3, 47);
  if ( v4 )
  {
    *v4 = 0;
    v3 = v4 + 1;
    v5 = (char *)a1[5];
  }
  else
  {
    v5 = (char *)&unk_17A78;
  }
  v6 = strlen(v3);
  sub_147BC(v31);
  v7 = sub_14814((int)v31, v5);
  if ( v3 != (const char *)a1[5] )
    *((_BYTE *)v3 - 1) = 47;
  v8 = v7;
  if ( !v7 )
  {
    v9 = -1;
    while ( !sub_14920(v31) )
    {
      if ( v6 < v33 && !strncmp(v32, v3, v6) && v32[v6] == 46 )
      {
        v10 = strtol(&v32[v6 + 1], &endptr, 10);
        if ( !*endptr && v9 < v10 )
          v9 = v10;
      }
    }
    v16 = v9 + 1;
    sub_149D0(v31, v3, v6);
    v11 = a1[6];
    if ( v11 != -1 && v11 <= v16 )
    {
      while ( --v16 >= v11 )
      {
        v25 = snprintf(s, 0x1001u, "%s.%d", v2, v16);
        v26 = 19;
        if ( v25 > 0x1000 )
          goto LABEL_51;
        v27 = sub_1568C(s);
        v28 = v27 == 38;
        if ( v27 != 38 )
          v28 = v27 == 0;
        v26 = v27;
        if ( !v28 )
        {
LABEL_51:
          v24 = (const char *)sub_137A4(v26);
          syslog(3, "unable to remove log file '%s.%d': %s", v2, v16, v24);
        }
        v11 = a1[6];
      }
    }
    if ( v16 <= 0 )
    {
LABEL_22:
      if ( v11 )
      {
        if ( (unsigned int)snprintf(v31, 0x1001u, "%s.0", v2) > 0x1000 )
        {
          v12 = 19;
LABEL_26:
          v13 = (const char *)sub_137A4(v12);
          syslog(3, "unable to rename log file '%s' to '%s.0': %s", v2, v2, v13);
          return v8;
        }
        v12 = sub_156E4((int)v2, v31);
        v15 = v12 == 38;
        if ( v12 != 38 )
          v15 = v12 == 0;
        if ( !v15 )
          goto LABEL_26;
      }
      else
      {
        v21 = sub_1568C(v2);
        v22 = v21 == 38;
        if ( v21 != 38 )
          v22 = v21 == 0;
        if ( !v22 )
        {
          v23 = (const char *)sub_137A4(v21);
          syslog(3, "unable to remove log file '%s': %s", v2, v23);
          return v8;
        }
      }
      return 0;
    }
    while ( 1 )
    {
      v19 = v16 - 1;
      if ( (unsigned int)snprintf(s, 0x1001u, "%s.%d", v2, v16 - 1) > 0x1000
        || (unsigned int)snprintf(v31, 0x1001u, "%s.%d", v2, v16) > 0x1000 )
      {
        v17 = 19;
      }
      else
      {
        v17 = sub_156E4((int)s, v31);
        v18 = v17 == 38;
        if ( v17 != 38 )
          v18 = v17 == 0;
        if ( v18 )
          goto LABEL_42;
      }
      v20 = (const char *)sub_137A4(v17);
      syslog(3, "unable to rename log file '%s.%d' to '%s.%d': %s", v2, v16 - 1, v2, v16, v20);
LABEL_42:
      --v16;
      if ( !v19 )
      {
        v11 = a1[6];
        goto LABEL_22;
      }
    }
  }
  return v8;
}
