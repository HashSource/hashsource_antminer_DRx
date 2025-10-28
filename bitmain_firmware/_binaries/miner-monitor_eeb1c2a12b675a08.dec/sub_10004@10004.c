int __fastcall sub_10004(const char *a1, int a2)
{
  FILE *v3; // r4
  size_t v4; // r5
  void *v5; // r9
  _DWORD *v6; // r10
  _DWORD *v7; // r4
  _DWORD *v8; // r4
  int v9; // r7
  _DWORD *v10; // r0
  int v11; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0

  v3 = fopen(a1, "rb+");
  if ( !v3 )
    puts("open error");
  fseek(v3, 0, 2);
  v4 = ftell(v3);
  if ( !v4 )
    return 0;
  fseek(v3, 0, 0);
  v5 = malloc(v4 + 100);
  fread(v5, 1u, v4, v3);
  fclose(v3);
  v6 = sub_D9D8((const char *)v5);
  v7 = sub_DA50((int)v6, (int)"pools");
  sub_D9FC((int)v7);
  v8 = (_DWORD *)v7[2];
  if ( v8 )
  {
    v9 = 0;
    do
    {
      v10 = sub_DA50((int)v8, (int)"url");
      v11 = 164 * v9++;
      strcpy((char *)(a2 + v11 + 4), (const char *)v10[4]);
      v12 = sub_DA50((int)v8, (int)"user");
      strcpy((char *)(a2 + v11 + 84), (const char *)v12[4]);
      v13 = sub_DA50((int)v8, (int)"pass");
      strcpy((char *)(a2 + v11 + 124), (const char *)v13[4]);
      v8 = (_DWORD *)*v8;
    }
    while ( v8 );
  }
  *(_DWORD *)(a2 + 492) = sub_DA50((int)v6, (int)"api-listen")[5];
  *(_DWORD *)(a2 + 496) = sub_DA50((int)v6, (int)"api-network")[5];
  *(_DWORD *)(a2 + 500) = sub_DA50((int)v6, (int)"bitmain-nobeeper")[5];
  *(_DWORD *)(a2 + 504) = sub_DA50((int)v6, (int)"bitmain-notempoverctrl")[5];
  v14 = sub_DA50((int)v6, (int)"api-allow");
  strcpy((char *)(a2 + 508), (const char *)v14[4]);
  v15 = sub_DA50((int)v6, (int)"bitmain-freq");
  strcpy((char *)(a2 + 518), (const char *)v15[4]);
  v16 = sub_DA50((int)v6, (int)"bitmain-voltage");
  strcpy((char *)(a2 + 533), (const char *)v16[4]);
  free(v5);
  sub_D864(v6);
  return a2;
}
