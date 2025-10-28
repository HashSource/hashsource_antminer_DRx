_DWORD *__fastcall sub_31C10(_DWORD *a1, const char *a2, int a3, const char *a4, char a5)
{
  _DWORD *v9; // r4
  char *v10; // r0
  bool v11; // zf
  int v12; // r3
  _DWORD *v14; // r0
  _QWORD *v15; // r0
  _WORD *v16; // r0
  _BYTE *v17; // r0
  _BYTE *v18; // r0
  _DWORD *v19; // r0
  int v20; // r1
  size_t v21; // r0
  char *v22; // r0
  char v23[2052]; // [sp+0h] [bp-804h] BYREF

  v9 = malloc(0x18u);
  v10 = _strdup(a2);
  v11 = a1 == 0;
  *v9 = a3;
  if ( !a1 )
  {
    v9[4] = v9;
    a1 = v9;
    v9[5] = v9;
  }
  v9[1] = v10;
  if ( !v11 )
  {
    v9[4] = a1[4];
    a1[4] = v9;
    v12 = v9[4];
    v9[5] = a1;
    *(_DWORD *)(v12 + 20) = v9;
  }
  *((_BYTE *)v9 + 12) = a5;
  if ( !a4 )
  {
    *((_BYTE *)v9 + 12) = 0;
    a4 = "(null)";
    *v9 = 2;
    goto LABEL_9;
  }
  if ( !a5 )
  {
LABEL_9:
    v9[2] = a4;
    return a1;
  }
  switch ( a3 )
  {
    case 0:
    case 1:
    case 2:
      v21 = strlen(a4);
      v22 = (char *)malloc(v21 + 1);
      v9[2] = v22;
      strcpy(v22, a4);
      break;
    case 3:
      v17 = malloc(4u);
      v9[2] = v17;
      *v17 = *a4;
      break;
    case 4:
    case 5:
      v16 = malloc(4u);
      v9[2] = v16;
      *v16 = *(_WORD *)a4;
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
      v18 = malloc(1u);
      v9[2] = v18;
      *v18 = *a4;
      break;
    case 15:
      v19 = malloc(8u);
      v9[2] = v19;
      v20 = *((_DWORD *)a4 + 1);
      *v19 = *(_DWORD *)a4;
      v19[1] = v20;
      break;
    default:
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        snprintf(v23, 0x800u, "API: unknown1 data type %d ignored", a3);
        sub_38438(3, v23, 0);
      }
      *v9 = 1;
      *((_BYTE *)v9 + 12) = 0;
      v9[2] = "Unknown";
      break;
  }
  return a1;
}
