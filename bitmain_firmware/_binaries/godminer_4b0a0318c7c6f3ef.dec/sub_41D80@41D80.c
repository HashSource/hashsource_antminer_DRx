int __fastcall sub_41D80(int a1, int a2, char *a3)
{
  int *v3; // r9
  int v6; // r5
  const char *v7; // r11
  const char *v8; // r10
  int v9; // r12
  char s[4]; // [sp+18h] [bp-2Ch] BYREF
  int v12; // [sp+1Ch] [bp-28h]
  char v13; // [sp+20h] [bp-24h]
  _DWORD v14[6]; // [sp+24h] [bp-20h] BYREF
  char v15; // [sp+3Ch] [bp-8h]

  v3 = *(int **)(a1 + 1132);
  if ( v3 )
  {
    v12 = 0;
    *(_DWORD *)s = 0;
    v6 = a1 + 1088;
    v13 = 0;
    memset(v14, 0, sizeof(v14));
    v15 = 0;
    bin2hex((int)s, a1 + 1072, 4);
    bin2hex((int)v14, (int)(v3 + 1), *v3);
    v7 = *(const char **)(a2 + 16);
    v8 = *(const char **)(v6 + 36);
    v9 = rand();
    snprintf(
      a3,
      0xC00u,
      "{\"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"], \"id\": %d, \"method\": \"mining.submit\"}",
      v7,
      v8,
      (const char *)v14,
      (const char *)(v6 + 12),
      s,
      v9 % 3 + 10);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
