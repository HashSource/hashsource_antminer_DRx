_BYTE *__fastcall sub_3C930(_DWORD *a1)
{
  int v1; // r5
  int v2; // r4
  int *v3; // r6
  _BYTE *result; // r0
  _BYTE *v5; // r3
  int v6; // r3
  const char *v7; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r1
  const char *v12; // r7
  const char *v13; // r0
  int v14; // r2
  int v15; // r2
  int v16; // r1
  const char *v17; // r0
  int v18; // r0
  int v19; // r1
  _BYTE v20[5]; // [sp+27h] [bp-11h] BYREF
  int v21; // [sp+2Ch] [bp-Ch] BYREF
  int v22; // [sp+30h] [bp-8h] BYREF
  int v23; // [sp+34h] [bp-4h] BYREF
  _BYTE *v24; // [sp+38h] [bp+0h] BYREF
  int v25; // [sp+3Ch] [bp+4h]

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(int **)(v2 + 28);
  result = sub_27AAC(a1, (_BYTE *)(v2 + 40), 128, &v24);
  v5 = result;
  if ( result )
  {
    v8 = *v3;
    v9 = v3[1];
    *(_DWORD *)(v2 + 168) = v5;
    v10 = dword_7CF4C;
    *(_DWORD *)(v2 + 216) = v8;
    *(_DWORD *)(v2 + 220) = v9;
    result = v24;
    v11 = v25;
    v3[2] = 1;
    *v3 = (int)result;
    v3[1] = v11;
    if ( v10 > 1 )
    {
      v12 = (const char *)sub_503E0(&v24);
      v13 = (const char *)sub_503E0(v2 + 216);
      result = (_BYTE *)printf("wwvb: code @ %s\n       using %s minus one char\n", v12, v13);
    }
    if ( !*(_DWORD *)(v2 + 216) && !*(_DWORD *)(v2 + 220) )
      return result;
    v14 = *(_DWORD *)(v2 + 168);
    memset(v20, 32, 4);
    v21 = 0;
    if ( v14 == 24 )
    {
      if ( sscanf(
             (const char *)(v2 + 40),
             "%c%c %2d %3d %2d:%2d:%2d.%3ld %c",
             v20,
             &v20[1],
             v2 + 172,
             v2 + 176,
             v2 + 180,
             v2 + 184,
             v2 + 188,
             v2 + 192,
             &v20[2]) != 9 )
        goto LABEL_13;
      *(_DWORD *)(v2 + 192) *= 1000000;
    }
    else
    {
      if ( v14 != 29 )
      {
        if ( v14 == 22
          && sscanf(
               (const char *)(v2 + 40),
               "%c %3d %2d:%2d:%2d%c%cTZ=%2d",
               v20,
               v2 + 176,
               v2 + 180,
               v2 + 184,
               v2 + 188,
               &v20[4],
               &v20[3],
               &v21) == 8 )
        {
          *(_DWORD *)(v2 + 192) = 0;
          goto LABEL_21;
        }
LABEL_13:
        if ( !*((_BYTE *)v3 + 13) )
          return (_BYTE *)sub_27040(v1, 2);
        --*((_BYTE *)v3 + 13);
        return (_BYTE *)sub_2DDBC(v1 + 12, (const char *)(v2 + 40));
      }
      if ( sscanf(
             (const char *)(v2 + 40),
             "0003%c %4d%2d%2d %2d%2d%2d+0000%c%c",
             v20,
             v2 + 172,
             &v23,
             &v22,
             v2 + 180,
             v2 + 184,
             v2 + 188,
             &v20[3],
             &v20[2]) != 8 )
        goto LABEL_13;
      v18 = sub_513CC(*(_DWORD *)(v2 + 172), v23, v22);
      *(_DWORD *)(v2 + 192) = 0;
      *(_DWORD *)(v2 + 176) = v18;
    }
LABEL_21:
    switch ( v20[1] )
    {
      case ' ':
        v19 = *(_DWORD *)(v2 + 220);
        *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
        *(_DWORD *)(v2 + 212) = v19;
        *(_QWORD *)(v2 + 232) = 0x3F50624DD2F1A9FCLL;
        break;
      case 'A':
        *(_QWORD *)(v2 + 232) = 0x3F847AE147AE147BLL;
        break;
      case 'B':
        *(_QWORD *)(v2 + 232) = 0x3FB999999999999ALL;
        break;
      case 'C':
        *(_QWORD *)(v2 + 232) = 0x3FE0000000000000LL;
        break;
      case 'D':
        *(_QWORD *)(v2 + 232) = 0x4030000000000000LL;
        break;
      default:
        *(_QWORD *)(v2 + 232) = 0x4030000000000000LL;
        sub_27040(v1, 2);
        break;
    }
    if ( v20[0] == 32 )
      *(_BYTE *)(v2 + 32) = v20[2] == 76;
    else
      *(_BYTE *)(v2 + 32) = 3;
    result = (_BYTE *)sub_27578((_DWORD *)v2);
    if ( !result )
      return (_BYTE *)sub_27040(v1, 6);
    return result;
  }
  v6 = v3[2];
  if ( v6 )
  {
    if ( dword_7CF4C > 1 )
    {
      v7 = (const char *)sub_503E0(&v24);
      result = (_BYTE *)printf("wwvb: <LF> @ %s\n", v7);
      v6 = v3[2];
    }
  }
  else
  {
    v15 = dword_7CF4C;
    result = v24;
    v16 = v25;
    *v3 = (int)v24;
    v3[1] = v16;
    if ( v15 > 1 )
    {
      v17 = (const char *)sub_503E0(&v24);
      result = (_BYTE *)printf("wwvb: <CR> @ %s\n", v17);
      v3[2] = v3[2] == 0;
      return result;
    }
  }
  v3[2] = v6 == 0;
  return result;
}
