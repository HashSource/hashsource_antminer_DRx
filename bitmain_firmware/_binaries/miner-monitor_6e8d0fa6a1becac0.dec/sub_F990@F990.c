char *__fastcall sub_F990(const char *a1, int a2, char *a3)
{
  FILE *v5; // r4
  size_t v6; // r6
  void *v7; // r7
  _DWORD *v8; // r4
  _DWORD *v9; // r0

  v5 = fopen(a1, "rb+");
  if ( !v5 )
    puts("open error1111");
  fseek(v5, 0, 2);
  v6 = ftell(v5);
  if ( !v6 )
    return 0;
  fseek(v5, 0, 0);
  v7 = malloc(v6 + 100);
  fread(v7, 1u, v6, v5);
  fclose(v5);
  v8 = sub_D9D8((const char *)v7);
  v9 = sub_DA50((int)v8, a2);
  strcpy(a3, (const char *)v9[4]);
  sub_D864(v8);
  free(v7);
  return a3;
}
