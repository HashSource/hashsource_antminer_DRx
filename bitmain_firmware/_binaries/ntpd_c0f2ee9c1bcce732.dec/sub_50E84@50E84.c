char *__fastcall sub_50E84(int a1, int a2)
{
  int v4; // r6
  int v5; // r2
  int v6; // r8
  int v7; // r4
  char *v8; // r4
  int v10; // r6
  __int16 v11; // r9
  char v12; // r10
  size_t v13; // r0
  size_t v14; // r0
  int v15; // r0
  int *v16; // r1
  char *v17; // r3
  char *v18; // r0
  size_t v19; // r0
  int v20; // r6
  size_t v21; // r0
  size_t v22; // r0
  int v23; // r0
  int v24; // r7
  char *v25; // r0

  if ( !dword_C9AF4 )
    sub_4F7C0();
  v4 = dword_CB86C;
  v5 = dword_CB86C + 1;
  v6 = 4 * dword_CB86C;
  v7 = 5 * dword_CB86C;
  if ( dword_CB86C + 1 > 199 )
    v5 = 0;
  dword_CB86C = v5;
  v8 = &byte_CB870[16 * v7];
  memset(v8, 0, 0x50u);
  switch ( a1 )
  {
    case 2:
      if ( ((a2 >> 8) & 0x80) != 0 )
      {
        strcpy(v8, "conf");
        if ( (a2 & 0x4000) != 0 )
          strcpy(&byte_CB870[16 * v6 + 4 + 16 * v4], ", authenb");
      }
      else if ( (a2 & 0x4000) != 0 )
      {
        strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], "authenb");
      }
      if ( (a2 & 0x2000) != 0 )
      {
        if ( (a2 & 0xC000) != 0 )
          strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], ", auth");
        else
          strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], "auth");
      }
      if ( (a2 & 0x1000) != 0 )
      {
        if ( (a2 & 0xE000) != 0 )
          strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], ", reach");
        else
          strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], "reach");
      }
      if ( (a2 & 0x800) != 0 )
      {
        if ( (a2 & 0xF000) != 0 )
          strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], ", bcst");
        else
          strcpy(&byte_CB870[16 * v6 + 16 * v4 + strlen(v8)], "bcst");
      }
      v20 = 16 * (v6 + v4);
      strcpy(&byte_CB870[v20 + strlen(v8)], ", ");
      sub_50DC4(BYTE1(a2) & 7, dword_7C04C);
      v21 = strlen(v8);
      strcpy(&byte_CB870[v20 + stpcpy(&byte_CB870[v20 + v21]) - (_DWORD)v8], ", ");
      sub_50E24((unsigned __int8)a2 >> 4);
      v22 = strlen(v8);
      v23 = stpcpy(&byte_CB870[v20 + v22]);
      v24 = a2 & 0xF;
      if ( v24 )
      {
        strcpy(&byte_CB870[v20 + v23 - (_DWORD)v8], ", ");
        v25 = sub_50DC4(v24, dword_7C094);
        strcat(v8, v25);
      }
      return v8;
    case 3:
      v10 = 16 * (v6 + v4);
      v11 = *(_WORD *)", ";
      v12 = asc_6D188[2];
      strcpy(&byte_CB870[v10 + strlen(v8)], ", ");
      sub_50E24((unsigned __int8)a2 >> 4);
      v19 = strlen(v8);
      v15 = stpcpy(&byte_CB870[v10 + v19]);
      v16 = (int *)&unk_7C11C;
      break;
    case 1:
      sub_50DC4((unsigned __int16)a2 >> 14, dword_7BF3C);
      v10 = 16 * (v6 + v4);
      v11 = *(_WORD *)", ";
      v12 = asc_6D188[2];
      strcpy(&byte_CB870[v10 + stpcpy(v8) - (_DWORD)v8], ", ");
      sub_50DC4(((unsigned int)a2 >> 8) & 0x3F, dword_7BF64);
      v13 = strlen(v8);
      strcpy(&byte_CB870[v10 + stpcpy(&byte_CB870[v10 + v13]) - (_DWORD)v8], ", ");
      sub_50E24((unsigned __int8)a2 >> 4);
      v14 = strlen(v8);
      v15 = stpcpy(&byte_CB870[v10 + v14]);
      v16 = (int *)&unk_7BFBC;
      break;
    default:
      return v8;
  }
  v17 = &byte_CB870[v10 + v15 - (_DWORD)v8];
  *(_WORD *)v17 = v11;
  v17[2] = v12;
  v18 = sub_50DC4(a2 & 0xF, v16);
  strcat(v8, v18);
  return v8;
}
