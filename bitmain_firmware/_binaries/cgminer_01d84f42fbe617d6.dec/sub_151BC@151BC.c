char *__fastcall sub_151BC(int a1, _DWORD *a2, int a3)
{
  int v4; // r7
  const char *v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  char *result; // r0
  unsigned int v11[2]; // [sp+4h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1 + 340);
  sub_15180((void **)a1);
  memcpy((void *)a1, a2, 0x1E0u);
  *(_DWORD *)(a1 + 340) = v4;
  v7 = (const char *)a2[72];
  if ( v7 )
    *(_DWORD *)(a1 + 288) = _strdup(v7);
  v8 = (const char *)a2[80];
  if ( v8 )
    *(_DWORD *)(a1 + 320) = _strdup(v8);
  v9 = (const char *)a2[77];
  if ( v9 )
  {
    if ( a3 )
    {
      *(_DWORD *)(a1 + 68) = bswap32(bswap32(*(_DWORD *)(a1 + 68)) + a3);
      sub_295B8(v11, a2[77], 4);
      v11[0] = bswap32(bswap32(v11[0]) + a3);
      *(_DWORD *)(a1 + 308) = sub_294B8(v11, 4);
    }
    else
    {
      *(_DWORD *)(a1 + 308) = _strdup(v9);
    }
  }
  else if ( a3 )
  {
    *(_DWORD *)(a1 + 68) = bswap32(bswap32(*(_DWORD *)(a1 + 68)) + a3);
  }
  result = (char *)a2[82];
  if ( result )
  {
    result = _strdup(result);
    *(_DWORD *)(a1 + 328) = result;
  }
  return result;
}
