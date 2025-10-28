int __fastcall sub_4FFC0(size_t a1, int a2, char **a3)
{
  const char *v4; // r6
  size_t v7; // r8
  size_t v8; // r8
  char *v9; // r7
  int v10; // r0
  int v11; // r5

  v4 = *(const char **)(a1 + 48);
  v7 = strlen(v4);
  v8 = v7 + strlen(off_79E4C) + 2;
  v9 = sub_4F524(v8);
  snprintf(v9, v8, "%s\n%s", v4, off_79E4C);
  *(_DWORD *)(a1 + 48) = v9;
  v10 = sub_4BD84(a1, a2, a3);
  *(_DWORD *)(a1 + 48) = v4;
  v11 = v10;
  free(v9);
  return v11;
}
