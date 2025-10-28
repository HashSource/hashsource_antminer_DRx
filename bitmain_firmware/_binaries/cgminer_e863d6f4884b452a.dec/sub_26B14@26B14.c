int __fastcall sub_26B14(int a1, int a2, char *a3, const char *a4, const char *a5)
{
  int v8; // r0
  size_t v9; // r5
  size_t v10; // r5
  char *v11; // r0
  int v12; // r1
  char v14[2048]; // [sp+8h] [bp-800h] BYREF

  v8 = sub_2AA78(a3);
  *(_DWORD *)(a1 + 180) = a4;
  *(_DWORD *)(a1 + 172) = v8;
  *(_DWORD *)(a1 + 184) = a5;
  v9 = strlen(a4);
  v10 = v9 + strlen(a5) + 2;
  v11 = (char *)malloc(v10);
  *(_DWORD *)(a1 + 176) = v11;
  if ( !v11 )
  {
    strcpy(v14, "Failed to malloc userpass");
    sub_343C4(3, v14, 1);
    sub_1B070(1, 1);
  }
  snprintf(v11, v10, "%s:%s", a4, a5);
  v12 = *(_DWORD *)(a1 + 100);
  *(_BYTE *)(a1 + 292) = 1;
  *(_BYTE *)(a1 + 97) = 1;
  *(_BYTE *)(a1 + 107) = a2 ^ 1;
  if ( v12 != 1 )
    sub_1747C((_DWORD *)(a1 + 100));
  pthread_create((pthread_t *)(a1 + 288), 0, (void *(*)(void *))sub_1F5E0, (void *)a1);
  if ( !a2 )
  {
    pthread_join(*(_DWORD *)(a1 + 288), 0);
    return (unsigned __int8)byte_6DDB0;
  }
  return a2;
}
