int __fastcall sub_30214(unsigned int *a1, int a2, int a3, int a4, unsigned __int8 a5)
{
  int v8; // r1
  int *v9; // r3
  int v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r7
  const char *v14; // r1
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char **v17; // r0
  int result; // r0
  __int64 v19; // kr00_8
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  char *v22; // r2
  int v23; // [sp+Ch] [bp-200Ch] BYREF
  char v24[4]; // [sp+10h] [bp-2008h] BYREF
  int v25; // [sp+14h] [bp-2004h] BYREF
  char s[8168]; // [sp+18h] [bp-2000h] BYREF

  v23 = a2;
  if ( a5 )
    sub_2E530(a1, "{\"STATUS\":[");
  v8 = dword_6CD94[0];
  if ( dword_6CD94[0] == 4 )
  {
LABEL_9:
    v11 = sub_2E418(0, "STATUS", 1, "F", 0);
    v12 = sub_2E418(v11, "When", 16, (const char *)&dword_6F944, 0);
    v25 = -1;
    v13 = sub_2E418(v12, "Code", 6, (const char *)&v25, 0);
    sprintf(s, "%d", v23);
    LOWORD(v14) = (unsigned __int16)"Msg";
    v15 = v13;
    goto LABEL_10;
  }
  if ( dword_6CD98 != v23 )
  {
    v9 = dword_6CD94;
    v10 = 0;
    while ( 1 )
    {
      v8 = v9[4];
      ++v10;
      v9 += 4;
      if ( v8 == 4 )
        goto LABEL_9;
      if ( v9[1] == v23 )
        goto LABEL_13;
    }
  }
  v10 = 0;
LABEL_13:
  switch ( v8 )
  {
    case 2:
      v24[0] = 73;
      break;
    case 3:
      v24[0] = 83;
      break;
    case 1:
      v24[0] = 87;
      break;
    default:
      v24[0] = 69;
      break;
  }
  v24[1] = 0;
  v19 = *(_QWORD *)&dword_6CD94[4 * v10 + 2];
  switch ( (int)v19 )
  {
    case 0:
    case 1:
    case 2:
    case 14:
      sprintf(s, (const char *)HIDWORD(v19), a3);
      break;
    case 5:
      sprintf(s, (const char *)HIDWORD(v19), dword_72EF0);
      break;
    case 6:
      sprintf(s, (const char *)HIDWORD(v19), a3, dword_72EF0 - 1);
      break;
    case 7:
      sprintf(s, (const char *)HIDWORD(v19));
      break;
    case 8:
      sprintf(s, (const char *)HIDWORD(v19), "command");
      break;
    case 9:
      sprintf(s, (const char *)HIDWORD(v19), a3, *(_DWORD *)(*(_DWORD *)(dword_732EC + 4 * a3) + 172));
      break;
    case 10:
      sprintf(s, (const char *)HIDWORD(v19), a4);
      break;
    case 11:
      sprintf(s, (const char *)HIDWORD(v19), a3, a4);
      break;
    case 12:
      v22 = "false";
      if ( a3 )
        v22 = "true";
      sprintf(s, (const char *)HIDWORD(v19), v22, "true");
      break;
    case 13:
      sprintf(s, (const char *)HIDWORD(v19), a4, a3);
      break;
    default:
      strcpy(s, (const char *)HIDWORD(v19));
      break;
  }
  v20 = sub_2E418(0, "STATUS", 1, v24, 0);
  v21 = sub_2E418(v20, "When", 16, (const char *)&dword_6F944, 0);
  v15 = sub_2E418(v21, "Code", 6, (const char *)&v23, 0);
  LOWORD(v14) = 14468;
LABEL_10:
  HIWORD(v14) = (unsigned int)"Msg" >> 16;
  v16 = sub_2E418(v15, v14, 0, s, 0);
  v17 = (char **)sub_2E418(v16, "Description", 0, (const char *)off_6CB58, 0);
  result = sub_2F9C4(a1, v17, a5, 0);
  if ( a5 )
    return sub_2E530(a1, (char *)&word_4EAF0);
  return result;
}
