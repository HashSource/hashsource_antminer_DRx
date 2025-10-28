int __fastcall sub_5AD20(int a1, int a2, int a3)
{
  const char *v4; // r1
  size_t *v7; // r0

  v4 = *(const char **)(a2 + 1580);
  if ( v4 && strcmp((const char *)(a3 + 16), v4) )
    return 1;
  v7 = *(size_t **)(a1 + 1132);
  if ( v7 )
  {
    memcpy(v7 + 1, (const void *)(a3 + 48 + *(_DWORD *)(a2 + 76)), *v7);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private");
    return 3;
  }
}
