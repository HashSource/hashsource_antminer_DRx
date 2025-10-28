int __fastcall sub_265F0(int a1, int a2, int a3, const char *a4, const char *a5)
{
  size_t v8; // r6
  size_t v9; // r6
  void *v10; // r0
  char v12[2052]; // [sp+8h] [bp-804h] BYREF

  *(_DWORD *)(a1 + 172) = sub_304EC(a3, a1);
  *(_DWORD *)(a1 + 180) = a4;
  *(_DWORD *)(a1 + 184) = a5;
  v8 = strlen(a4);
  v9 = v8 + strlen(a5) + 2;
  v10 = malloc(v9);
  *(_DWORD *)(a1 + 176) = v10;
  if ( !v10 )
  {
    strcpy(v12, "Failed to malloc userpass");
    sub_3F178(3, v12, 1);
    sub_134A4(1);
  }
  snprintf(*(char **)(a1 + 176), v9, "%s:%s", *(const char **)(a1 + 180), *(const char **)(a1 + 184));
  *(_BYTE *)(a1 + 292) = 1;
  *(_BYTE *)(a1 + 97) = 1;
  *(_BYTE *)(a1 + 107) = a2 ^ 1;
  sub_BFC8(a1);
  pthread_create((pthread_t *)(a1 + 288), 0, (void *(*)(void *))start_routine, (void *)a1);
  if ( a2 )
    return 1;
  pthread_join(*(_DWORD *)(a1 + 288), 0);
  return (unsigned __int8)byte_7C3B8;
}
