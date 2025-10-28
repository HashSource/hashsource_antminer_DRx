int __fastcall sub_317FC(int a1, int a2, int a3, int a4)
{
  int v6; // r8
  int v7; // r6
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r9
  _DWORD *v11; // r9
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  char **v14; // r1
  int result; // r0
  _DWORD *v16; // r0
  double v17; // [sp+8h] [bp-ACh] BYREF
  char s[32]; // [sp+10h] [bp-A4h] BYREF
  char v19[32]; // [sp+30h] [bp-84h] BYREF
  char v20[32]; // [sp+50h] [bp-64h] BYREF
  char v21[32]; // [sp+70h] [bp-44h] BYREF
  char v22[36]; // [sp+90h] [bp-24h] BYREF

  memset(s, 0, sizeof(s));
  v6 = a4;
  memset(v19, 0, sizeof(v19));
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, 0x20u);
  v7 = sub_1E098();
  sub_30214((unsigned int *)a1, 7, 0, 0, a4);
  if ( a4 )
    v6 = sub_2E530((unsigned int *)a1, ",\"POOLS\":[");
  *(_WORD *)s = 48;
  v17 = dbl_739E8 / 1000.0 / dbl_6C2C0;
  v8 = sub_2E418(0, "LCD", 1, s, 0);
  v9 = sub_2E418(v8, "GHS5s", 17, (const char *)&dbl_6F210, 0);
  v10 = sub_2E418(v9, "GHSavg", 17, (const char *)&v17, 0);
  sprintf(v19, "%d", dword_73528);
  v11 = sub_2E418(v10, "fan", 1, v19, 0);
  sprintf(v20, "%d", dword_7352C);
  v12 = sub_2E418(v11, "temp", 1, v20, 0);
  if ( v7 )
  {
    v13 = sub_2E418(v12, "pool", 1, *(const char **)(v7 + 172), 0);
    v14 = (char **)sub_2E418(v13, "user", 1, *(const char **)(v7 + 180), 0);
  }
  else
  {
    strcpy(v21, "no");
    strcpy(v22, "no");
    v16 = sub_2E418(v12, "pool", 1, v21, 0);
    v14 = (char **)sub_2E418(v16, "user", 1, v22, 0);
  }
  result = sub_2F9C4((unsigned int *)a1, v14, a4, a4);
  if ( v6 )
    *(_BYTE *)(a1 + 13) = 1;
  return result;
}
