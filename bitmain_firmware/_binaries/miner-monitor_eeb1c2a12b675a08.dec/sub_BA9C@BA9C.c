int __fastcall sub_BA9C(const char *a1, void **a2, int *a3)
{
  char v3; // r11
  FILE *v6; // r0
  FILE *v7; // r4
  size_t v8; // r9
  int v10; // r5
  int v11; // r0
  size_t v12; // r4
  void *v13; // r0
  int v14; // r0
  size_t v15; // r10
  int v16; // r0
  _DWORD *v17; // r9
  size_t v18; // r8
  int v19; // r9
  char *v20; // r9
  int v21; // r0
  char *v22; // r9
  int v23; // r0
  int v24; // r2
  int v25; // [sp+0h] [bp-Ch]
  void *ptr; // [sp+4h] [bp-8h]

  v6 = fopen(a1, "rb+");
  v7 = v6;
  if ( v6 )
  {
    fseek(v6, 0, 2);
    v8 = ftell(v7);
    if ( v8 )
    {
      fseek(v7, 0, 0);
      ptr = malloc(v8 + 100);
      fread(ptr, 1u, v8, v7);
      fclose(v7);
      v10 = sub_D9D8(ptr);
      v11 = sub_D9FC();
      v12 = 4 * v11;
      v25 = v11;
      *a2 = malloc(4 * v11);
      v13 = malloc(v12);
      if ( v25 > 0 )
      {
        v12 = 0;
        v3 = 0;
      }
      *a3 = (int)v13;
      if ( v25 > 0 )
      {
        do
        {
          v14 = sub_DA28(v10, v12);
          v15 = strlen(*(const char **)(v14 + 32));
          v16 = sub_DA28(v10, v12);
          v17 = *a2;
          v18 = strlen(*(const char **)(v16 + 16));
          v17[v12] = malloc(v15 + 1);
          v19 = *a3;
          *(_DWORD *)(v19 + 4 * v12) = malloc(v18 + 1);
          v20 = (char *)*((_DWORD *)*a2 + v12);
          v21 = sub_DA28(v10, v12);
          strcpy(v20, *(const char **)(v21 + 32));
          v22 = *(char **)(*a3 + 4 * v12);
          v23 = sub_DA28(v10, v12);
          strcpy(v22, *(const char **)(v23 + 16));
          *(_BYTE *)(*((_DWORD *)*a2 + v12) + v15) = v3;
          v24 = *(_DWORD *)(*a3 + 4 * v12++);
          *(_BYTE *)(v24 + v18) = v3;
        }
        while ( v12 != v25 );
      }
      sub_D864(v10);
      free(ptr);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v25 = 0;
    puts("open error0");
  }
  return v25;
}
