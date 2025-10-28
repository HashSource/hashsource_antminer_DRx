int __fastcall sub_32F3C(unsigned int *a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r12
  int *v9; // r1
  int v10; // lr
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r4
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  int result; // r0
  int v18; // lr
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  char *v21; // r2
  int v22; // [sp+4h] [bp-200Ch] BYREF
  char v23[4]; // [sp+8h] [bp-2008h] BYREF
  int v24; // [sp+Ch] [bp-2004h] BYREF
  char s[8176]; // [sp+10h] [bp-2000h] BYREF

  v22 = a2;
  if ( a5 )
    sub_30708(a1, "{\"STATUS\":[");
  v8 = dword_6039C[0];
  if ( dword_6039C[0] == 4 )
  {
LABEL_9:
    v11 = sub_32CFC(0, "STATUS", "F", 0);
    v12 = sub_32F18(v11, "When", (const char *)&dword_62F90, 0);
    v24 = -1;
    v13 = sub_32DB0(v12, "Code", (const char *)&v24, 0);
    sprintf(s, "%d", v22);
    v14 = v13;
    goto LABEL_10;
  }
  if ( dword_603A0 != v22 )
  {
    v9 = dword_6039C;
    v10 = 0;
    while ( 1 )
    {
      v8 = v9[4];
      ++v10;
      v9 += 4;
      if ( v8 == 4 )
        goto LABEL_9;
      if ( v9[1] == v22 )
        goto LABEL_13;
    }
  }
  v10 = 0;
LABEL_13:
  switch ( v8 )
  {
    case 2:
      v23[0] = 73;
      break;
    case 3:
      v23[0] = 83;
      break;
    case 1:
      v23[0] = 87;
      break;
    default:
      v23[0] = 69;
      break;
  }
  v18 = 4 * v10;
  v23[1] = 0;
  switch ( dword_6039C[v18 + 2] )
  {
    case 0:
    case 1:
    case 2:
    case 14:
      sprintf(s, (const char *)dword_6039C[v18 + 3], a3);
      break;
    case 5:
      sprintf(s, (const char *)dword_6039C[v18 + 3], dword_63740);
      break;
    case 6:
      sprintf(s, (const char *)dword_6039C[v18 + 3], a3, dword_63740 - 1);
      break;
    case 7:
      sprintf(s, (const char *)dword_6039C[v18 + 3]);
      break;
    case 8:
      sprintf(s, (const char *)dword_6039C[v18 + 3], "command");
      break;
    case 9:
      sprintf(s, (const char *)dword_6039C[v18 + 3], a3, *(_DWORD *)(*(_DWORD *)(dword_639E0 + 4 * a3) + 164));
      break;
    case 10:
      sprintf(s, (const char *)dword_6039C[v18 + 3], a4);
      break;
    case 11:
      sprintf(s, (const char *)dword_6039C[v18 + 3], a3, a4);
      break;
    case 12:
      v21 = "false";
      if ( a3 )
        v21 = "true";
      sprintf(s, (const char *)dword_6039C[v18 + 3], v21);
      break;
    case 13:
      sprintf(s, (const char *)dword_6039C[v18 + 3], a4, a3);
      break;
    default:
      strcpy(s, (const char *)dword_6039C[v18 + 3]);
      break;
  }
  v19 = sub_32CFC(0, "STATUS", v23, 0);
  v20 = sub_32F18(v19, "When", (const char *)&dword_62F90, 0);
  v14 = sub_32DB0(v20, "Code", (const char *)&v22, 0);
LABEL_10:
  v15 = sub_32CD8(v14, "Msg", s, 0);
  v16 = sub_32CD8(v15, "Description", (const char *)off_60174, 0);
  result = sub_32418(a1, (int)v16, a5, 0);
  if ( a5 )
    return sub_30708(a1, (char *)word_56150);
  return result;
}
