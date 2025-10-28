int __fastcall sub_52D74(_DWORD *a1, int a2, int a3, bool *a4)
{
  size_t *v4; // lr
  unsigned int v5; // r12
  int v6; // r12
  const void *v7; // r1
  size_t v8; // r2

  v4 = (size_t *)a1[283];
  v5 = *(_DWORD *)(a3 + 48);
  a1[269] = 0;
  a1[268] = bswap32(v5);
  if ( v4 )
  {
    v6 = *(unsigned __int8 *)(a3 + 78);
    v7 = (const void *)(a3 + 52);
    v8 = *v4;
    *a4 = v6 != 0;
    memcpy(v4 + 1, v7, v8);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
