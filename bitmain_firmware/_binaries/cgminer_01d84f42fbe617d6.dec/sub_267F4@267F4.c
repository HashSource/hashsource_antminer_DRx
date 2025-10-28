int __fastcall sub_267F4(int a1, int a2, char *a3, const char *a4, const char *a5)
{
  int v8; // r0
  size_t v9; // r8
  size_t v10; // r8
  char *v11; // r0
  int v12; // r1
  int *v13; // r2
  char v15[2048]; // [sp+8h] [bp-800h] BYREF

  v8 = sub_2B5C8(a3);
  *(_DWORD *)(a1 + 172) = a4;
  *(_DWORD *)(a1 + 176) = a5;
  *(_DWORD *)(a1 + 164) = v8;
  v9 = strlen(a4);
  v10 = v9 + strlen(a5) + 2;
  v11 = (char *)malloc(v10);
  *(_DWORD *)(a1 + 168) = v11;
  if ( !v11 )
  {
    strcpy(v15, "Failed to malloc userpass");
    sub_38438(3, v15, 1);
    sub_16724(1);
  }
  snprintf(v11, v10, "%s:%s", a4, a5);
  v12 = *(_DWORD *)(a1 + 100);
  v13 = (int *)(a2 ^ 1);
  *(_BYTE *)(a1 + 107) = a2 ^ 1;
  if ( v12 != 1 )
  {
    *(_DWORD *)(a1 + 100) = 1;
    v13 = &dword_63B84;
  }
  *(_BYTE *)(a1 + 284) = 1;
  *(_BYTE *)(a1 + 97) = 1;
  if ( v12 != 1 )
    ++*v13;
  pthread_create((pthread_t *)(a1 + 280), 0, (void *(*)(void *))start_routine, (void *)a1);
  if ( a2 )
    return 1;
  pthread_join(*(_DWORD *)(a1 + 280), 0);
  return (unsigned __int8)byte_615C8;
}
