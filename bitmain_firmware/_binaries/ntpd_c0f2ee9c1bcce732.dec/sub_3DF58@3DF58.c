_BYTE *__fastcall sub_3DF58(_DWORD *a1)
{
  size_t v1; // r5
  int v2; // r4
  int v3; // r6
  _BYTE *result; // r0
  int v5; // r8
  int v6; // r1
  int v7; // r1
  int v8; // r3
  const char *v9; // r1
  int v10; // r3
  size_t v11; // r0
  char v12; // r0
  const char *v13; // r1
  const char *v14; // r1
  int v15; // r0
  int v16; // r1
  char v17; // r3
  int v18; // r1
  char v19; // [sp+17h] [bp-1h] BYREF
  _DWORD v20[2]; // [sp+18h] [bp+0h] BYREF
  char s1[2]; // [sp+20h] [bp+8h] BYREF
  char src[126]; // [sp+22h] [bp+Ah] BYREF

  v1 = a1[2];
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v2 + 28);
  result = sub_27AAC(a1, s1, 128, v20);
  v5 = (int)result;
  if ( !result )
    return result;
  v6 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v2 + 216) = *(_DWORD *)v3;
  *(_DWORD *)(v2 + 220) = v6;
  result = (_BYTE *)v20[0];
  v7 = v20[1];
  *(_DWORD *)v3 = v20[0];
  *(_DWORD *)(v3 + 4) = v7;
  if ( v5 <= 2 )
    return result;
  v8 = *(_DWORD *)(v3 + 8);
  if ( v8 )
    goto LABEL_17;
  if ( !strncmp(s1, "TQ", 2u) )
  {
    *(_BYTE *)(v3 + 12) = src[0];
    return (_BYTE *)write(*(_DWORD *)(v2 + 20), "SR", 2u);
  }
  if ( strncmp(s1, "SR", 2u) )
  {
    if ( !strncmp(s1, "LA", 2u) )
    {
      strcpy((char *)(v3 + 53), src);
      return (_BYTE *)write(*(_DWORD *)(v2 + 20), "LO", 2u);
    }
    if ( !strncmp(s1, "LO", 2u) )
    {
      *(_WORD *)(v3 + strlen((const char *)(v3 + 53)) + 53) = 32;
      strcat((char *)(v3 + 53), src);
      return (_BYTE *)write(*(_DWORD *)(v2 + 20), "LH", 2u);
    }
    if ( !strncmp(s1, "LH", 2u) )
    {
      *(_WORD *)(v3 + strlen((const char *)(v3 + 53)) + 53) = 32;
      strcat((char *)(v3 + 53), src);
      return (_BYTE *)write(*(_DWORD *)(v2 + 20), "DB", 2u);
    }
    result = (_BYTE *)strncmp(s1, "DB", 2u);
    if ( result )
    {
      *(_DWORD *)(v3 + 8) = 1;
      return result;
    }
    *(_WORD *)(v3 + strlen((const char *)(v3 + 53)) + 53) = 32;
    strcat((char *)(v3 + 53), src);
    sub_2DDBC(v1 + 12, (const char *)(v3 + 53));
    if ( dword_7CF4C )
      printf("arbiter: %s\n", (const char *)(v3 + 53));
    v9 = "B5";
    if ( (*(_BYTE *)(v1 + 59) & 1) != 0 )
      v9 = "O5";
    result = (_BYTE *)write(*(_DWORD *)(v2 + 20), v9, 2u);
    v8 = *(_DWORD *)(v3 + 8);
LABEL_17:
    v10 = v8 + 1;
    *(_DWORD *)(v3 + 8) = v10;
    if ( v10 > 1 && v5 > 23 )
    {
      strncpy((char *)(v2 + 40), s1, 0x80u);
      *(_BYTE *)(v2 + 62) = *(_BYTE *)(v3 + 12);
      v11 = strlen((const char *)(v2 + 40));
      v19 = 32;
      *(_DWORD *)(v2 + 168) = stpcpy(v2 + v11 + 40) - (v2 + 40);
      if ( sscanf(
             (const char *)(v2 + 40),
             "%c%2d %3d %2d:%2d:%2d",
             &v19,
             v2 + 172,
             v2 + 176,
             v2 + 180,
             v2 + 184,
             v2 + 188) == 6 )
      {
        switch ( *(_BYTE *)(v3 + 12) )
        {
          case '0':
            v18 = *(_DWORD *)(v2 + 220);
            *(_DWORD *)(v2 + 208) = *(_DWORD *)(v2 + 216);
            *(_DWORD *)(v2 + 212) = v18;
            *(_QWORD *)(v2 + 232) = 0x3E7AD7F29ABCAF48LL;
            goto LABEL_34;
          case '4':
            *(_QWORD *)(v2 + 232) = 0x3EB0C6F7A0B5ED8DLL;
            goto LABEL_34;
          case '5':
            *(_QWORD *)(v2 + 232) = 0x3EE4F8B588E368F1LL;
            goto LABEL_34;
          case '6':
            *(_QWORD *)(v2 + 232) = 0x3F1A36E2EB1C432DLL;
            goto LABEL_34;
          case '7':
            *(_QWORD *)(v2 + 232) = 0x3F50624DD2F1A9FCLL;
            goto LABEL_34;
          case '8':
            *(_QWORD *)(v2 + 232) = 0x3F847AE147AE147BLL;
            goto LABEL_34;
          case '9':
            *(_QWORD *)(v2 + 232) = 0x3FB999999999999ALL;
            goto LABEL_34;
          case 'A':
            *(_QWORD *)(v2 + 232) = 0x3FF0000000000000LL;
            goto LABEL_34;
          case 'B':
            *(_QWORD *)(v2 + 232) = 0x4024000000000000LL;
LABEL_34:
            if ( v19 == 32 )
              v17 = 0;
            else
              v17 = 3;
            *(_BYTE *)(v2 + 32) = v17;
            if ( sub_27698((_DWORD *)v2) )
            {
              if ( *(double *)(v1 + 432) > 1.5 )
                sub_276A0(v1);
            }
            else
            {
              sub_27040(v1, 6);
            }
            v12 = *(_BYTE *)(v1 + 59);
            v13 = "B0";
            break;
          case 'F':
            v15 = v1;
            v16 = 3;
            goto LABEL_32;
          default:
            v15 = v1;
            v16 = 2;
LABEL_32:
            *(_QWORD *)(v2 + 232) = 0x4030000000000000LL;
            sub_27040(v15, v16);
            v12 = *(_BYTE *)(v1 + 59);
            v13 = "B0";
            break;
        }
      }
      else
      {
        sub_27040(v1, 2);
        v12 = *(_BYTE *)(v1 + 59);
        v13 = "B0";
      }
      if ( (v12 & 1) != 0 )
        v13 = "O0";
      return (_BYTE *)write(*(_DWORD *)(v2 + 20), v13, 2u);
    }
    return result;
  }
  strcpy((char *)(v3 + 13), src);
  if ( (*(_BYTE *)(v2 + 752) & 8) != 0 )
    return (_BYTE *)write(*(_DWORD *)(v2 + 20), "LA", 2u);
  v14 = "B5";
  if ( (*(_BYTE *)(v1 + 59) & 1) != 0 )
    v14 = "O5";
  return (_BYTE *)write(*(_DWORD *)(v2 + 20), v14, 2u);
}
