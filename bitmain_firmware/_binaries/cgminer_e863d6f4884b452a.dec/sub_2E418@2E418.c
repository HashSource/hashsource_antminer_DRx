_DWORD *__fastcall sub_2E418(_DWORD *a1, const char *a2, int a3, const char *a4, char a5)
{
  _DWORD *v9; // r4
  char *v10; // r0
  int v11; // r3
  _DWORD *v12; // r9
  _DWORD *result; // r0
  _DWORD *v14; // r0
  int v15; // r3
  _WORD *v16; // r0
  __int16 v17; // r3
  _QWORD *v18; // r0
  __int64 v19; // r2
  size_t v20; // r5
  void *v21; // r0
  _BYTE *v22; // r0
  char v23; // r3
  _BYTE *v24; // r0
  char v25; // r3
  _DWORD *v26; // r0
  int v27; // r1
  _DWORD *v28; // r2
  int v29; // r0
  _DWORD *v30; // r0
  int v31; // r3

  v9 = malloc(0x18u);
  v10 = _strdup(a2);
  *v9 = a3;
  v9[1] = v10;
  if ( a1 )
  {
    v11 = a1[4];
    v12 = a1;
    v9[5] = a1;
    a1[4] = v9;
    v9[4] = v11;
    *(_DWORD *)(v11 + 20) = v9;
  }
  else
  {
    v9[4] = v9;
    v12 = v9;
    v9[5] = v9;
  }
  *((_BYTE *)v9 + 12) = a5;
  if ( !a4 )
  {
    *((_BYTE *)v9 + 12) = 0;
    a4 = "(null)";
    *v9 = 2;
LABEL_7:
    v9[2] = a4;
    return v12;
  }
  if ( !a5 )
    goto LABEL_7;
  switch ( a3 )
  {
    case 3:
      v24 = malloc(4u);
      v25 = *a4;
      v9[2] = v24;
      *v24 = v25;
      return v12;
    case 4:
    case 5:
      v16 = malloc(4u);
      v17 = *(_WORD *)a4;
      v9[2] = v16;
      *v16 = v17;
      return v12;
    case 6:
    case 7:
    case 8:
    case 9:
    case 16:
      v14 = malloc(4u);
      v15 = *(_DWORD *)a4;
      v9[2] = v14;
      *v14 = v15;
      result = v12;
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
      v18 = malloc(8u);
      v19 = *(_QWORD *)a4;
      v9[2] = v18;
      *v18 = v19;
      return v12;
    case 14:
      v22 = malloc(1u);
      v23 = *a4;
      v9[2] = v22;
      *v22 = v23;
      return v12;
    case 15:
      v26 = malloc(8u);
      v27 = *((_DWORD *)a4 + 1);
      v28 = v26;
      v29 = *(_DWORD *)a4;
      v9[2] = v28;
      *v28 = v29;
      v28[1] = v27;
      return v12;
    case 19:
    case 22:
    case 26:
      v30 = malloc(4u);
      v31 = *(_DWORD *)a4;
      v9[2] = v30;
      *v30 = v31;
      return v12;
    default:
      v20 = strlen(a4) + 1;
      v21 = malloc(v20);
      v9[2] = v21;
      memcpy(v21, a4, v20);
      return v12;
  }
  return result;
}
