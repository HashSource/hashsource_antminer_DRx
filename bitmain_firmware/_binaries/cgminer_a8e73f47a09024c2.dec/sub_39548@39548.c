unsigned __int8 **__fastcall sub_39548(int a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r12
  int *v9; // r1
  int v10; // lr
  char *v11; // r2
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  unsigned __int8 **v16; // r0
  unsigned __int8 **result; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r4
  _DWORD *v21; // r0
  unsigned __int8 **v22; // r0
  int v23; // [sp+4h] [bp-200Ch] BYREF
  int v24; // [sp+8h] [bp-2008h] BYREF
  char v25[4]; // [sp+Ch] [bp-2004h] BYREF
  char s[8176]; // [sp+10h] [bp-2000h] BYREF

  v23 = a2;
  if ( a5 )
    sub_3681C(a1, "{\"STATUS\":[");
  v8 = dword_79F64[0];
  if ( dword_79F64[0] == 4 )
  {
LABEL_33:
    v18 = sub_39308(0, "STATUS", "F", 0);
    v19 = sub_39524(v18, "When", (const char *)&dword_7CB30, 0);
    v24 = -1;
    v20 = sub_393BC(v19, "Code", (const char *)&v24, 0);
    sprintf(s, "%d", v23);
    v21 = sub_392E4(v20, "Msg", s, 0);
    v22 = (unsigned __int8 **)sub_392E4(v21, "Description", (const char *)off_79D38, 0);
    result = sub_387F0(a1, v22, a5, 0);
    if ( a5 )
      return (unsigned __int8 **)sub_3681C(a1, (char *)&word_642BC);
    return result;
  }
  if ( dword_79F68 != v23 )
  {
    v9 = dword_79F64;
    v10 = 0;
    while ( 1 )
    {
      ++v10;
      v8 = v9[4];
      if ( v8 == 4 )
        goto LABEL_33;
      v9 += 4;
      if ( v9[1] == v23 )
        goto LABEL_8;
    }
  }
  v10 = 0;
LABEL_8:
  switch ( v8 )
  {
    case 2:
      v25[0] = 73;
      break;
    case 3:
      v25[0] = 83;
      break;
    case 1:
      v25[0] = 87;
      break;
    default:
      v25[0] = 69;
      break;
  }
  v25[1] = 0;
  switch ( dword_79F64[4 * v10 + 2] )
  {
    case 0:
    case 1:
    case 2:
    case 14:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], a3);
      break;
    case 5:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], dword_802C8);
      break;
    case 6:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], a3, dword_802C8 - 1);
      break;
    case 7:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3]);
      break;
    case 8:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], "command");
      break;
    case 9:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], a3, *(_DWORD *)(*(_DWORD *)(dword_80568 + 4 * a3) + 172));
      break;
    case 10:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], a4);
      break;
    case 11:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], a3, a4);
      break;
    case 12:
      if ( a3 )
        v11 = "true";
      else
        v11 = "false";
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], v11);
      break;
    case 13:
      sprintf(s, (const char *)dword_79F64[4 * v10 + 3], a4, a3);
      break;
    default:
      strcpy(s, (const char *)dword_79F64[4 * v10 + 3]);
      break;
  }
  v12 = sub_39308(0, "STATUS", v25, 0);
  v13 = sub_39524(v12, "When", (const char *)&dword_7CB30, 0);
  v14 = sub_393BC(v13, "Code", (const char *)&v23, 0);
  v15 = sub_392E4(v14, "Msg", s, 0);
  v16 = (unsigned __int8 **)sub_392E4(v15, "Description", (const char *)off_79D38, 0);
  result = sub_387F0(a1, v16, a5, 0);
  if ( a5 )
    return (unsigned __int8 **)sub_3681C(a1, (char *)&word_642BC);
  return result;
}
