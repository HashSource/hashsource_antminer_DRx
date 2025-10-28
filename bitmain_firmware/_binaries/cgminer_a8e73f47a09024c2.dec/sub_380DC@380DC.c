_DWORD *__fastcall sub_380DC(_DWORD *a1, const char *a2, int a3, const char *a4, char a5)
{
  _DWORD *v9; // r4
  size_t v10; // r0
  char *v11; // r0
  _BYTE *v12; // r0
  _WORD *v13; // r0
  _DWORD *v14; // r0
  _QWORD *v15; // r0
  _BYTE *v16; // r0
  _DWORD *v17; // r0
  int v18; // r1
  char v20[2052]; // [sp+0h] [bp-804h] BYREF

  v9 = malloc(0x18u);
  v9[1] = _strdup(a2);
  *v9 = a3;
  if ( a1 )
  {
    v9[4] = a1[4];
    a1[4] = v9;
    v9[5] = a1;
    *(_DWORD *)(v9[4] + 20) = v9;
  }
  else
  {
    v9[4] = v9;
    v9[5] = v9;
    a1 = v9;
  }
  *((_BYTE *)v9 + 12) = a5;
  if ( !a4 )
  {
    *v9 = 2;
    *((_BYTE *)v9 + 12) = 0;
    a4 = "(null)";
LABEL_7:
    v9[2] = a4;
    return a1;
  }
  if ( !a5 )
    goto LABEL_7;
  switch ( a3 )
  {
    case 0:
    case 1:
    case 2:
      v10 = strlen(a4);
      v11 = (char *)malloc(v10 + 1);
      v9[2] = v11;
      strcpy(v11, a4);
      break;
    case 3:
      v12 = malloc(4u);
      v9[2] = v12;
      *v12 = *a4;
      break;
    case 4:
    case 5:
      v13 = malloc(4u);
      v9[2] = v13;
      *v13 = *(_WORD *)a4;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 16:
    case 19:
    case 22:
    case 26:
      v14 = malloc(4u);
      v9[2] = v14;
      *v14 = *(_DWORD *)a4;
      break;
    case 10:
    case 11:
    case 12:
    case 13:
    case 17:
    case 18:
    case 20:
    case 21:
    case 23:
    case 24:
    case 25:
      v15 = malloc(8u);
      v9[2] = v15;
      *v15 = *(_QWORD *)a4;
      break;
    case 14:
      v16 = malloc(1u);
      v9[2] = v16;
      *v16 = *a4;
      break;
    case 15:
      v17 = malloc(8u);
      v9[2] = v17;
      v18 = *((_DWORD *)a4 + 1);
      *v17 = *(_DWORD *)a4;
      v17[1] = v18;
      break;
    default:
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
      {
        snprintf(v20, 0x800u, "API: unknown1 data type %d ignored", a3);
        sub_3F178(3, v20, 0);
      }
      *v9 = 1;
      *((_BYTE *)v9 + 12) = 0;
      v9[2] = "Unknown";
      break;
  }
  return a1;
}
