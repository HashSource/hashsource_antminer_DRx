int __fastcall sub_52DDC(_DWORD *a1, int a2, int a3)
{
  size_t *v3; // r12
  unsigned int v4; // r3

  v3 = (size_t *)a1[283];
  v4 = *(_DWORD *)(a3 + 48);
  a1[269] = 0;
  a1[268] = bswap32(v4);
  if ( v3 )
  {
    memcpy(v3 + 1, (const void *)(a3 + 52), *v3);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
