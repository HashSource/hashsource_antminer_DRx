int __fastcall sub_4F414(_DWORD *a1, int a2, int a3)
{
  size_t *v4; // r4
  int v5; // r3
  char *v6; // r0

  v4 = (size_t *)a1[283];
  v5 = *(_DWORD *)(a3 + 48);
  a1[269] = 0;
  a1[268] = v5;
  if ( v4 )
  {
    v6 = (char *)a1[281];
    if ( v6 )
      strcpy(v6, (const char *)(a3 + 16));
    memcpy(v4 + 1, (const void *)(a3 + 52), *v4);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
