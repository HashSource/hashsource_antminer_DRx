int __fastcall sub_50BA0(int a1, int a2, int a3)
{
  size_t *v3; // r4
  const char *v4; // r1
  size_t v7; // r2

  v3 = *(size_t **)(a1 + 1132);
  if ( v3 )
  {
    v4 = *(const char **)(a2 + 1580);
    if ( (!v4 || !strcmp((const char *)(a3 + 16), v4)) && (v7 = *v3, *v3 == *(_DWORD *)(a3 + 104)) )
    {
      *(_QWORD *)(a1 + 1072) = (int)bswap32(*(_DWORD *)(a3 + 80));
      memcpy(v3 + 1, (const void *)(a3 + 86), v7);
      *(_DWORD *)(a1 + 1100) = *(_DWORD *)(a3 + 108);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
