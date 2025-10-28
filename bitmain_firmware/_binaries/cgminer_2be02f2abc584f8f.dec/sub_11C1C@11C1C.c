char *__fastcall sub_11C1C(int a1, _DWORD *a2, int a3)
{
  int v6; // r7
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  char *result; // r0
  unsigned int v11[2]; // [sp+4h] [bp-8h] BYREF

  v6 = *(_DWORD *)(a1 + 400);
  sub_11BE0((void **)a1);
  memcpy((void *)a1, a2, 0x220u);
  *(_DWORD *)(a1 + 400) = v6;
  v7 = (const char *)a2[86];
  if ( v7 )
    *(_DWORD *)(a1 + 344) = _strdup(v7);
  v8 = (const char *)a2[95];
  if ( v8 )
    *(_DWORD *)(a1 + 380) = _strdup(v8);
  v9 = (const char *)a2[91];
  if ( v9 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a1 + 68) = bswap32(bswap32(*(_DWORD *)(a1 + 68)) + a3);
      sub_2CE9C(v11, a2[91], 4);
      v11[0] = bswap32(bswap32(v11[0]) + a3);
      *(_DWORD *)(a1 + 364) = sub_2CDEC(v11, 4);
    }
    else
    {
      *(_DWORD *)(a1 + 364) = _strdup(v9);
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a1 + 68) = bswap32(bswap32(*(_DWORD *)(a1 + 68)) + a3);
  }
  result = (char *)a2[97];
  if ( result )
  {
    result = _strdup(result);
    *(_DWORD *)(a1 + 388) = result;
  }
  return result;
}
