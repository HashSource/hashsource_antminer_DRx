_BYTE *__fastcall sub_394B4(_DWORD *a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r7
  _BYTE *result; // r0
  _DWORD *v5; // r7
  int v6; // r1
  int v7; // r1
  _BYTE *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r2
  int v12; // r2
  bool v13; // zf
  int v14; // r1
  int v15; // r3
  char v16; // r3
  int v17; // r3
  int v18; // r3
  _BYTE v19[4]; // [sp+24h] [bp-14h] BYREF
  char v20; // [sp+28h] [bp-10h] BYREF
  unsigned __int8 v21; // [sp+29h] [bp-Fh]
  int v22; // [sp+2Ch] [bp-Ch] BYREF
  _BYTE *v23; // [sp+30h] [bp-8h] BYREF
  int v24; // [sp+34h] [bp-4h]

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, &v23);
  if ( !result )
  {
    if ( *(_BYTE *)v3 )
    {
      *(_BYTE *)v3 = 0;
    }
    else
    {
      *(_BYTE *)v3 = 1;
      v5 = (_DWORD *)(v3 + 4);
      result = v23;
      v6 = v24;
      *v5 = v23;
      v5[1] = v6;
    }
    return result;
  }
  *(_DWORD *)(v2 + 168) = result;
  v7 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v2 + 216) = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v2 + 220) = v7;
  v8 = v23;
  v9 = v24;
  *(_BYTE *)v3 = 1;
  v10 = dword_7CF4C;
  *(_DWORD *)(v3 + 4) = v8;
  *(_DWORD *)(v3 + 8) = v9;
  if ( v10 )
    printf("ulink: timecode %d %s\n", *(_DWORD *)(v2 + 168), (const char *)(v2 + 40));
  v11 = *(_DWORD *)(v2 + 168);
  memset(v19, 32, sizeof(v19));
  if ( v11 == 24 )
    goto LABEL_12;
  if ( v11 != 32 )
    return (_BYTE *)sub_27040(v1, 2);
  if ( sscanf((const char *)(v2 + 40), "%c%*31c", &v19[3]) == 1 )
  {
    v15 = v19[3];
    if ( v19[3] == 82 )
    {
      if ( sscanf(
             (const char *)(v2 + 40),
             "%*2c %*2c%2c%*c%4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
             &v20,
             v2 + 172,
             v2 + 176,
             v2 + 180,
             v19,
             v2 + 184,
             v2 + 188,
             &v19[1]) == 8 )
      {
        if ( v20 == 48 )
          v18 = 0;
        else
          v18 = 99;
        v22 = v18;
        if ( v19[1] == 73 )
        {
          v15 = v19[3];
          v19[1] = 43;
        }
        else
        {
          v15 = v19[3];
          if ( v19[1] == 68 )
            v19[1] = 45;
        }
      }
      else
      {
        v15 = v19[3];
      }
    }
    if ( v15 == 83
      && sscanf(
           (const char *)(v2 + 40),
           "%*4c %2c %4d%*c%3d%*4c %2d%c%2d:%2d%c%*2c",
           &v20,
           v2 + 172,
           v2 + 176,
           v2 + 180,
           v19,
           v2 + 184,
           v2 + 188,
           &v19[1]) == 8 )
    {
      if ( v20 == 76 )
      {
        v14 = v19[0];
        v22 = 0;
      }
      else
      {
        if ( v20 == 48 )
          v17 = v21;
        else
          v17 = 99;
        v14 = v19[0];
        if ( v20 == 48 )
          v17 &= 0xFu;
        v22 = v17;
      }
    }
    else
    {
      v14 = v19[0];
    }
  }
  else
  {
LABEL_12:
    if ( sscanf(
           (const char *)(v2 + 40),
           "%c%1d%c%4d%3d%*c%2d:%2d:%2d.%2ld%c",
           v19,
           &v22,
           &v19[2],
           v2 + 172,
           v2 + 176,
           v2 + 180,
           v2 + 184,
           v2 + 188,
           v2 + 192,
           &v19[1]) != 10 )
      return (_BYTE *)sub_27040(v1, 2);
    v12 = v19[1];
    v13 = v19[1] == 73;
    *(_DWORD *)(v2 + 192) *= 10000000;
    if ( v13 )
    {
      v19[1] = 43;
    }
    else if ( v12 == 68 )
    {
      v19[1] = 45;
    }
    v14 = v19[0];
    if ( v19[0] != 63 )
    {
      v14 = 58;
      v19[0] = 58;
    }
  }
  if ( *(_DWORD *)(v2 + 168) == 32 )
  {
    switch ( v22 )
    {
      case 0:
LABEL_24:
        *(_QWORD *)(v2 + 232) = 0x3F60624DD2F1A9FCLL;
        break;
      case 1:
LABEL_29:
        *(_QWORD *)(v2 + 232) = 0x3F947AE147AE147BLL;
        break;
      case 2:
LABEL_32:
        *(_QWORD *)(v2 + 232) = 0x3FA47AE147AE147BLL;
        break;
      case 3:
LABEL_30:
        *(_QWORD *)(v2 + 232) = 0x3FB47AE147AE147BLL;
        break;
      default:
LABEL_31:
        *(_QWORD *)(v2 + 232) = 0x4030000000000000LL;
        break;
    }
  }
  else
  {
    switch ( v22 )
    {
      case 1:
        *(_QWORD *)(v2 + 232) = 0x3FC47AE147AE147BLL;
        break;
      case 2:
        goto LABEL_30;
      case 3:
        goto LABEL_32;
      case 4:
        goto LABEL_29;
      case 5:
        goto LABEL_24;
      default:
        goto LABEL_31;
    }
  }
  if ( v14 == 58 )
  {
    if ( v19[1] == 43 )
    {
      *(_BYTE *)(v2 + 32) = 1;
    }
    else
    {
      if ( v19[1] == 45 )
        v16 = 2;
      else
        v16 = 0;
      *(_BYTE *)(v2 + 32) = v16;
    }
  }
  else
  {
    *(_BYTE *)(v2 + 32) = 3;
  }
  result = (_BYTE *)sub_27698((_DWORD *)v2);
  if ( !result )
    return (_BYTE *)sub_27040(v1, 6);
  return result;
}
