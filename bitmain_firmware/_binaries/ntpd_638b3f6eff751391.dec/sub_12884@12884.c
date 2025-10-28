bool __fastcall sub_12884(int a1)
{
  _BOOL4 v1; // r4
  const char *v3; // r0

  if ( *(_WORD *)a1 == 2 )
    v1 = (bswap32(*(_DWORD *)(a1 + 4)) & 0xF0000000) == -536870912;
  else
    v1 = *(unsigned __int8 *)(a1 + 8) == 255;
  if ( v1 || dword_7CF4C <= 3 )
    return v1;
  v3 = (const char *)sub_50CD0(a1);
  printf("address %s is not multicast\n", v3);
  return 0;
}
